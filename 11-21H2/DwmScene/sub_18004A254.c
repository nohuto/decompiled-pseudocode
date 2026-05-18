/*
 * XREFs of sub_18004A254 @ 0x18004A254
 * Callers:
 *     sub_18004A2A8 @ 0x18004A2A8 (sub_18004A2A8.c)
 * Callees:
 *     sub_18004A21C @ 0x18004A21C (sub_18004A21C.c)
 */

char *__fastcall sub_18004A254(void *a1, __int64 a2, char *a3)
{
  sub_18004A21C(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
