/*
 * XREFs of sub_18000D48C @ 0x18000D48C
 * Callers:
 *     sub_18000D924 @ 0x18000D924 (sub_18000D924.c)
 *     sub_18000FBFC @ 0x18000FBFC (sub_18000FBFC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18000D48C(_QWORD *a1, __int64 a2, __int64 a3)
{
  *a1 = a2;
  a1[1] = a2 + 80 * a3;
  return a1;
}
