/*
 * XREFs of sub_18007F33C @ 0x18007F33C
 * Callers:
 *     sub_18007E900 @ 0x18007E900 (sub_18007E900.c)
 *     sub_18007F430 @ 0x18007F430 (sub_18007F430.c)
 *     sub_18007F820 @ 0x18007F820 (sub_18007F820.c)
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_18009AA00 @ 0x18009AA00 (sub_18009AA00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007F33C(__int64 a1, void **a2)
{
  sub_1800134DC((void **)(a1 + 496), a2);
  return sub_180011B24((__int64)a2);
}
