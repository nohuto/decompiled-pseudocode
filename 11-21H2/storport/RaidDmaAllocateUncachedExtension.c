/*
 * XREFs of RaidDmaAllocateUncachedExtension @ 0x1C003D17C
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C00433F0 (StorPortGetUncachedExtension.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C0047530 (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C008EE6C (StorAllocateContiguousMemory.c)
 */

__int64 __fastcall RaidDmaAllocateUncachedExtension(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8)
{
  if ( !a1 )
    return 3221225485LL;
  if ( !a4 )
  {
    LODWORD(a4) = -1;
    if ( *(_DWORD *)(a1 + 24) == 3 )
      LODWORD(a4) = -1;
  }
  return StorAllocateContiguousMemory(a1, a2, a3, a4, a5, a6, a7, a8);
}
