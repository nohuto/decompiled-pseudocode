/*
 * XREFs of ??_G?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UEAAPEAXI@Z @ 0x1800207DC
 * Callers:
 *     ??_E?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180020780 (--_E-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??_D?$basic_stringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180020748 (--_D-$basic_stringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

void *__fastcall std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  void *v2; // rdi

  v2 = (void *)(a1 - 152);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbase destructor'(a1 - 152);
  if ( (a2 & 1) != 0 )
    operator delete(v2);
  return v2;
}
