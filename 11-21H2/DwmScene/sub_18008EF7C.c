/*
 * XREFs of sub_18008EF7C @ 0x18008EF7C
 * Callers:
 *     sub_18008F18C @ 0x18008F18C (sub_18008F18C.c)
 *     sub_1800B1E94 @ 0x1800B1E94 (sub_1800B1E94.c)
 * Callees:
 *     sub_18008E8A0 @ 0x18008E8A0 (sub_18008E8A0.c)
 */

char *__fastcall sub_18008EF7C(void *a1, __int64 a2, char *a3)
{
  sub_18008E8A0(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
