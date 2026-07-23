/*
 * XREFs of MmFreeContiguousMemorySpecifyCache @ 0x140213380
 * Callers:
 *     sub_14082A2D4 @ 0x14082A2D4 (sub_14082A2D4.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 */

void __stdcall MmFreeContiguousMemorySpecifyCache(
        PVOID BaseAddress,
        SIZE_T NumberOfBytes,
        MEMORY_CACHING_TYPE CacheType)
{
  MmFreeContiguousMemory(BaseAddress);
}
