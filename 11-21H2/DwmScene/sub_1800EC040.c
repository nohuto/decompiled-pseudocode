/*
 * XREFs of sub_1800EC040 @ 0x1800EC040
 * Callers:
 *     sub_1800EB668 @ 0x1800EB668 (sub_1800EB668.c)
 *     sub_1800EBB74 @ 0x1800EBB74 (sub_1800EBB74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EC040(int a1, int a2)
{
  return *(unsigned int *)&asc_1801BC4F0[24 * a2 - 24 + 4 * a1];
}
