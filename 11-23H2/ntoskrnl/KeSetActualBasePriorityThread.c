/*
 * XREFs of KeSetActualBasePriorityThread @ 0x1402B98F0
 * Callers:
 *     CmpSetPriorityThread @ 0x1402079DC (CmpSetPriorityThread.c)
 *     MiWakeZeroingThreads @ 0x1402224D4 (MiWakeZeroingThreads.c)
 *     MiStoreUpdateMemoryConditions @ 0x140222F70 (MiStoreUpdateMemoryConditions.c)
 *     IoApplyPriorityInfoThread @ 0x1402BAE50 (IoApplyPriorityInfoThread.c)
 *     MiReadyToZeroNextLargePage @ 0x1402D06D0 (MiReadyToZeroNextLargePage.c)
 *     PopCreatePowerThread @ 0x140342D6C (PopCreatePowerThread.c)
 *     ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345304 (-SmUpdateMemoryConditions@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140345450 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403455A0 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiSetZeroPageThreadPriority @ 0x14035438C (MiSetZeroPageThreadPriority.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368BF0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWorker @ 0x14036B770 (SmKmStoreHelperWorker.c)
 *     MiMappedPageWriter @ 0x140391790 (MiMappedPageWriter.c)
 *     MiZeroNodePages @ 0x140393CD0 (MiZeroNodePages.c)
 *     MiModifiedPageWriter @ 0x1403B2940 (MiModifiedPageWriter.c)
 *     PopFxStaticWorkPoolThread @ 0x1403B2FA0 (PopFxStaticWorkPoolThread.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B3470 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403B5CD0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     KeSetThreadSchedulerAssist @ 0x14056D8DC (KeSetThreadSchedulerAssist.c)
 *     PfpServiceMainThreadBoost @ 0x1405832C0 (PfpServiceMainThreadBoost.c)
 *     PfpServiceMainThreadUnboost @ 0x140583410 (PfpServiceMainThreadUnboost.c)
 *     ?SmStWorkItemGet@?$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAK@Z @ 0x1405C2B24 (-SmStWorkItemGet@-$SMKM_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@PEAU1@P.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C2DF0 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     MiFlushAllStoreSwapPages @ 0x14063A33C (MiFlushAllStoreSwapPages.c)
 *     MiWakeModifiedPageWriter @ 0x14063C188 (MiWakeModifiedPageWriter.c)
 *     NtSetInformationThread @ 0x1407337A0 (NtSetInformationThread.c)
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 *     EtwpLogger @ 0x1407732F0 (EtwpLogger.c)
 *     ExpWorkQueueManagerThread @ 0x1408390C0 (ExpWorkQueueManagerThread.c)
 *     IopCreatePassiveInterruptRealtimeThreads @ 0x1408566A8 (IopCreatePassiveInterruptRealtimeThreads.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x1402B0860 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiSetQuantumTargetThread @ 0x1402B2D80 (KiSetQuantumTargetThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1402B86C0 (KiSetBasePriorityAndClearDecrement.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402B87BC (KiAdjustRealtimePriorityFloor.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1402BAD84 (KiPriQueueThreadPriorityChanged.c)
 *     EtwTracePriority @ 0x14046778E (EtwTracePriority.c)
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
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
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
