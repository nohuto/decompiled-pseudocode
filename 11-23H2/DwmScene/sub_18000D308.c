/*
 * XREFs of sub_18000D308 @ 0x18000D308
 * Callers:
 *     sub_18000D89C @ 0x18000D89C (sub_18000D89C.c)
 *     sub_18000F4C4 @ 0x18000F4C4 (sub_18000F4C4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000D308(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a2;
  a1[1] = a2 + 80 * a3;
  return a1;
}
