/*
 * XREFs of sub_1800D8E90 @ 0x1800D8E90
 * Callers:
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_1800D8E10 @ 0x1800D8E10 (sub_1800D8E10.c)
 */

__int64 *__fastcall sub_1800D8E90(__int64 *a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  v3 = sub_1800D8E10((__int64)v5, a2);
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (_BYTE *)v3 != v5 )
    sub_180012190(a1, (void *)v3, (size_t)&v5[-v3]);
  return a1;
}
