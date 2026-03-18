/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14028A2F0
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiRemoveSecureEntry @ 0x1402172F0 (MiRemoveSecureEntry.c)
 *     MmAccessFault @ 0x140235370 (MmAccessFault.c)
 *     MiUserFault @ 0x140235890 (MiUserFault.c)
 *     MiSystemFault @ 0x1402611A0 (MiSystemFault.c)
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277430 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x14027A160 (MiDeletePagablePteRange.c)
 *     MiGetVadWakeList @ 0x14028A170 (MiGetVadWakeList.c)
 *     MiDeleteProcessShadow @ 0x14029172C (MiDeleteProcessShadow.c)
 *     MiIssueHardFault @ 0x1402A10B0 (MiIssueHardFault.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiPerformVadSplitting @ 0x14030B5F4 (MiPerformVadSplitting.c)
 *     MiReleaseWalkLocks @ 0x14033D29C (MiReleaseWalkLocks.c)
 *     MiOutSwapWorkingSet @ 0x140342714 (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x140342800 (MiBeginProcessClean.c)
 *     MiUnlockFaultWorkingSet @ 0x140362444 (MiUnlockFaultWorkingSet.c)
 *     MiCleanWorkingSet @ 0x1403649EC (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x140367684 (MiDeleteCloneZombies.c)
 *     MiLocateOldestSecure @ 0x14036A03C (MiLocateOldestSecure.c)
 *     MiSetTrimWhileAgingState @ 0x14036ADC4 (MiSetTrimWhileAgingState.c)
 *     MiMapWithLargePages @ 0x14038E714 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EBD0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x14038FEF8 (MiDeleteBootRange.c)
 *     MmStealTopLevelPage @ 0x1403D740C (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x140617FFC (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F08 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1406190E8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140619278 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1406197E4 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619848 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140619A6C (MmSetCommitReleaseEligibility.c)
 *     MiDeleteRotateAndStopFaults @ 0x1406325B8 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x140632DCC (MiRotateComplete.c)
 *     MiWaitForRotateToComplete @ 0x140633C04 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x140633D60 (MiMakeSecureExclusive.c)
 *     MiRemoveVadEvent @ 0x140633E08 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x140641BF4 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1406425C8 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x140643570 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140650148 (MiLockWorkingSetForLargeMapping.c)
 *     MiBuildForkPte @ 0x140662200 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x140663278 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663A1C (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140663C70 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140663F84 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x140664088 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664948 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140665190 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x140668DC0 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B456F8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C500 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14023F100 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140283C90 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B0BC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140663F0C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v5; // ebp
  _QWORD *v6; // r14
  unsigned __int64 v7; // r15
  _DWORD *v8; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  _QWORD *v14; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+48h] [rbp+10h]

  v5 = 0;
  v6 = 0LL;
  v16 = *(_DWORD *)(a1 + 184);
  v7 = a2;
  if ( (v16 & 7) == 2 )
  {
    v8 = &unk_140C6A180;
  }
  else
  {
    v8 = (_DWORD *)(a1 + 192);
    if ( (v16 & 7) == 0 )
    {
      v8 = (_DWORD *)(a1 + 192);
      if ( *(_QWORD *)(a1 + 16) )
      {
        v8 = (_DWORD *)(a1 + 192);
        if ( *(_WORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 352) )
        {
          v6 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
          v8 = (_DWORD *)(a1 + 192);
        }
      }
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v5 = 1;
  MiCheckProcessShadow(a1, 2u, a3, a4);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v6 )
  {
    do
    {
      v14 = (_QWORD *)*v6;
      ExFreePoolWithTag(v6, 0);
      v6 = v14;
    }
    while ( v14 );
  }
  if ( !v5 && ((*(_DWORD *)(a1 + 188) & 3) != 0 || (v16 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v7);
  }
}
