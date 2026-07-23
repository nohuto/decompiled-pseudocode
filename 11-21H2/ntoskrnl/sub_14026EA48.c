/*
 * XREFs of sub_14026EA48 @ 0x14026EA48
 * Callers:
 *     sub_1406DDC90 @ 0x1406DDC90 (sub_1406DDC90.c)
 *     sub_1406F4230 @ 0x1406F4230 (sub_1406F4230.c)
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     sub_14070893C @ 0x14070893C (sub_14070893C.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

__int64 __fastcall sub_14026EA48(__int64 a1, __int64 a2)
{
  return sub_1402CCC50(16 * ((a1 << 12) | *(_WORD *)(a1 + 32) & 0x3E | 0x40), a2);
}
