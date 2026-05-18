/*
 * XREFs of sub_180030B40 @ 0x180030B40
 * Callers:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_18007BE40 @ 0x18007BE40 (sub_18007BE40.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030B40(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
  a1[1] = 0LL;
  a1[1] = 0LL;
  a1[1] = sub_18001C190();
  return a1;
}
