/*
 * XREFs of sub_180088DEC @ 0x180088DEC
 * Callers:
 *     sub_180088E2C @ 0x180088E2C (sub_180088E2C.c)
 * Callees:
 *     sub_180088CE4 @ 0x180088CE4 (sub_180088CE4.c)
 */

char *__fastcall sub_180088DEC(void *a1, __int64 a2, char *a3)
{
  sub_180088CE4(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
