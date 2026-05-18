/*
 * XREFs of sub_18001EEF8 @ 0x18001EEF8
 * Callers:
 *     sub_18008F290 @ 0x18008F290 (sub_18008F290.c)
 * Callees:
 *     sub_18001E984 @ 0x18001E984 (sub_18001E984.c)
 */

char *__fastcall sub_18001EEF8(void *a1, __int64 a2, char *a3)
{
  sub_18001E984(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
