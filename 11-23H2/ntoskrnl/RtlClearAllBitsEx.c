/*
 * XREFs of RtlClearAllBitsEx @ 0x14033D480
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406B13B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C76C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094FB58 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A37A2C (MiIdentifyPatchImageDataPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9B00C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void __cdecl RtlClearAllBitsEx(PRTL_BITMAP_EX BitMapHeader)
{
  memset(BitMapHeader->Buffer, 0, 4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
