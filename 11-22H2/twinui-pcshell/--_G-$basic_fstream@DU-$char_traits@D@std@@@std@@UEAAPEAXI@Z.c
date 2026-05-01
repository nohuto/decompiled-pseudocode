/*
 * XREFs of ??_G?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAAPEAXI@Z @ 0x1806F0E10
 * Callers:
 *     ??_E?$basic_fstream@DU?$char_traits@D@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x1802ACB60 (--_E-$basic_fstream@DU-$char_traits@D@std@@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$basic_fstream@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x1806F0958 (--1-$basic_fstream@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 */

void *__fastcall std::fstream::`scalar deleting destructor'(__int64 a1, char a2)
{
  void *v3; // rsi

  v3 = (void *)(a1 - 184);
  std::fstream::~fstream<char,std::char_traits<char>>(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
