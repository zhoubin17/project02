/*
练习3.15
对3.14进行改进，读入字符串

注意：因为for （auto c ： str）支持c++11标准，所以需执行g++ -std=c++11 project02.cpp
完成时间：2018.12.30
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;
//using std::vector;

int main()
{
    vector<string> vString;
    string s;
    char cont = 'y';
    while(cin >> s)
    {
        vString.push_back(s);
        cout << "您要你继续吗（y or n）? " << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
    }
    for(auto mem : vString)
        cout << mem << " ";
    cout << endl;
    return 0;
}