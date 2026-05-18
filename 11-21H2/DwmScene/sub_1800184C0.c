/*
 * XREFs of sub_1800184C0 @ 0x1800184C0
 * Callers:
 *     sub_18001880C @ 0x18001880C (sub_18001880C.c)
 * Callees:
 *     sub_1800181A0 @ 0x1800181A0 (sub_1800181A0.c)
 */

char *__fastcall sub_1800184C0(void *a1, __int64 a2, char *a3)
{
  sub_1800181A0(a1, a2, a3);
  return &a3[4 * ((a2 - (__int64)a1) >> 2)];
}
