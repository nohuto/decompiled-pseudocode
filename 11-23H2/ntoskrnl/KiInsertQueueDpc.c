/*
 * XREFs of KiInsertQueueDpc @ 0x140254850
 * Callers:
 *     KeSetProcess @ 0x1402085E4 (KeSetProcess.c)
 *     ObpDeferObjectDeletion @ 0x14020B930 (ObpDeferObjectDeletion.c)
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     EtwpRequestFlushTimer @ 0x140227BD0 (EtwpRequestFlushTimer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140227C98 (EtwpPrepareDirtyBuffer.c)
 *     EtwpSwitchBuffer @ 0x140227CE8 (EtwpSwitchBuffer.c)
 *     IopAllocateIrpPrivate @ 0x14022F0B0 (IopAllocateIrpPrivate.c)
 *     KiAddThreadToReadyQueue @ 0x1402349B0 (KiAddThreadToReadyQueue.c)
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14023D950 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiExpireTimer2 @ 0x140251B40 (KiExpireTimer2.c)
 *     PpmPerfQueueAction @ 0x140252138 (PpmPerfQueueAction.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     KeInsertQueueDpc @ 0x140254830 (KeInsertQueueDpc.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x140260BD0 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x140260EC0 (ExpCommitWakeResourceShared.c)
 *     KeRundownQueueCommon @ 0x14028CBC4 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14028CE38 (KeDeleteMutant.c)
 *     ExQueueDebuggerWorker @ 0x140293BCC (ExQueueDebuggerWorker.c)
 *     KeReleaseSemaphoreEx @ 0x1402B7430 (KeReleaseSemaphoreEx.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402BAFD0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     PpmCheckContinueExecution @ 0x1402BFCF4 (PpmCheckContinueExecution.c)
 *     PopQueueTargetDpc @ 0x1402BFEE0 (PopQueueTargetDpc.c)
 *     KiUpdateTime @ 0x1402C3930 (KiUpdateTime.c)
 *     PoExecutePerfCheck @ 0x1402C4190 (PoExecutePerfCheck.c)
 *     KeAccumulateTicks @ 0x1402C7DA0 (KeAccumulateTicks.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140305D98 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiAbQueueAutoBoostDpc @ 0x140307FD8 (KiAbQueueAutoBoostDpc.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140308BC8 (KiChargeSchedulingGroupCycleTime.c)
 *     KeTerminateThread @ 0x14030A7F8 (KeTerminateThread.c)
 *     KiResumeThread @ 0x14030AF88 (KiResumeThread.c)
 *     KiRundownMutants @ 0x14030B32C (KiRundownMutants.c)
 *     KiInitializeUserApc @ 0x14030F468 (KiInitializeUserApc.c)
 *     KeMaskInterrupt @ 0x14031F844 (KeMaskInterrupt.c)
 *     KeReleaseSemaphore @ 0x1403216C0 (KeReleaseSemaphore.c)
 *     MiRestoreTransitionPte @ 0x14033544C (MiRestoreTransitionPte.c)
 *     KiInitiateGenericCallDpc @ 0x140347144 (KiInitiateGenericCallDpc.c)
 *     KiDpcRuntimeHistoryHashTableCleanupTimerCallback @ 0x14034B820 (KiDpcRuntimeHistoryHashTableCleanupTimerCallback.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140354C10 (KeRegisterBugCheckReasonCallback.c)
 *     KeSignalGate @ 0x14035D4DC (KeSignalGate.c)
 *     KiEntropyQueueDpc @ 0x14035E990 (KiEntropyQueueDpc.c)
 *     HalpMcaQueueDpc @ 0x140369B08 (HalpMcaQueueDpc.c)
 *     HalpTimerDpcRoutine @ 0x14036A500 (HalpTimerDpcRoutine.c)
 *     MmSetAccessLogging @ 0x14036B030 (MmSetAccessLogging.c)
 *     HalpCmciInitProcessor @ 0x140380348 (HalpCmciInitProcessor.c)
 *     KeDispatchSecondaryInterrupt @ 0x1403A30A0 (KeDispatchSecondaryInterrupt.c)
 *     IoProcessPassiveInterrupts @ 0x1403A3684 (IoProcessPassiveInterrupts.c)
 *     KeGenericCallDpcEx @ 0x1403C68D0 (KeGenericCallDpcEx.c)
 *     KiScheduleNextForegroundBoost @ 0x1403D439C (KiScheduleNextForegroundBoost.c)
 *     KiForegroundTimerCallback @ 0x1403D58C0 (KiForegroundTimerCallback.c)
 *     ExpTimeRefreshCallback @ 0x1403D72F0 (ExpTimeRefreshCallback.c)
 *     HvlSharedIsr @ 0x14045F760 (HvlSharedIsr.c)
 *     KeUpdatePendingQosRequest @ 0x14046187C (KeUpdatePendingQosRequest.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x14046A4B8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x14046A58A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     HalpCmciHandler @ 0x140505C8C (HalpCmciHandler.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507E88 (HalpPmuReservedResourcesProcessorCallback.c)
 *     HalpDmaControllerCancelTransfer @ 0x14051699C (HalpDmaControllerCancelTransfer.c)
 *     HalpInsertSecondarySignalList @ 0x14051A538 (HalpInsertSecondarySignalList.c)
 *     HalpDmaControllerInterruptRoutine @ 0x140527C60 (HalpDmaControllerInterruptRoutine.c)
 *     KeRegisterObjectDpc @ 0x1405687A8 (KeRegisterObjectDpc.c)
 *     KeAbCrossThreadDelete @ 0x140579A60 (KeAbCrossThreadDelete.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x14057ACAC (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     KiScheduleBugcheckRecovery @ 0x14057B984 (KiScheduleBugcheckRecovery.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14057D4B4 (KiForceIdleUpdateSchedulerParkState.c)
 *     KiResetForceIdle @ 0x14057D63C (KiResetForceIdle.c)
 *     KiAltContextWorkQueueAddItem @ 0x140580704 (KiAltContextWorkQueueAddItem.c)
 *     PopIdleWakeAssignAccountingToSource @ 0x14059DA4C (PopIdleWakeAssignAccountingToSource.c)
 *     PpmHeteroDispatchHgsInterrupt @ 0x14059EC60 (PpmHeteroDispatchHgsInterrupt.c)
 *     DifKeInsertQueueDpcWrapper @ 0x1405E41D0 (DifKeInsertQueueDpcWrapper.c)
 *     EtwSendTraceBuffer @ 0x1405FF710 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1406001FC (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueRebalance @ 0x140603BF8 (EtwpCovSampCaptureQueueRebalance.c)
 *     ExpSvmFaultRoutine @ 0x14060ED80 (ExpSvmFaultRoutine.c)
 *     WheaDeferredRecoveryService @ 0x1406131B0 (WheaDeferredRecoveryService.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140613290 (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheaFlushETWEventsAddWorkRtn @ 0x1406134C4 (WheaFlushETWEventsAddWorkRtn.c)
 *     WheapWorkQueueAddItem @ 0x140613EE0 (WheapWorkQueueAddItem.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x140617684 (CmFcManagerNotifyFeatureUsage.c)
 *     KiComputeDispatchInterruptCost @ 0x140B4CBF4 (KiComputeDispatchInterruptCost.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     HalSendSoftwareInterrupt @ 0x1402547F0 (HalSendSoftwareInterrupt.c)
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1402B30B0 (KiHvEnlightenedGuestPriorityKick.c)
 *     RtlBackoff @ 0x1402FD540 (RtlBackoff.c)
 *     KiSetDpcRequestFlag @ 0x140318B94 (KiSetDpcRequestFlag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460830 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 *     EtwTraceDpcEnqueueEvent @ 0x1405FD05C (EtwTraceDpcEnqueueEvent.c)
 */

__int64 __fastcall KiInsertQueueDpc(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        volatile signed __int32 *a4,
        unsigned __int8 a5)
{
  ULONG_PTR v5; // r10
  unsigned __int8 v6; // r15
  unsigned __int64 v8; // r12
  char v9; // r13
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v12; // rbx
  __int64 v13; // rsi
  signed __int64 IsrDpcStats; // rcx
  int v15; // r11d
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  int v19; // r11d
  __int64 v20; // r10
  unsigned __int64 v21; // r8
  _QWORD *v22; // r9
  _QWORD *v23; // rcx
  char v24; // al
  __int64 v25; // r9
  __int16 v26; // r10
  signed __int16 i; // dx
  struct _KPRCB *v29; // rax
  __int64 v30; // rax
  _DWORD *SchedulerAssist; // rbx
  __int64 v32; // r9
  unsigned __int8 v33; // cl
  struct _KPRCB *v34; // rax
  _DWORD *v35; // r9
  int v36; // edx
  bool v37; // zf
  int v38; // [rsp+40h] [rbp-B8h]
  int Number; // [rsp+44h] [rbp-B4h]
  int v40; // [rsp+48h] [rbp-B0h]
  unsigned __int8 v41; // [rsp+50h] [rbp-A8h]
  int v42; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-98h]
  unsigned __int64 v44; // [rsp+68h] [rbp-90h]
  unsigned __int64 v45; // [rsp+70h] [rbp-88h]
  unsigned __int64 v46; // [rsp+78h] [rbp-80h]
  unsigned __int64 v47; // [rsp+80h] [rbp-78h]
  _DWORD v48[6]; // [rsp+88h] [rbp-70h] BYREF
  unsigned __int64 v49; // [rsp+A0h] [rbp-58h]
  void *retaddr; // [rsp+F8h] [rbp+0h]
  bool v51; // [rsp+100h] [rbp+8h]
  __int64 v52; // [rsp+108h] [rbp+10h]
  __int64 v53; // [rsp+110h] [rbp+18h]

  v53 = a3;
  v52 = a2;
  v5 = *(unsigned __int16 *)(BugCheckParameter2 + 2);
  v6 = 0;
  v40 = 0;
  v38 = 0;
  v8 = 0LL;
  v51 = (DWORD1(PerfGlobalGroupMask) & 0x40000) != 0;
  v9 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v41 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v32) = 0x8000;
    else
      v32 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v32;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (unsigned __int16)v5 < 0x800u )
  {
    Number = CurrentPrcb->Number;
    if ( (_WORD)v5 != (_WORD)Number )
      v9 = 1;
    v12 = (__int64)CurrentPrcb;
  }
  else
  {
    Number = v5 - 2048;
    v12 = KiProcessorBlock[(unsigned int)(v5 - 2048)];
    if ( !v12 )
      KeBugCheckEx(0xC7u, 3uLL, BugCheckParameter2, v5, (unsigned int)KeNumberProcessors_0);
  }
  if ( (*(_QWORD *)(BugCheckParameter2 + 16) & *(_QWORD *)(v12 + 200)) == 0LL )
    _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 16), *(unsigned __int8 *)(v12 + 209));
  if ( *(_BYTE *)BugCheckParameter2 != 26 || (v13 = v12 + 13168, !*(_BYTE *)(v12 + 13240)) )
    v13 = v12 + 13120;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13 + 16);
  }
  else
  {
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v13 + 16), 0LL) )
      goto LABEL_10;
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(v13 + 16));
  }
  a2 = v52;
  a3 = v53;
LABEL_10:
  IsrDpcStats = (signed __int64)CurrentPrcb->IsrDpcStats;
  if ( Number != CurrentPrcb->Number )
    IsrDpcStats = 1LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 56), IsrDpcStats, 0LL) )
  {
    v15 = 0;
  }
  else
  {
    v15 = *(_DWORD *)(v13 + 24);
    v38 = v15;
    *(_DWORD *)(v13 + 24) = v15 + 1;
    ++*(_DWORD *)(v13 + 28);
    *(_QWORD *)(BugCheckParameter2 + 40) = a2;
    *(_QWORD *)(BugCheckParameter2 + 48) = a3;
    if ( v51 )
    {
      v15 = *(_DWORD *)(v13 + 24);
      v38 = v15;
      v40 = *(_DWORD *)(v13 + 28);
    }
    v16 = (_QWORD *)(BugCheckParameter2 + 8);
    v6 = 1;
    if ( *(_BYTE *)(BugCheckParameter2 + 1) == 2 )
    {
      v30 = *(_QWORD *)v13;
      if ( !*(_QWORD *)v13 )
        *(_QWORD *)(v13 + 8) = v16;
      *v16 = v30;
      *(_QWORD *)v13 = v16;
    }
    else
    {
      *v16 = 0LL;
      **(_QWORD **)(v13 + 8) = v16;
      *(_QWORD *)(v13 + 8) = v16;
    }
    if ( v9 )
      *(_WORD *)(BugCheckParameter2 + 2) = Number;
    v17 = *(_QWORD *)(v12 + 35000);
    if ( v17 && v13 == v12 + 13120 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 28));
    }
    else if ( v13 != v12 + 13120 )
    {
      goto LABEL_28;
    }
    v18 = *(_QWORD *)(v12 + 13072);
    if ( v18 )
    {
      v19 = *(_DWORD *)(v18 + 4) >> 5;
      v20 = -1LL << (*(_BYTE *)(v18 + 4) & 0x1F);
      v21 = *(_QWORD *)(BugCheckParameter2 + 24) & v20;
      v47 = HIWORD(v21);
      v46 = v21 >> 40;
      v45 = HIDWORD(v21);
      v44 = v21 >> 24;
      v43 = v21 >> 16;
      if ( v19 )
      {
        v49 = v21;
        v22 = (_QWORD *)(*(_QWORD *)(v18 + 8)
                       + 8
                       * ((HIBYTE(v21)
                         + 37
                         * ((unsigned __int8)v47
                          + 37
                          * ((unsigned __int8)v46
                           + 37
                           * ((unsigned __int8)v45
                            + 37
                            * ((unsigned __int8)v44
                             + 37 * ((unsigned __int8)v43 + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))) & (unsigned int)(v19 - 1)));
        while ( 1 )
        {
          v23 = (_QWORD *)*v22;
          v22 = v23;
          if ( ((unsigned __int8)v23 & 1) != 0 )
            break;
          if ( v21 == (v20 & v23[1]) )
          {
            v8 = v23[2];
            v15 = v38;
            if ( v8 > (unsigned int)KiLongDpcRuntimeThresholdCycles )
              *(_DWORD *)(v13 + 40) = 1;
            goto LABEL_28;
          }
        }
      }
      v15 = v38;
    }
  }
LABEL_28:
  if ( a4 )
    _InterlockedAnd(a4, ~((a5 << 24) | 0x80));
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseSpinLockInstrumented(v13 + 16, retaddr);
    v15 = v38;
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 16), 0LL);
  }
  if ( v6 )
  {
    if ( v51 )
      EtwTraceDpcEnqueueEvent(
        -203591049
      * (KiWaitNever ^ __ROR8__(
                         *(_QWORD *)(BugCheckParameter2 + 24) ^ _byteswap_uint64(KiWaitAlways ^ BugCheckParameter2),
                         KiWaitNever)),
        *(_QWORD *)(BugCheckParameter2 + 24),
        v15,
        v40,
        Number,
        *(_BYTE *)(BugCheckParameter2 + 1),
        v8);
    if ( v13 == v12 + 13168 )
    {
      if ( (KiSetDpcRequestFlag(v12 + 13246, 2LL) & 0xAF) != 0 )
        goto LABEL_47;
      v25 = 4LL;
      goto LABEL_40;
    }
    if ( *(_DWORD *)(v13 + 24) < *(_DWORD *)(v12 + 13224) )
    {
      v24 = *(_BYTE *)(BugCheckParameter2 + 1);
      if ( CurrentPrcb == (struct _KPRCB *)v12 )
      {
        if ( !v24 && *(_DWORD *)(v12 + 13228) >= *(_DWORD *)(v12 + 13232) )
          goto LABEL_57;
      }
      else if ( v24 != 3 && v24 != 2 )
      {
LABEL_57:
        if ( (KiSetDpcRequestFlag(v12 + 13244, 16LL) & 0xAF) != 0
          || (*(_QWORD *)(*(_QWORD *)(v12 + 192) + 64LL) & *(_QWORD *)(v12 + 200)) == 0LL )
        {
          goto LABEL_47;
        }
      }
    }
    v25 = 2LL;
LABEL_40:
    v26 = 175;
    if ( (struct _KPRCB *)v12 == CurrentPrcb )
    {
      v26 = 169;
      LOWORD(v25) = v25 | 0x20;
    }
    v42 = 0;
    _m_prefetchw((const void *)(v12 + 13244));
    for ( i = *(_WORD *)(v12 + 13244);
          i != _InterlockedCompareExchange16((volatile signed __int16 *)(v12 + 13244), v25 | i, i);
          i = *(_WORD *)(v12 + 13244) )
    {
      RtlBackoff(&v42);
      _m_prefetchw((const void *)(v12 + 13244));
    }
    if ( ((unsigned __int16)i & (unsigned __int16)v26) == 0 )
    {
      if ( (struct _KPRCB *)v12 == CurrentPrcb )
      {
        if ( CurrentPrcb->NestingLevel )
        {
          CurrentPrcb->InterruptRequest = 1;
        }
        else
        {
          v48[0] = 5;
          *(_OWORD *)&v48[1] = 0LL;
          HalpInterruptSendIpi(v48, 47LL);
        }
      }
      else if ( *(_QWORD *)(v12 + 8) != *(_QWORD *)(v12 + 24) || *(_BYTE *)(v12 + 7) )
      {
        KiHvEnlightenedGuestPriorityKick(CurrentPrcb, v12, (unsigned int)KiVpThreadSystemWorkPriority, v25);
        v29 = KeGetCurrentPrcb();
        ++v29->SynchCounters.IpiSendSoftwareInterruptCount;
        HalSendSoftwareInterrupt(Number, 2);
      }
    }
  }
LABEL_47:
  if ( (_DWORD)KiIrqlFlags )
  {
    v33 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v33 <= 0xFu && v41 <= 0xFu && v33 >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v41 + 1));
      v37 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v37 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  __writecr8(v41);
  return v6;
}
