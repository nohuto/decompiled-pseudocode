/*
 * XREFs of sub_18002E0A8 @ 0x18002E0A8
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800339DC @ 0x1800339DC (sub_1800339DC.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_180066E20 @ 0x180066E20 (sub_180066E20.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 *     sub_1800C5D20 @ 0x1800C5D20 (sub_1800C5D20.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001F3E0 @ 0x18001F3E0 (sub_18001F3E0.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E0A8(_QWORD *a1, _QWORD *a2)
{
  _BYTE v4[32]; // [rsp+30h] [rbp-38h] BYREF

  sub_18001F3E0((__int64)v4, a2);
  sub_180017648(a1, (__int64)v4);
  sub_180011B24((__int64)v4);
  return a1;
}
