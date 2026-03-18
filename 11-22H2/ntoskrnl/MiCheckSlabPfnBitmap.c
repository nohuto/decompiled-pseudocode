/*
 * XREFs of MiCheckSlabPfnBitmap @ 0x140324550
 * Callers:
 *     MiStandbyPageContentsIntact @ 0x140218710 (MiStandbyPageContentsIntact.c)
 *     MiDeleteClusterSection @ 0x1402189D0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x140262FC0 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x140266510 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140267280 (MiAcquirePageListLock.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiCombineCandidate @ 0x140281E90 (MiCombineCandidate.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiWaitForInPageComplete @ 0x1402A1680 (MiWaitForInPageComplete.c)
 *     MiFreeMdlPageRun @ 0x1402C89B0 (MiFreeMdlPageRun.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDC60 (MiCanBatchHardFaultPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140330294 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x1403304D0 (MiReplaceTransitionPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140334AD8 (MiUpdatePageAttributeStamp.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140334F50 (MiIsPageEligibleForProtectedStandby.c)
 *     MiBetterDriverPageNeeded @ 0x140354BB8 (MiBetterDriverPageNeeded.c)
 *     MiPurgeSlabEntries @ 0x14036B020 (MiPurgeSlabEntries.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140376004 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiFreeLargeInitializationCodePages @ 0x14039386C (MiFreeLargeInitializationCodePages.c)
 *     MiLockStealSystemVm @ 0x14039875C (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x1403BA300 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1403BB034 (MiPfnsWorthTrying.c)
 *     MiTradeTransitionPage @ 0x1403BD5C0 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiProtectDriverSectionPte @ 0x14061A510 (MiProtectDriverSectionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x1406232A0 (MiFreeSmallPageFromMdl.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiReplaceLockedPage @ 0x140636D04 (MiReplaceLockedPage.c)
 *     MiDeleteKernelShadowStack @ 0x140644434 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x1406449D4 (MiInitializeBootShadowStackPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140644E44 (MiKernelShadowStackIdealForCaching.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MiCompleteSecureProcessFault @ 0x140645C08 (MiCompleteSecureProcessFault.c)
 *     MiCheckContiguityTradeEligible @ 0x140648E9C (MiCheckContiguityTradeEligible.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x1406518C4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiIsFreeSlabPage @ 0x140657108 (MiIsFreeSlabPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065750C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x14065781C (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C70C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140880080 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140B4A1A8 (MiHandleBootImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckSlabPfnBitmap(__int64 a1, __int64 a2, int a3)
{
  const signed __int64 **v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rcx
  const signed __int64 *v11; // rdx
  signed __int64 v12; // rbx
  const signed __int64 *v13; // r9
  const signed __int64 *v14; // r11
  bool v15; // zf
  const signed __int64 *v16; // r9

  if ( !byte_140C6F2A6 )
    return 0LL;
  v4 = (const signed __int64 **)&unk_140C6F438;
  if ( !a3 )
    v4 = (const signed __int64 **)&unk_140C6F428;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = v5 >> 9;
  if ( a2 == 1 )
    return (char)_bittest64(v4[1], v6);
  v9 = (v5 + a2 - 1) >> 9;
  v10 = v9 - v6 + 1;
  if ( v6 >= (unsigned __int64)*v4 )
    return 1LL;
  if ( v10 <= 1 )
  {
    if ( v9 == v6 )
      return (char)_bittest64(&v4[1][v6 >> 6], v6 & 0x3F);
    return 1LL;
  }
  if ( (unsigned __int64)*v4 - v6 < v10 )
    return 1LL;
  v11 = v4[1];
  v12 = v11[v6 >> 6];
  v13 = &v11[v6 >> 6];
  v14 = &v11[v9 >> 6];
  if ( v13 == v14 )
  {
    v15 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v10) << v6)) == 0;
  }
  else
  {
    if ( (v12 & (-1LL << v6)) != 0 )
      return 1LL;
    v16 = v13 + 1;
    if ( v16 != v14 )
    {
      while ( !*v16 )
      {
        if ( ++v16 == v14 )
          goto LABEL_20;
      }
      return 1LL;
    }
LABEL_20:
    v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v9) & *v16) == 0;
  }
  return !v15;
}
