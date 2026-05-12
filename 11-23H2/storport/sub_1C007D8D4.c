/*
 * XREFs of sub_1C007D8D4 @ 0x1C007D8D4
 * Callers:
 *     sub_1C007A558 @ 0x1C007A558 (sub_1C007A558.c)
 * Callees:
 *     sub_1C0055B8C @ 0x1C0055B8C (sub_1C0055B8C.c)
 *     sub_1C007CF64 @ 0x1C007CF64 (sub_1C007CF64.c)
 */

__int64 __fastcall sub_1C007D8D4(int **a1, __int64 a2)
{
  sub_1C0055B8C(*a1, "RevertLockingSp", 1, 2, 0LL, 0LL);
  return sub_1C007CF64((__int64)a1, a2, 0x20500000001LL, 0x600000202LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
}
