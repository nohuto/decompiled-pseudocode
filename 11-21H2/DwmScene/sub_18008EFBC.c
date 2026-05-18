/*
 * XREFs of sub_18008EFBC @ 0x18008EFBC
 * Callers:
 *     sub_18008EE60 @ 0x18008EE60 (sub_18008EE60.c)
 * Callees:
 *     sub_18008E8D8 @ 0x18008E8D8 (sub_18008E8D8.c)
 */

char *__fastcall sub_18008EFBC(void *a1, __int64 a2, char *a3)
{
  sub_18008E8D8(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
