/*
 * XREFs of ??$_UIntegral_to_string@DI@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@I@Z @ 0x18034982C
 * Callers:
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180350F2C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_UIntegral_to_string<char,unsigned int>(_QWORD *a1, unsigned int a2)
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
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( v4 != v6 )
    std::string::assign(a1);
  return a1;
}
