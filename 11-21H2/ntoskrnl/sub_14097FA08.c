/*
 * XREFs of sub_14097FA08 @ 0x14097FA08
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14027FCE4 @ 0x14027FCE4 (sub_14027FCE4.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall sub_14097FA08(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  BOOL v5; // ebp
  _BYTE v6[192]; // [rsp+20h] [rbp-E8h] BYREF

  memset(v6, 0, 0xB8uLL);
  v4 = sub_140313C70(a1);
  sub_14027FCE4((__int64)v6, 0, 20);
  for ( ; a2; --a2 )
  {
    if ( (sub_140317A10(v4) & 1) != 0 )
    {
      sub_1402CF280((__int64)v6, v4 << 25 >> 16, 1LL, 0);
      v5 = 0;
      if ( sub_140317A80(v4) )
        v5 = sub_140229550() != 0;
      *(_QWORD *)v4 = 0LL;
      if ( v5 )
        sub_1402294F0(v4, 0LL);
    }
    v4 += 8LL;
  }
  sub_14032F1B0((__int64)v6);
}
