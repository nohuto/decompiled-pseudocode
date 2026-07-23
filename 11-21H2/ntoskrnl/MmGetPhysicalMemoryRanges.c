/*
 * XREFs of MmGetPhysicalMemoryRanges @ 0x140852550
 * Callers:
 *     sub_1403D4F68 @ 0x1403D4F68 (sub_1403D4F68.c)
 *     sub_140551F78 @ 0x140551F78 (sub_140551F78.c)
 * Callees:
 *     MmGetPhysicalMemoryRangesEx2 @ 0x140852570 (MmGetPhysicalMemoryRangesEx2.c)
 */

PPHYSICAL_MEMORY_RANGE MmGetPhysicalMemoryRanges(void)
{
  return (PPHYSICAL_MEMORY_RANGE)MmGetPhysicalMemoryRangesEx2(0LL);
}
