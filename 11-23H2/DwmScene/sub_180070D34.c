/*
 * XREFs of sub_180070D34 @ 0x180070D34
 * Callers:
 *     sub_180070C2C @ 0x180070C2C (sub_180070C2C.c)
 * Callees:
 *     sub_180070BF4 @ 0x180070BF4 (sub_180070BF4.c)
 */

char *__fastcall sub_180070D34(void *a1, __int64 a2, char *a3)
{
  sub_180070BF4(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
