/*
 * XREFs of sub_180030B0C @ 0x180030B0C
 * Callers:
 *     sub_18002E3D0 @ 0x18002E3D0 (sub_18002E3D0.c)
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030B0C(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = sub_18001C190();
  return a1;
}
