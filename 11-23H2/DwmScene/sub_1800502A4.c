/*
 * XREFs of sub_1800502A4 @ 0x1800502A4
 * Callers:
 *     sub_180018380 @ 0x180018380 (sub_180018380.c)
 *     sub_18004EF88 @ 0x18004EF88 (sub_18004EF88.c)
 *     sub_18005C290 @ 0x18005C290 (sub_18005C290.c)
 *     sub_180066720 @ 0x180066720 (sub_180066720.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 *     sub_180067EB0 @ 0x180067EB0 (sub_180067EB0.c)
 *     sub_180068C20 @ 0x180068C20 (sub_180068C20.c)
 *     sub_18006BEB0 @ 0x18006BEB0 (sub_18006BEB0.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_1800961E0 @ 0x1800961E0 (sub_1800961E0.c)
 *     sub_18009CB54 @ 0x18009CB54 (sub_18009CB54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004DC30 @ 0x18004DC30 (sub_18004DC30.c)
 *     sub_180050CB0 @ 0x180050CB0 (sub_180050CB0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800502A4(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  _QWORD v8[3]; // [rsp+28h] [rbp-40h] BYREF

  v8[0] = a2;
  v8[2] = a3;
  v5 = (__int64 *)(a1 + 18560);
  sub_180050CB0(a1 + 18560, v8, a3);
  if ( v8[0] == *v5 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v6 = sub_18004DC30(v5, (__int64)v8, a3);
    sub_18001246C(a2, (_QWORD *)(*(_QWORD *)v6 + 64LL));
  }
  sub_180011B24((__int64)a3);
  return a2;
}
