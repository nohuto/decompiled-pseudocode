/*
 * XREFs of KeSetActualBasePriorityThread @ 0x14028FD20
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140237720 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140238330 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x140253900 (SmKmStoreHelperWorker.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140259B30 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     CmpSetPriorityThread @ 0x14025C448 (CmpSetPriorityThread.c)
 *     MiWakeModifiedPageWriter @ 0x14025C460 (MiWakeModifiedPageWriter.c)
 *     MiStoreUpdateMemoryConditions @ 0x1402664E8 (MiStoreUpdateMemoryConditions.c)
 *     MiWakeZeroingThreads @ 0x140267A5C (MiWakeZeroingThreads.c)
 *     IoApplyPriorityInfoThread @ 0x14028F280 (IoApplyPriorityInfoThread.c)
 *     MiSetZeroPageThreadPriority @ 0x14028F8E4 (MiSetZeroPageThreadPriority.c)
 *     MiReadyToZeroNextLargePage @ 0x1402C4BF0 (MiReadyToZeroNextLargePage.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x14035F4C8 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     MiFlushAllHintedStorePages @ 0x1403773D8 (MiFlushAllHintedStorePages.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x14037A5F0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14037D2EC (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x140384F50 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     PfpServiceMainThreadUnboost @ 0x14038B6C0 (PfpServiceMainThreadUnboost.c)
 *     PopCreatePowerThread @ 0x1403B5088 (PopCreatePowerThread.c)
 *     MiMappedPageWriter @ 0x1403C5160 (MiMappedPageWriter.c)
 *     MiZeroLargePageThread @ 0x1403C6B00 (MiZeroLargePageThread.c)
 *     MiModifiedPageWriter @ 0x1403CFD20 (MiModifiedPageWriter.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403D8FF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     PfpServiceMainThreadBoost @ 0x1405C614C (PfpServiceMainThreadBoost.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     EtwpLogger @ 0x140799440 (EtwpLogger.c)
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 *     ExpWorkQueueManagerThread @ 0x14083ECE0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x140859AD4 (IopCreatePassiveInterruptRealtimeThreads.c)
 *     PopFxEmergencyWorker @ 0x140864F80 (PopFxEmergencyWorker.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiAbQueueAutoBoostDpc @ 0x140229D30 (KiAbQueueAutoBoostDpc.c)
 *     KiAdjustRealtimePriorityFloor @ 0x140291174 (KiAdjustRealtimePriorityFloor.c)
 *     KiPriQueueThreadPriorityChanged @ 0x140291EE4 (KiPriQueueThreadPriorityChanged.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140344A30 (KiSetPriorityThread.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140345AA0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePriority @ 0x14062E0D0 (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  _KTHREAD *CurrentThread; // rdi
  _DWORD *v6; // rcx
  unsigned int v7; // eax
  unsigned int v8; // r14d
  struct _KDPC *v9; // rcx
  char v10; // al
  __int64 updated; // rdx
  __int64 v12; // rcx
  _BYTE *v13; // rcx
  _DWORD *SchedulerAssist; // r9
  PVOID *v16; // r8
  PVOID *p_SystemArgument2; // rdx
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+70h] [rbp+18h] BYREF

  v24 = a2;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v25 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v6 = CurrentPrcb->SchedulerAssist;
  if ( v6 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v6[6];
      v6[6] = v20 + 1;
      if ( v20 == -1 )
LABEL_39:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v18[6] - 1;
        v18[6] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v19[6];
        v19[6] = v22 + 1;
        if ( v22 == -1 )
          goto LABEL_39;
      }
    }
  }
  v7 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  v8 = v7;
  v9 = (struct _KDPC *)KeGetCurrentPrcb();
  if ( (char)v24 < (char)v7 )
  {
    if ( *(_BYTE *)(BugCheckParameter1 + 871) )
    {
      v16 = (PVOID *)(BugCheckParameter1 + 816);
      if ( *(_QWORD *)(BugCheckParameter1 + 816) == 1LL )
      {
        p_SystemArgument2 = &v9[557].SystemArgument2;
        if ( v9 != (struct _KDPC *)-35696LL )
        {
          *v16 = *p_SystemArgument2;
          *p_SystemArgument2 = v16;
          _InterlockedIncrement16((volatile signed __int16 *)(BugCheckParameter1 + 868));
          KiAbQueueAutoBoostDpc(v9);
        }
      }
    }
  }
  *(_BYTE *)(BugCheckParameter1 + 563) = v24;
  v10 = *(_BYTE *)(BugCheckParameter1 + 564);
  if ( v10 )
  {
    if ( (v10 & 0xF) != 0 )
      *(_DWORD *)(BugCheckParameter1 + 872) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(BugCheckParameter1 + 564) = 0;
  }
  if ( v24 != *(char *)(BugCheckParameter1 + 195) )
  {
    if ( (_KTHREAD *)BugCheckParameter1 != CurrentThread || CurrentPrcb->NestingLevel )
    {
      updated = *(_QWORD *)(BugCheckParameter1 + 72);
    }
    else
    {
      _disable();
      updated = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, BugCheckParameter1, 0LL);
      _enable();
    }
    v12 = updated + KiCyclesPerClockQuantum * (unsigned int)*(unsigned __int8 *)(BugCheckParameter1 + 651);
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 5u);
    *(_QWORD *)(BugCheckParameter1 + 32) = v12;
    KiAdjustRealtimePriorityFloor(BugCheckParameter1);
    KiSetPriorityThread(BugCheckParameter1, &v25, v24);
  }
  v13 = *(_BYTE **)(BugCheckParameter1 + 232);
  if ( v13 && (*v13 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v13, BugCheckParameter1);
  else
    KiReleaseThreadLockSafe(BugCheckParameter1);
  KiProcessDeferredReadyList(CurrentPrcb, &v25, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(BugCheckParameter1, 1329, v8, v24, (__int64)&v24);
  return v8;
}
