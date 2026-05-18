/*
 * XREFs of sub_1800F40B4 @ 0x1800F40B4
 * Callers:
 *     sub_1800F3E48 @ 0x1800F3E48 (sub_1800F3E48.c)
 *     sub_1800F424C @ 0x1800F424C (sub_1800F424C.c)
 * Callees:
 *     sub_1800F3E10 @ 0x1800F3E10 (sub_1800F3E10.c)
 */

char *__fastcall sub_1800F40B4(void *a1, __int64 a2, char *a3)
{
  sub_1800F3E10(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
