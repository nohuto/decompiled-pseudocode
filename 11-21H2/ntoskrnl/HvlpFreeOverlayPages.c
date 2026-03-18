/*
 * XREFs of HvlpFreeOverlayPages @ 0x140213380
 * Callers:
 *     HvlInitializeProcessor @ 0x14082A2D4 (HvlInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x140931100 (HvlDeleteProcessor.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 */

void __stdcall HvlpFreeOverlayPages(PVOID BaseAddress, SIZE_T NumberOfBytes, MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
