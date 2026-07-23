/*
 * XREFs of KeFindFirstSetLeftGroupAffinity @ 0x1403558D0
 * Callers:
 *     KiIntPartGetLowestClassProcessorInMask @ 0x140221BB4 (KiIntPartGetLowestClassProcessorInMask.c)
 *     KeBuildLogicalProcessorSystemInformation @ 0x1407C4A84 (KeBuildLogicalProcessorSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetLeftGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanReverse64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
