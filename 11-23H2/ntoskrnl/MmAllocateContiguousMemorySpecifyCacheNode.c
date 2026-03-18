/*
 * XREFs of MmAllocateContiguousMemorySpecifyCacheNode @ 0x14061E190
 * Callers:
 *     ExtEnvAllocatePhysicalMemory @ 0x14051F280 (ExtEnvAllocatePhysicalMemory.c)
 *     DifMmAllocateContiguousMemorySpecifyCacheWrapper @ 0x1405E68B0 (DifMmAllocateContiguousMemorySpecifyCacheWrapper.c)
 *     MmAllocateContiguousMemorySpecifyCache @ 0x14061E160 (MmAllocateContiguousMemorySpecifyCache.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1403B9C20 (MmAllocateContiguousNodeMemory.c)
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
