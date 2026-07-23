/*
 * XREFs of sub_14026E548 @ 0x14026E548
 * Callers:
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 *     sub_1406F40E0 @ 0x1406F40E0 (sub_1406F40E0.c)
 *     sub_1406F4230 @ 0x1406F4230 (sub_1406F4230.c)
 *     sub_1406F4650 @ 0x1406F4650 (sub_1406F4650.c)
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 *     sub_14070893C @ 0x14070893C (sub_14070893C.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 */

__int64 __fastcall sub_14026E548(char a1, __int64 a2)
{
  return sub_1402CCC50(32LL * (a1 & 0x1F), a2);
}
