/*
 * XREFs of sub_180017094 @ 0x180017094
 * Callers:
 *     sub_1800176E8 @ 0x1800176E8 (sub_1800176E8.c)
 * Callees:
 *     sub_180016DC4 @ 0x180016DC4 (sub_180016DC4.c)
 */

char *__fastcall sub_180017094(void *a1, __int64 a2, char *a3)
{
  sub_180016DC4(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
