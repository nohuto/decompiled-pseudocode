/*
 * XREFs of MiGetPfnPriority @ 0x1402DF4E8
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiResolveProtoPteFault @ 0x140268160 (MiResolveProtoPteFault.c)
 *     MiDeleteVa @ 0x14027A850 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027BCB0 (MiResetAccessBitPte.c)
 *     MiWsleFree @ 0x140281630 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x140281B50 (MiPfnShareCountIsZero.c)
 *     MiMakePageAvoidRead @ 0x1402CE290 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D5380 (MiDeletePteRun.c)
 *     MiInsertPagesInList @ 0x1402DD7B0 (MiInsertPagesInList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402DDE00 (MiSharedInsertPfnChainInList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DE180 (MiPfnToStandbyLookaside.c)
 *     MiUpdatePfnPriority @ 0x1402E2640 (MiUpdatePfnPriority.c)
 *     MiTrimThisWsle @ 0x1402E2A68 (MiTrimThisWsle.c)
 *     MiCombineInitialInstance @ 0x1402EC920 (MiCombineInitialInstance.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1BE4 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F2654 (MiQueryPfn.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x140333C6C (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x140334F08 (MiUpdatePageAttributeStamp.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14033EAAC (MiUnlinkStandbyPfn.c)
 *     MiCombineWithStandbyExisting @ 0x14035A31C (MiCombineWithStandbyExisting.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C49B8 (MiReplaceNumaStandbyPage.c)
 *     MiResetAccessBitPteWorker @ 0x14046C50C (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14046C7E6 (MiUpdateOldPteWorker.c)
 *     MiStoreCheckCandidatePage @ 0x14046DA40 (MiStoreCheckCandidatePage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062DC1C (MiDeprioritizeVirtualAddresses.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetPfnPriority(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 35) & 8) != 0 )
    return 5LL;
  else
    return *(_BYTE *)(a1 + 35) & 7;
}
