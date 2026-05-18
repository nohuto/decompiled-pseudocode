/*
 * XREFs of sub_18007BF08 @ 0x18007BF08
 * Callers:
 *     sub_18007BDD4 @ 0x18007BDD4 (sub_18007BDD4.c)
 *     sub_1800A5B30 @ 0x1800A5B30 (sub_1800A5B30.c)
 * Callees:
 *     sub_18007BD9C @ 0x18007BD9C (sub_18007BD9C.c)
 */

char *__fastcall sub_18007BF08(void *a1, __int64 a2, char *a3)
{
  sub_18007BD9C(a1, a2, a3);
  return &a3[8 * ((a2 - (__int64)a1) >> 3)];
}
