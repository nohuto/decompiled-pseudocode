/*
 * XREFs of MiCheckSlabPfnBitmap @ 0x1403249C0
 * Callers:
 *     MiStandbyPageContentsIntact @ 0x1402186F0 (MiStandbyPageContentsIntact.c)
 *     MiDeleteClusterSection @ 0x1402189B0 (MiDeleteClusterSection.c)
 *     MiMigratePfn @ 0x140263370 (MiMigratePfn.c)
 *     MiUnlinkPageFromListEx @ 0x1402668C0 (MiUnlinkPageFromListEx.c)
 *     MiAcquirePageListLock @ 0x140267630 (MiAcquirePageListLock.c)
 *     MiSynchronizeFastPageInsert @ 0x14026E1A0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EE90 (MiInsertPageInList.c)
 *     MiCombineCandidate @ 0x140282240 (MiCombineCandidate.c)
 *     MiLockCode @ 0x1402825C0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x140291CE0 (MiMakeDriverPagesPrivate.c)
 *     MiWaitForInPageComplete @ 0x1402A1A30 (MiWaitForInPageComplete.c)
 *     MiFreeMdlPageRun @ 0x1402C8C70 (MiFreeMdlPageRun.c)
 *     MiCanBatchHardFaultPages @ 0x1402CDEF0 (MiCanBatchHardFaultPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3900 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteClusterPage @ 0x1402D64B0 (MiDeleteClusterPage.c)
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiReplaceTransitionPage @ 0x140330900 (MiReplaceTransitionPage.c)
 *     MiUpdatePageAttributeStamp @ 0x140334F08 (MiUpdatePageAttributeStamp.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140335380 (MiIsPageEligibleForProtectedStandby.c)
 *     MiBetterDriverPageNeeded @ 0x140355358 (MiBetterDriverPageNeeded.c)
 *     MiPurgeSlabEntries @ 0x14036B810 (MiPurgeSlabEntries.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140375B54 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiFreeLargeInitializationCodePages @ 0x1403955CC (MiFreeLargeInitializationCodePages.c)
 *     MiLockStealSystemVm @ 0x140398C2C (MiLockStealSystemVm.c)
 *     MiTradePage @ 0x1403BAB40 (MiTradePage.c)
 *     MiPfnsWorthTrying @ 0x1403BB874 (MiPfnsWorthTrying.c)
 *     MiTradeTransitionPage @ 0x1403BDE00 (MiTradeTransitionPage.c)
 *     MiLockStealUserVm @ 0x1403BE0F8 (MiLockStealUserVm.c)
 *     MiProtectDriverSectionPte @ 0x14061A9F0 (MiProtectDriverSectionPte.c)
 *     MiFreeSmallPageFromMdl @ 0x140623780 (MiFreeSmallPageFromMdl.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062BB00 (MmMarkPhysicalMemoryAsBad.c)
 *     MiReplaceLockedPage @ 0x1406371E4 (MiReplaceLockedPage.c)
 *     MiDeleteKernelShadowStack @ 0x140644914 (MiDeleteKernelShadowStack.c)
 *     MiInitializeBootShadowStackPage @ 0x140644EB4 (MiInitializeBootShadowStackPage.c)
 *     MiKernelShadowStackIdealForCaching @ 0x140645324 (MiKernelShadowStackIdealForCaching.c)
 *     MmCreateKernelShadowStack @ 0x14064567C (MmCreateKernelShadowStack.c)
 *     MiCompleteSecureProcessFault @ 0x1406460E8 (MiCompleteSecureProcessFault.c)
 *     MiCheckContiguityTradeEligible @ 0x14064937C (MiCheckContiguityTradeEligible.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140651DA4 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiIsFreeSlabPage @ 0x1406575E8 (MiIsFreeSlabPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x1406579EC (MmAllocateNonChargedSecurePages.c)
 *     MmAllocateSecureKernelPages @ 0x140657CFC (MmAllocateSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14087FDF0 (MmFreeIndependentPages.c)
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
