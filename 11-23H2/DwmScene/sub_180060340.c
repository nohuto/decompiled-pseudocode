/*
 * XREFs of sub_180060340 @ 0x180060340
 * Callers:
 *     sub_1800808B0 @ 0x1800808B0 (sub_1800808B0.c)
 * Callees:
 *     sub_180060378 @ 0x180060378 (sub_180060378.c)
 */

__int64 __fastcall sub_180060340(int a1, __int64 a2, char a3)
{
  sub_180060378(a1, a2, 1LL << a3, 0, 1);
  return a2;
}
