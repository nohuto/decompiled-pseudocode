/*
 * XREFs of sub_1800DFA18 @ 0x1800DFA18
 * Callers:
 *     sub_1800DC224 @ 0x1800DC224 (sub_1800DC224.c)
 *     sub_1800DC4E4 @ 0x1800DC4E4 (sub_1800DC4E4.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 *     sub_1800DCB44 @ 0x1800DCB44 (sub_1800DCB44.c)
 *     sub_1800DCD70 @ 0x1800DCD70 (sub_1800DCD70.c)
 *     sub_1800DCF3C @ 0x1800DCF3C (sub_1800DCF3C.c)
 *     sub_1800DD10C @ 0x1800DD10C (sub_1800DD10C.c)
 *     sub_1800DD308 @ 0x1800DD308 (sub_1800DD308.c)
 *     sub_1800DE990 @ 0x1800DE990 (sub_1800DE990.c)
 *     sub_1800DEB70 @ 0x1800DEB70 (sub_1800DEB70.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800DFA18(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 *v6; // [rsp+30h] [rbp-18h]

  v6 = a2;
  v3 = *(_QWORD *)sub_1800DF830((_QWORD *)(a1 + 64), (__int64)v5, a2);
  sub_180013348((__int64)a2);
  return v3 + 48;
}
