/*
 * XREFs of sub_18008CD68 @ 0x18008CD68
 * Callers:
 *     sub_18008CB70 @ 0x18008CB70 (sub_18008CB70.c)
 * Callees:
 *     sub_18008C920 @ 0x18008C920 (sub_18008C920.c)
 */

char *__fastcall sub_18008CD68(void *a1, __int64 a2, char *a3)
{
  sub_18008C920(a1, a2, a3);
  return &a3[2 * ((a2 - (__int64)a1) >> 1)];
}
