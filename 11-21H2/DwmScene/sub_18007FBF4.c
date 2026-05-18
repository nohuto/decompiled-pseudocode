/*
 * XREFs of sub_18007FBF4 @ 0x18007FBF4
 * Callers:
 *     sub_1800AB0F0 @ 0x1800AB0F0 (sub_1800AB0F0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180029A9C @ 0x180029A9C (sub_180029A9C.c)
 */

__int64 *__fastcall sub_18007FBF4(__int64 *a1, unsigned int a2)
{
  __int64 v3; // rax
  _BYTE v5[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v3 = sub_180029A9C((__int64)v5, a2);
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (_BYTE *)v3 != v5 )
    sub_180012190(a1, (void *)v3, (size_t)&v5[-v3]);
  return a1;
}
