/*
 * XREFs of ??_G?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x180417ACC
 * Callers:
 *     ??_E?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180295240 (--_E-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAA@XZ @ 0x1800BE544 (--1-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

void *__fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v3; // rsi

  v3 = (void *)(a1 - 152);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream<char,std::char_traits<char>,std::allocator<char>>(a1);
  std::ios::~ios<char,std::char_traits<char>>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(v3);
  return v3;
}
