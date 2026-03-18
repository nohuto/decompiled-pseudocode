/*
 * XREFs of MiDecrementShareCount @ 0x1402807B0
 * Callers:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiAddSystemPageTableToList @ 0x14021E468 (MiAddSystemPageTableToList.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267860 (MiMakeSystemCacheRangeValid.c)
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x14026FDA0 (MiCopyOnWrite.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x1402910F4 (MiTrimSystemImagePages.c)
 *     MiDeleteTopLevelPage @ 0x140292AC4 (MiDeleteTopLevelPage.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiAddPageToInsertList @ 0x1402D99D0 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9B30 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiFreeUnmappedPageTables @ 0x140340950 (MiFreeUnmappedPageTables.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346C04 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140348168 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034CFF8 (MmOutSwapProcess.c)
 *     MiPurgeImageSection @ 0x14036A438 (MiPurgeImageSection.c)
 *     MiFreeContiguousPages @ 0x1403C39DC (MiFreeContiguousPages.c)
 *     MiPurgeSubsection @ 0x1406256D4 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063C6F4 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14063C98C (MiDecrementProtoShareCounts.c)
 *     MiClearDriverHotPatchPtes @ 0x140641DEC (MiClearDriverHotPatchPtes.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x1406644FC (MiFinishLastForkPageTable.c)
 *     MiInitializeProtoPfn @ 0x14066B270 (MiInitializeProtoPfn.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x140B5BE74 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x1402818C0 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064D68C (MiBadShareCount.c)
 */

__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v1 ^ (((v1 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v1) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1, 0LL);
  else
    return 2LL;
}
