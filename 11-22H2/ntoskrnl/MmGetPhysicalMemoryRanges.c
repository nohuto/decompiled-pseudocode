/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140835F40
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x140394850 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x14054FC68 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140835F60 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
