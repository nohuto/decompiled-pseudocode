/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x1408343F0
 * Callers:
 *     IopGetPhysicalMemoryBlock @ 0x1403963D0 (IopGetPhysicalMemoryBlock.c)
 *     IoFillDumpHeader @ 0x14054FBC8 (IoFillDumpHeader.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140834410 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
