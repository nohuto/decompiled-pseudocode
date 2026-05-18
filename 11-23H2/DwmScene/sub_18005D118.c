/*
 * XREFs of sub_18005D118 @ 0x18005D118
 * Callers:
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18005D118(__int64 a1, int a2, __int64 a3, void **a4, void **a5, void **a6)
{
  *(_DWORD *)(a1 + 172) = a2;
  *(_DWORD *)(a1 + 176) = 0;
  sub_1800134DC((void **)(a1 + 184), a4);
  sub_1800134DC((void **)(a1 + 216), a5);
  sub_1800134DC((void **)(a1 + 248), a6);
  sub_180011B24((__int64)a4);
  sub_180011B24((__int64)a5);
  return sub_180011B24((__int64)a6);
}
