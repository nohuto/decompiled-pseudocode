/*
 * XREFs of sub_1800922C8 @ 0x1800922C8
 * Callers:
 *     sub_180093470 @ 0x180093470 (sub_180093470.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_1800922C8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  LOBYTE(a2) = 1;
  return sub_1800401E8(a1 + 168, a2, a3, a4);
}
