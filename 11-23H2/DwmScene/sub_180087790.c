/*
 * XREFs of sub_180087790 @ 0x180087790
 * Callers:
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 *     sub_1800878E8 @ 0x1800878E8 (sub_1800878E8.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800134DC @ 0x1800134DC (sub_1800134DC.c)
 *     sub_180087564 @ 0x180087564 (sub_180087564.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180087790(_QWORD *a1, int a2, void **a3)
{
  __int64 v4; // rbx

  v4 = a2;
  sub_180087564(a1, a2);
  sub_1800134DC((void **)&a1[4 * v4 + 24], a3);
  return sub_180011B24((__int64)a3);
}
