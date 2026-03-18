/*
 * XREFs of MiTbFlushType @ 0x14025BAAC
 * Callers:
 *     MiCrcStillIntact @ 0x140215130 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiAgeWorkingSet @ 0x14025B770 (MiAgeWorkingSet.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiFreeWsleList @ 0x140280C20 (MiFreeWsleList.c)
 *     MmProtectPool @ 0x140296FC0 (MmProtectPool.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiNoFaultFound @ 0x14033C430 (MiNoFaultFound.c)
 *     MiDeleteEmptyPageTables @ 0x1403577A0 (MiDeleteEmptyPageTables.c)
 *     MiTrimWorkingSet @ 0x14035D6C4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14035D9AC (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x140361BD0 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036DBF4 (MiEmptyWorkingSetInitiate.c)
 *     MiStealPage @ 0x1403BC3DC (MiStealPage.c)
 *     MiClearPteAccessedBitRange @ 0x1403C5CA4 (MiClearPteAccessedBitRange.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 *     MmUpdateOldWorkingSetPages @ 0x1406356DC (MmUpdateOldWorkingSetPages.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
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
