/*
 * XREFs of MiSplitPfnBitMapsForPartitionHierarchy @ 0x14065BAF0
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1406585D0 (MiActOnPartitionNodePages.c)
 *     MiAddPhysicalMemory @ 0x140A2B978 (MiAddPhysicalMemory.c)
 * Callees:
 *     MiSplitPfnBitMaps @ 0x14081C898 (MiSplitPfnBitMaps.c)
 */

__int64 __fastcall MiSplitPfnBitMapsForPartitionHierarchy(__int64 a1)
{
  __int64 result; // rax

  while ( 1 )
  {
    result = MiSplitPfnBitMaps();
    if ( !(_DWORD)result )
      break;
    if ( (unsigned __int16 *)a1 == MiSystemPartition )
      return 1LL;
    a1 = **(_QWORD **)(*(_QWORD *)(a1 + 200) + 64LL);
  }
  return result;
}
