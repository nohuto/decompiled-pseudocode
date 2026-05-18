/*
 * XREFs of sub_1800DFE88 @ 0x1800DFE88
 * Callers:
 *     sub_1800E01B0 @ 0x1800E01B0 (sub_1800E01B0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C3BC @ 0x18001C3BC (sub_18001C3BC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DFE88(_QWORD *a1)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180010DD0(v3, (__int64)"Operation was cancelled");
  sub_18001C3BC((__int64)a1, (const char *)v3, 0);
  sub_180011B24((__int64)v3);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
