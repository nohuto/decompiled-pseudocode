/*
 * XREFs of sub_180054980 @ 0x180054980
 * Callers:
 *     sub_180054D3C @ 0x180054D3C (sub_180054D3C.c)
 * Callees:
 *     sub_180054648 @ 0x180054648 (sub_180054648.c)
 */

char *__fastcall sub_180054980(void *a1, __int64 a2, char *a3)
{
  sub_180054648(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
