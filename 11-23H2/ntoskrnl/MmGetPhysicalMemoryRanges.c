/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1408346F0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403965B0 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x140550288 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140834710 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
