/*
 * XREFs of sub_1402405EC @ 0x1402405EC
 * Callers:
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 * Callees:
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1402405EC(__int64 a1, int a2, int a3, int a4)
{
  __int64 v8; // rdx
  _QWORD v10[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v10, 0, 0xB8uLL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    return 0LL;
  WORD2(v10[0]) = 0;
  v10[2] = 0LL;
  v10[3] = 0LL;
  LODWORD(v10[0]) = 1;
  LODWORD(v10[1]) = 20;
  sub_1402CF280(v10, v8 << 25 >> 16, *(_QWORD *)(a1 + 16), 0LL);
  sub_14032F750(a1);
  return sub_1402C3BA0((unsigned int)v10, a2, a3, a4, 0);
}
