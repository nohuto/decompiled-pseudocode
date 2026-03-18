/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1402B9660
 * Callers:
 *     CmpSetPriorityThread @ 0x1402079DC (CmpSetPriorityThread.c)
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     IoApplyPriorityInfoThread @ 0x1402BABC0 (IoApplyPriorityInfoThread.c)
 *     MiReadyToZeroNextLargePage @ 0x1402D0440 (MiReadyToZeroNextLargePage.c)
 *     PopCreatePowerThread @ 0x140342ADC (PopCreatePowerThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345074 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x1403451C0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140345310 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x1403541EC (MiSetZeroPageThreadPriority.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368A50 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14036B5D0 (SmKmStoreHelperWorker.c)
 *     MiMappedPageWriter @ 0x1403915B0 (MiMappedPageWriter.c)
 *     MiZeroNodePages @ 0x140393AF0 (MiZeroNodePages.c)
 *     MiModifiedPageWriter @ 0x1403B2760 (MiModifiedPageWriter.c)
 *     PopFxStaticWorkPoolThread @ 0x1403B2DC0 (PopFxStaticWorkPoolThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3290 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5AF0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D21C (KeSetThreadSchedulerAssist.c)
 *     PfpServiceMainThreadBoost @ 0x140582DD0 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x140582F20 (PfpServiceMainThreadUnboost.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C25B4 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2880 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFlushAllStoreSwapPages @ 0x140639DEC (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x14063BC38 (MiWakeModifiedPageWriter.c)
 *     NtSetInformationThread @ 0x1407335B0 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x14075EE30 (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x140773100 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x140838DC0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1408563A8 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242E40 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1402B05D0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B0E70 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402B2AF0 (KiSetQuantumTargetThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B8430 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402B852C (KiAdjustRealtimePriorityFloor.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402BAAF4 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14046738E (EtwTracePriority.c)
 */

__int64 __fastcall KeSetActualBasePriorityThread(ULONG_PTR BugCheckParameter1, int a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rsi
  char v5; // r15
  unsigned int v6; // edi
  __int64 v7; // r9
  _BYTE *v8; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rax
  int v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v13 = a2;
  if ( *(_UNKNOWN **)(BugCheckParameter1 + 544) == &KiInitialProcess )
    return 1LL;
  v14 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v11) = 4;
    if ( CurrentIrql != 2 )
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (_KTHREAD *)BugCheckParameter1 == CurrentPrcb->CurrentThread;
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  v6 = *(char *)(BugCheckParameter1 + 563);
  *(_BYTE *)(BugCheckParameter1 + 645) = 0;
  KiSetBasePriorityAndClearDecrement(BugCheckParameter1, &v13, 0);
  KiAdjustRealtimePriorityFloor(BugCheckParameter1, v13);
  if ( v13 != *(char *)(BugCheckParameter1 + 195) )
  {
    KiSetQuantumTargetThread(BugCheckParameter1, (__int64)CurrentPrcb, v5, v7);
    KiSetPriorityThread(BugCheckParameter1, (unsigned __int64)&v14, v13);
  }
  v8 = *(_BYTE **)(BugCheckParameter1 + 232);
  if ( v8 && (*v8 & 0x7F) == 0x15 )
    KiPriQueueThreadPriorityChanged(v8, BugCheckParameter1);
  else
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiProcessDeferredReadyList((__int64)CurrentPrcb, &v14, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(BugCheckParameter1, 1329, v6, v13, (__int64)&v13);
  return v6;
}
