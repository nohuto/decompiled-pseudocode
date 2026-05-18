/*
 * XREFs of sub_1800DDF54 @ 0x1800DDF54
 * Callers:
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DDF54(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = sub_18001C190();
  return a1;
}
