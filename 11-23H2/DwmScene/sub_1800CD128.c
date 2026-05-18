/*
 * XREFs of sub_1800CD128 @ 0x1800CD128
 * Callers:
 *     sub_1800185E0 @ 0x1800185E0 (sub_1800185E0.c)
 *     sub_1800CD0D4 @ 0x1800CD0D4 (sub_1800CD0D4.c)
 *     sub_1800D665C @ 0x1800D665C (sub_1800D665C.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_1800CB6E8 @ 0x1800CB6E8 (sub_1800CB6E8.c)
 *     sub_1800CF2D0 @ 0x1800CF2D0 (sub_1800CF2D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CD128(__int64 *a1, __int64 *a2, __int64 *a3, unsigned int a4)
{
  sub_1800CB6E8(a1 + 21, a2);
  sub_1800CB6E8(a1 + 20, a3);
  sub_18000E72C(a1 + 22);
  sub_1800CF2D0(a1, a4);
  sub_18000E72C(a2);
  return sub_18000E72C(a3);
}
