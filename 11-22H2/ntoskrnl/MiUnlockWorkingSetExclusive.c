/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x14028A1D0
 * Callers:
 *     MiDeleteSessionAddressSpace @ 0x1402008EC (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14020AE84 (MiSessionInsertImage.c)
 *     MmEnforceWorkingSetLimit @ 0x14020C05C (MmEnforceWorkingSetLimit.c)
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiRemoveSecureEntry @ 0x140217310 (MiRemoveSecureEntry.c)
 *     MmAccessFault @ 0x140235350 (MmAccessFault.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiSystemFault @ 0x140261080 (MiSystemFault.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiMakeSystemAddressValid @ 0x140277310 (MiMakeSystemAddressValid.c)
 *     MiDeletePagablePteRange @ 0x14027A040 (MiDeletePagablePteRange.c)
 *     MiGetVadWakeList @ 0x14028A050 (MiGetVadWakeList.c)
 *     MiDeleteProcessShadow @ 0x14029160C (MiDeleteProcessShadow.c)
 *     MiIssueHardFault @ 0x1402A0F90 (MiIssueHardFault.c)
 *     MiInsertVadEvent @ 0x1402E326C (MiInsertVadEvent.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MiReleaseFaultState @ 0x1402EF2A0 (MiReleaseFaultState.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiReleaseWalkLocks @ 0x14033D09C (MiReleaseWalkLocks.c)
 *     MiOutSwapWorkingSet @ 0x140342224 (MiOutSwapWorkingSet.c)
 *     MiBeginProcessClean @ 0x140342310 (MiBeginProcessClean.c)
 *     MiUnlockFaultWorkingSet @ 0x140361DF4 (MiUnlockFaultWorkingSet.c)
 *     MiCleanWorkingSet @ 0x14036439C (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x140367034 (MiDeleteCloneZombies.c)
 *     MiLocateOldestSecure @ 0x1403699EC (MiLocateOldestSecure.c)
 *     MiSetTrimWhileAgingState @ 0x14036A774 (MiSetTrimWhileAgingState.c)
 *     MiMapWithLargePages @ 0x14038CB94 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14038D050 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x14038E378 (MiDeleteBootRange.c)
 *     MmStealTopLevelPage @ 0x1403D6DAC (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x14061806C (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140619158 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x140619854 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1406198B8 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x140619ADC (MmSetCommitReleaseEligibility.c)
 *     MiDeleteRotateAndStopFaults @ 0x140632628 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x140632E3C (MiRotateComplete.c)
 *     MiWaitForRotateToComplete @ 0x140633C74 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x140633DD0 (MiMakeSecureExclusive.c)
 *     MiRemoveVadEvent @ 0x140633E78 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x140641C64 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x140642638 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1406435E0 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1406501B8 (MiLockWorkingSetForLargeMapping.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1406632E8 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x140663A8C (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x140663CE0 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x140663FF4 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1406640F8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1406649B8 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x140665200 (MiLockDownWorkingSet.c)
 *     MiMapUserLargePages @ 0x140668E30 (MiMapUserLargePages.c)
 *     MiCreateInitialSystemWsles @ 0x140B48DF8 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14023C4E0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x14023F0E0 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B12C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x140663F7C (MiDeleteDeferredCloneDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
    v8 = &unk_140C6A280;
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
