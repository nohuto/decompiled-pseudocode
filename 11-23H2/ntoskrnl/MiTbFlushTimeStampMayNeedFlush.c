/*
 * XREFs of MiTbFlushTimeStampMayNeedFlush @ 0x14021E394
 * Callers:
 *     MiDeleteSystemPageTable @ 0x14021DDF0 (MiDeleteSystemPageTable.c)
 *     MiEmptyPteBins @ 0x14021E150 (MiEmptyPteBins.c)
 *     MiGetPageChain @ 0x14026C990 (MiGetPageChain.c)
 *     MiInsertCachedPte @ 0x1402CBDA0 (MiInsertCachedPte.c)
 *     MiReleaseSmallPteMappings @ 0x1402CC1B0 (MiReleaseSmallPteMappings.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402F9E04 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttribute @ 0x14036F55C (MiChangePageAttribute.c)
 *     MiFreeSlabEntry @ 0x1403B88B0 (MiFreeSlabEntry.c)
 *     MiDeleteStaleCacheMaps @ 0x14062DF20 (MiDeleteStaleCacheMaps.c)
 *     MiReleaseLargePdeMappings @ 0x14065FD24 (MiReleaseLargePdeMappings.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiTbFlushTimeStampMayNeedFlush(int a1, int a2, int a3)
{
  unsigned int v3; // edx
  bool result; // al

  v3 = a3 & (a2 - a1);
  if ( v3 > 2 )
    return 0;
  result = 1;
  if ( (a1 & 1) == 0 )
    return v3 < 2;
  return result;
}
