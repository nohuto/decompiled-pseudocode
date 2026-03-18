/*
 * XREFs of MiGetPfnPriority @ 0x1402DF258
 * Callers:
 *     MiCombineWithExisting @ 0x1402179B4 (MiCombineWithExisting.c)
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiResolveProtoPteFault @ 0x140267ED0 (MiResolveProtoPteFault.c)
 *     MiDeleteVa @ 0x14027A5C0 (MiDeleteVa.c)
 *     MiResetAccessBitPte @ 0x14027BA20 (MiResetAccessBitPte.c)
 *     MiWsleFree @ 0x1402813A0 (MiWsleFree.c)
 *     MiPfnShareCountIsZero @ 0x1402818C0 (MiPfnShareCountIsZero.c)
 *     MiMakePageAvoidRead @ 0x1402CE000 (MiMakePageAvoidRead.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiInsertPagesInList @ 0x1402DD520 (MiInsertPagesInList.c)
 *     MiSharedInsertPfnChainInList @ 0x1402DDB70 (MiSharedInsertPfnChainInList.c)
 *     MiPfnToStandbyLookaside @ 0x1402DDEF0 (MiPfnToStandbyLookaside.c)
 *     MiUpdatePfnPriority @ 0x1402E23B0 (MiUpdatePfnPriority.c)
 *     MiTrimThisWsle @ 0x1402E27D8 (MiTrimThisWsle.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiQueryPfn @ 0x1402F23C4 (MiQueryPfn.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiUpdatePrefetchPriority @ 0x1403339DC (MiUpdatePrefetchPriority.c)
 *     MiUpdatePageAttributeStamp @ 0x140334C78 (MiUpdatePageAttributeStamp.c)
 *     MiRestoreTransitionPte @ 0x1403351BC (MiRestoreTransitionPte.c)
 *     MiUnlinkStandbyPfn @ 0x14033E81C (MiUnlinkStandbyPfn.c)
 *     MiCombineWithStandbyExisting @ 0x14035A17C (MiCombineWithStandbyExisting.c)
 *     MiReplaceNumaStandbyPage @ 0x1403C47D8 (MiReplaceNumaStandbyPage.c)
 *     MiResetAccessBitPteWorker @ 0x14046C10C (MiResetAccessBitPteWorker.c)
 *     MiUpdateOldPteWorker @ 0x14046C3E6 (MiUpdateOldPteWorker.c)
 *     MiStoreCheckCandidatePage @ 0x14046D640 (MiStoreCheckCandidatePage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D6CC (MiDeprioritizeVirtualAddresses.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
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
