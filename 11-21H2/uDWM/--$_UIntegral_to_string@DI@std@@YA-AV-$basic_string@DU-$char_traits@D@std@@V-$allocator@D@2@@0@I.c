/*
 * XREFs of ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x1800F23A4
 * Callers:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180043C1C (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall std::_UIntegral_to_string<char,unsigned int>(void **a1, unsigned int a2)
{
  _BYTE *v4; // r9
  _BYTE v6[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v4 = v6;
  do
  {
    *--v4 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  a1[2] = 0LL;
  a1[3] = (void *)15;
  *(_BYTE *)a1 = 0;
  if ( v4 != v6 )
    std::string::assign(a1, v4, v6 - v4);
  return a1;
}
