/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14028A580
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14020ABB4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14020AE64 (MiSessionInsertImage.c)
 *     MmEnforceWorkingSetLimit @ 0x14020C03C (MmEnforceWorkingSetLimit.c)
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiRemoveSecureEntry @ 0x1402172F0 (MiRemoveSecureEntry.c)
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     MiUserFault @ 0x140235960 (MiUserFault.c)
 *     MiSystemFault @ 0x140261430 (MiSystemFault.c)
 *     MiCommitExistingVad @ 0x140276CC0 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x1402776C0 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x14027A3F0 (MiDeletePagablePteRange.c)
 *     MiGetVadWakeList @ 0x14028A400 (MiGetVadWakeList.c)
 *     MiDeleteProcessShadow @ 0x1402919BC (MiDeleteProcessShadow.c)
 *     MiIssueHardFault @ 0x1402A1340 (MiIssueHardFault.c)
 *     MiInsertVadEvent @ 0x1402E34FC (MiInsertVadEvent.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9F08 (MmAdjustWorkingSetSizeEx.c)
 *     MiReleaseFaultState @ 0x1402EF530 (MiReleaseFaultState.c)
 *     MiPerformVadSplitting @ 0x14030B884 (MiPerformVadSplitting.c)
 *     MiReleaseWalkLocks @ 0x14033D52C (MiReleaseWalkLocks.c)
 *     MiOutSwapWorkingSet @ 0x1403429A4 (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x140342A90 (MiBeginProcessClean.c)
 *     MiUnlockFaultWorkingSet @ 0x1403625E4 (MiUnlockFaultWorkingSet.c)
 *     MiCleanWorkingSet @ 0x140364B8C (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x140367824 (MiDeleteCloneZombies.c)
 *     MiLocateOldestSecure @ 0x14036A1DC (MiLocateOldestSecure.c)
 *     MiSetTrimWhileAgingState @ 0x14036AF64 (MiSetTrimWhileAgingState.c)
 *     MiMapWithLargePages @ 0x14038E8F4 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038EDB0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x1403900D8 (MiDeleteBootRange.c)
 *     MmStealTopLevelPage @ 0x1403D75EC (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x14061854C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140619458 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x140619D34 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x140619D98 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140619FBC (MmSetCommitReleaseEligibility.c)
 *     MiDeleteRotateAndStopFaults @ 0x140632B08 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14063331C (MiRotateComplete.c)
 *     MiWaitForRotateToComplete @ 0x140634154 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x1406342B0 (MiMakeSecureExclusive.c)
 *     MiRemoveVadEvent @ 0x140634358 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x140642144 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140642B18 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x140643AC0 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140650698 (MiLockWorkingSetForLargeMapping.c)
 *     MiBuildForkPte @ 0x140662750 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406637C8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663F6C (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1406641C0 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1406644D4 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1406645D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x140664E98 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1406656E0 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x140669310 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B456F8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14023F1D0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x14066445C (MiDeleteDeferredCloneDescriptors.c)
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
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
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
