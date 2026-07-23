/*
 * XREFs of MiDecrementShareCount @ 0x140280A40
 * Callers:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiSharePages @ 0x1402161B0 (MiSharePages.c)
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiOutPageSingleKernelStack @ 0x14021B580 (MiOutPageSingleKernelStack.c)
 *     MiAddSystemPageTableToList @ 0x14021E468 (MiAddSystemPageTableToList.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267AF0 (MiMakeSystemCacheRangeValid.c)
 *     MiCompletePrivateZeroFault @ 0x14026AC10 (MiCompletePrivateZeroFault.c)
 *     MiCopyOnWrite @ 0x140270030 (MiCopyOnWrite.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MiTrimSystemImagePages @ 0x140291384 (MiTrimSystemImagePages.c)
 *     MiDeleteTopLevelPage @ 0x140292D54 (MiDeleteTopLevelPage.c)
 *     MiDeletePteList @ 0x1402D26E0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiAddPageToInsertList @ 0x1402D9C60 (MiAddPageToInsertList.c)
 *     MiUnlockMdlWritePages @ 0x1402D9DC0 (MiUnlockMdlWritePages.c)
 *     MmUnmapViewInSystemCache @ 0x1402DA240 (MmUnmapViewInSystemCache.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiFreeUnmappedPageTables @ 0x140340BE0 (MiFreeUnmappedPageTables.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346E94 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403483F8 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 *     MiPurgeImageSection @ 0x14036A5D8 (MiPurgeImageSection.c)
 *     MiFreeContiguousPages @ 0x1403C3BBC (MiFreeContiguousPages.c)
 *     MiPurgeSubsection @ 0x140625C24 (MiPurgeSubsection.c)
 *     MiDecrementLargeSubsections @ 0x14063CC44 (MiDecrementLargeSubsections.c)
 *     MiDecrementProtoShareCounts @ 0x14063CEDC (MiDecrementProtoShareCounts.c)
 *     MiClearDriverHotPatchPtes @ 0x14064233C (MiClearDriverHotPatchPtes.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiFinishLastForkPageTable @ 0x140664A4C (MiFinishLastForkPageTable.c)
 *     MiInitializeProtoPfn @ 0x14066B7C0 (MiInitializeProtoPfn.c)
 *     MiTradeBootImagePage @ 0x140B46E5C (MiTradeBootImagePage.c)
 *     MiFreeRegistryPageRange @ 0x140B5BE74 (MiFreeRegistryPageRange.c)
 * Callees:
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiBadShareCount @ 0x14064DBDC (MiBadShareCount.c)
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
