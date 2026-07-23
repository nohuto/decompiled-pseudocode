/*
 * XREFs of MiTbFlushType @ 0x14025BD3C
 * Callers:
 *     MiCrcStillIntact @ 0x140215130 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiFreeWsleList @ 0x140280EB0 (MiFreeWsleList.c)
 *     MmProtectPool @ 0x140297250 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFEEC (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiNoFaultFound @ 0x14033C7D0 (MiNoFaultFound.c)
 *     MiDeleteEmptyPageTables @ 0x140357940 (MiDeleteEmptyPageTables.c)
 *     MiTrimWorkingSet @ 0x14035D864 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14035DB4C (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140361D70 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DD94 (MiEmptyWorkingSetInitiate.c)
 *     MiStealPage @ 0x1403BC5BC (MiStealPage.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5E84 (MiClearPteAccessedBitRange.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x140635C2C (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiEliminateZeroPages @ 0x140696B90 (MiEliminateZeroPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTbFlushType(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    return (*(_BYTE *)(a1 + 184) & 7u) < 2 ? 2 : 0;
  else
    return 1LL;
}
