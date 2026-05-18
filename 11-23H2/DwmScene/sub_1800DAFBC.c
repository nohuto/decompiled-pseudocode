/*
 * XREFs of sub_1800DAFBC @ 0x1800DAFBC
 * Callers:
 *     sub_1800DACE4 @ 0x1800DACE4 (sub_1800DACE4.c)
 *     sub_1800DADD4 @ 0x1800DADD4 (sub_1800DADD4.c)
 * Callees:
 *     sub_1800DAB90 @ 0x1800DAB90 (sub_1800DAB90.c)
 */

char *__fastcall sub_1800DAFBC(void *a1, __int64 a2, char *a3)
{
  sub_1800DAB90(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
