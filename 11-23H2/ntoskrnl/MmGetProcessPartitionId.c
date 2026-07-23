/*
 * XREFs of MmGetProcessPartitionId @ 0x14021E544
 * Callers:
 *     ExpQuerySystemPerformanceInformation @ 0x1406B1F34 (ExpQuerySystemPerformanceInformation.c)
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 *     ExpQueryChannelInformation @ 0x1409F69B0 (ExpQueryChannelInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1409F7164 (ExpQueryNumaAvailableMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetProcessPartitionId(__int64 a1)
{
  return *(unsigned __int16 *)(a1 + 1838);
}
