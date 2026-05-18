/*
 * XREFs of sub_18009BBC0 @ 0x18009BBC0
 * Callers:
 *     sub_18009BA90 @ 0x18009BA90 (sub_18009BA90.c)
 *     sub_18009BF94 @ 0x18009BF94 (sub_18009BF94.c)
 * Callees:
 *     sub_18009BA58 @ 0x18009BA58 (sub_18009BA58.c)
 */

char *__fastcall sub_18009BBC0(void *a1, __int64 a2, char *a3)
{
  sub_18009BA58(a1, a2, a3);
  return &a3[2 * ((a2 - (__int64)a1) >> 1)];
}
