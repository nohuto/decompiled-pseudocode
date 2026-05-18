/*
 * XREFs of sub_180018500 @ 0x180018500
 * Callers:
 *     sub_18001821C @ 0x18001821C (sub_18001821C.c)
 * Callees:
 *     sub_180018168 @ 0x180018168 (sub_180018168.c)
 */

char *__fastcall sub_180018500(void *a1, __int64 a2, char *a3)
{
  sub_180018168(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
