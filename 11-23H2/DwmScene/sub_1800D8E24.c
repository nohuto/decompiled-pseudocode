/*
 * XREFs of sub_1800D8E24 @ 0x1800D8E24
 * Callers:
 *     sub_1800DA830 @ 0x1800DA830 (sub_1800DA830.c)
 * Callees:
 *     sub_18000B4B0 @ 0x18000B4B0 (sub_18000B4B0.c)
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 */

__int64 __fastcall sub_1800D8E24(__int64 *a1)
{
  sub_18000B4B0((__int64)(a1 + 6), 48LL, 2LL);
  sub_18000E72C(a1 + 4);
  sub_18000E72C(a1 + 3);
  sub_18000E72C(a1 + 2);
  return sub_18000E72C(a1 + 1);
}
