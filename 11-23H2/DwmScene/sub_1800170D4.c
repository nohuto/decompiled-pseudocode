/*
 * XREFs of sub_1800170D4 @ 0x1800170D4
 * Callers:
 *     sub_180016DFC @ 0x180016DFC (sub_180016DFC.c)
 * Callees:
 *     sub_180016D8C @ 0x180016D8C (sub_180016D8C.c)
 */

char *__fastcall sub_1800170D4(void *a1, __int64 a2, char *a3)
{
  sub_180016D8C(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
