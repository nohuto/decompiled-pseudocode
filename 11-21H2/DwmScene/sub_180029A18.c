/*
 * XREFs of sub_180029A18 @ 0x180029A18
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_18002B220 @ 0x18002B220 (sub_18002B220.c)
 *     sub_18003A0F4 @ 0x18003A0F4 (sub_18003A0F4.c)
 *     sub_18006E9E4 @ 0x18006E9E4 (sub_18006E9E4.c)
 *     sub_180079E88 @ 0x180079E88 (sub_180079E88.c)
 *     sub_18007B960 @ 0x18007B960 (sub_18007B960.c)
 *     sub_18007EEFC @ 0x18007EEFC (sub_18007EEFC.c)
 *     sub_1800AE960 @ 0x1800AE960 (sub_1800AE960.c)
 *     sub_1800DAEE0 @ 0x1800DAEE0 (sub_1800DAEE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180029A9C @ 0x180029A9C (sub_180029A9C.c)
 */

__int64 *__fastcall sub_180029A18(__int64 *a1, int a2)
{
  __int64 v3; // rax
  _BYTE v5[3]; // [rsp+3Dh] [rbp-1Bh] BYREF

  if ( a2 >= 0 )
  {
    v3 = sub_180029A9C(v5);
  }
  else
  {
    v3 = sub_180029A9C(v5) - 1;
    *(_BYTE *)v3 = 45;
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  if ( (_BYTE *)v3 != v5 )
    sub_180012190(a1, (void *)v3, (size_t)&v5[-v3]);
  return a1;
}
