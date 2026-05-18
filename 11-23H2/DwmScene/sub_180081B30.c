/*
 * XREFs of sub_180081B30 @ 0x180081B30
 * Callers:
 *     sub_180081E00 @ 0x180081E00 (sub_180081E00.c)
 *     sub_18009FED4 @ 0x18009FED4 (sub_18009FED4.c)
 * Callees:
 *     sub_1800815A8 @ 0x1800815A8 (sub_1800815A8.c)
 */

char *__fastcall sub_180081B30(void *a1, __int64 a2, char *a3)
{
  sub_1800815A8(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
