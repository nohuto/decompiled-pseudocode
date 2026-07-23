/*
 * XREFs of MmFreePagesFromMdl @ 0x140221A10
 * Callers:
 *     sub_1403DCA14 @ 0x1403DCA14 (sub_1403DCA14.c)
 *     sub_1403F94E0 @ 0x1403F94E0 (sub_1403F94E0.c)
 *     sub_14054599C @ 0x14054599C (sub_14054599C.c)
 *     sub_1405B1D98 @ 0x1405B1D98 (sub_1405B1D98.c)
 *     sub_140800338 @ 0x140800338 (sub_140800338.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140909214 @ 0x140909214 (sub_140909214.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 *     sub_14093BBD8 @ 0x14093BBD8 (sub_14093BBD8.c)
 *     sub_14093C2FC @ 0x14093C2FC (sub_14093C2FC.c)
 *     sub_14093D590 @ 0x14093D590 (sub_14093D590.c)
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 *     MmAllocateNonCachedMemory @ 0x14096A490 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14096A680 (MmFreeNonCachedMemory.c)
 *     sub_140AAB07C @ 0x140AAB07C (sub_140AAB07C.c)
 * Callees:
 *     sub_140221A30 @ 0x140221A30 (sub_140221A30.c)
 */

void __stdcall MmFreePagesFromMdl(PMDL MemoryDescriptorList)
{
  sub_140221A30((ULONG_PTR)MemoryDescriptorList);
}
