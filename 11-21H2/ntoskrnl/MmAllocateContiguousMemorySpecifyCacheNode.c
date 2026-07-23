/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x1403DE8E0
 * Callers:
 *     MmAllocateContiguousMemorySpecifyCache @ 0x1403DE8B0 (MmAllocateContiguousMemorySpecifyCache.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_140616630 @ 0x140616630 (sub_140616630.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 */

PVOID __stdcall MmAllocateContiguousMemorySpecifyCacheNode(
        SIZE_T NumberOfBytes,
        PHYSICAL_ADDRESS LowestAcceptableAddress,
        PHYSICAL_ADDRESS HighestAcceptableAddress,
        PHYSICAL_ADDRESS BoundaryAddressMultiple,
        MEMORY_CACHING_TYPE CacheType,
        NODE_REQUIREMENT PreferredNode)
{
  int v6; // r10d

  if ( CacheType == MmCached )
  {
    v6 = 64;
  }
  else
  {
    v6 = 516;
    if ( CacheType == MmWriteCombined )
      v6 = 1028;
  }
  return (PVOID)MmAllocateContiguousNodeMemory(
                  NumberOfBytes,
                  LowestAcceptableAddress.LowPart,
                  HighestAcceptableAddress.LowPart,
                  BoundaryAddressMultiple.LowPart,
                  v6,
                  PreferredNode);
}
