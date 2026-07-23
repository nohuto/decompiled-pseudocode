/*
 * XREFs of sub_140401E3C @ 0x140401E3C
 * Callers:
 *     sub_140A3731C @ 0x140A3731C (sub_140A3731C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140401DF0 @ 0x140401DF0 (sub_140401DF0.c)
 *     sub_14040362C @ 0x14040362C (sub_14040362C.c)
 */

__int64 __fastcall sub_140401E3C(__int64 a1, _OWORD *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v7[3]; // [rsp+20h] [rbp-50h] BYREF

  sub_14040362C(a1, v7);
  v4 = v7[1];
  *a2 = v7[0];
  v5 = v7[2];
  a2[1] = v4;
  a2[2] = v5;
  sub_140401DF0(a1);
  return 0LL;
}
