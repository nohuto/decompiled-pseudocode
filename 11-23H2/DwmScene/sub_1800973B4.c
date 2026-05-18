/*
 * XREFs of sub_1800973B4 @ 0x1800973B4
 * Callers:
 *     sub_180097460 @ 0x180097460 (sub_180097460.c)
 *     sub_1800974D4 @ 0x1800974D4 (sub_1800974D4.c)
 *     sub_180097570 @ 0x180097570 (sub_180097570.c)
 * Callees:
 *     sub_1800971A4 @ 0x1800971A4 (sub_1800971A4.c)
 */

__int64 *__fastcall sub_1800973B4(__int64 *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_1800971A4(a1, a2);
  return a1;
}
