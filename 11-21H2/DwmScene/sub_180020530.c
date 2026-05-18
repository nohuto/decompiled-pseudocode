/*
 * XREFs of sub_180020530 @ 0x180020530
 * Callers:
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 * Callees:
 *     sub_18001FEFC @ 0x18001FEFC (sub_18001FEFC.c)
 */

char *__fastcall sub_180020530(void *a1, __int64 a2, char *a3)
{
  sub_18001FEFC(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
