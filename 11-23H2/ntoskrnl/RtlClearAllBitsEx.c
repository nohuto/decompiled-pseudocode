/*
 * XREFs of RtlClearAllBitsEx @ 0x14033D1F0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1406B1380 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B19D0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14094C56C (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14094F958 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiIdentifyPatchImageDataPages @ 0x140A3777C (MiIdentifyPatchImageDataPages.c)
 *     IopLiveDumpEstimateMemoryPages @ 0x140A9B19C (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     memset @ 0x140435A00 (memset.c)
 */

void *__fastcall RtlClearAllBitsEx(__int64 a1)
{
  return memset(*(void **)(a1 + 8), 0, 4 * ((*(_QWORD *)a1 >> 5) + ((*(_QWORD *)a1 & 0x1F) != 0)));
}
