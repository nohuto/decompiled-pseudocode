/*
 * XREFs of sub_1800EB340 @ 0x1800EB340
 * Callers:
 *     sub_1800EBB74 @ 0x1800EBB74 (sub_1800EBB74.c)
 * Callees:
 *     sub_1800EB2FC @ 0x1800EB2FC (sub_1800EB2FC.c)
 */

char *__fastcall sub_1800EB340(void *a1, __int64 a2, char *a3)
{
  sub_1800EB2FC(a1, a2, a3);
  return &a3[(a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFE0uLL];
}
