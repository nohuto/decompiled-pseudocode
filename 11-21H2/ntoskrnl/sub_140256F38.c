/*
 * XREFs of sub_140256F38 @ 0x140256F38
 * Callers:
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 */

__int64 __fastcall sub_140256F38(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return sub_14029C5B0(a1, a2, 3LL);
}
