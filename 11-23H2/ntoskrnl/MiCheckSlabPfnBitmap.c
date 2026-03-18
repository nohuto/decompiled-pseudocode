/*
 * XREFs of MiCheckSlabPfnBitmap @ 0x140324730
 * Callers:
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x1402630E0 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x140266630 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x1402673A0 (MiAcquirePageListLock.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DF10 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiCombineCandidate @ 0x140281FB0 (MiCombineCandidate.c)
 *     MiLockCode @ 0x140282330 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291A50 (MiMakeDriverPagesPrivate.c)
 *     MiWaitForInPageComplete @ 0x1402A17A0 (MiWaitForInPageComplete.c)
 *     MiFreeMdlPageRun @ 0x1402C89E0 (MiFreeMdlPageRun.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDC60 (MiCanBatchHardFaultPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x1402D6220 (MiDeleteClusterPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x140330434 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x140330670 (MiReplaceTransitionPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140334C78 (MiUpdatePageAttributeStamp.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x1403350F0 (MiIsPageEligibleForProtectedStandby.c)
 *     MiBetterDriverPageNeeded @ 0x1403551B8 (MiBetterDriverPageNeeded.c)
 *     MiPurgeSlabEntries @ 0x14036B670 (MiPurgeSlabEntries.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x1403759B4 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403953EC (MiFreeLargeInitializationCodePages.c)
 *     MiLockStealSystemVm @ 0x140398A4C (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x1403BA960 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1403BB694 (MiPfnsWorthTrying.c)
 *     MiTradeTransitionPage @ 0x1403BDC20 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x1403BDF18 (MiLockStealUserVm.c)
 *     MiProtectDriverSectionPte @ 0x14061A4A0 (MiProtectDriverSectionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x140623230 (MiFreeSmallPageFromMdl.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiReplaceLockedPage @ 0x140636C94 (MiReplaceLockedPage.c)
 *     MiDeleteKernelShadowStack @ 0x1406443C4 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644964 (MiInitializeBootShadowStackPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140644DD4 (MiKernelShadowStackIdealForCaching.c)
 *     MmCreateKernelShadowStack @ 0x14064512C (MmCreateKernelShadowStack.c)
 *     MiCompleteSecureProcessFault @ 0x140645B98 (MiCompleteSecureProcessFault.c)
 *     MiCheckContiguityTradeEligible @ 0x140648E2C (MiCheckContiguityTradeEligible.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651854 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiIsFreeSlabPage @ 0x140657098 (MiIsFreeSlabPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14065749C (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x1406577AC (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1406F62A0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C23C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14087FBB0 (MmFreeIndependentPages.c)
 *     MiHandleBootImage @ 0x140B46AA8 (MiHandleBootImage.c)
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

  if ( !byte_140C6F1E6 )
    return 0LL;
  v4 = (const signed __int64 **)&unk_140C6F378;
  if ( !a3 )
    v4 = (const signed __int64 **)&unk_140C6F368;
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
