/*
 * XREFs of KiSetTimerEx @ 0x1402E2D20
 * Callers:
 *     PfSnTraceTimerRoutine @ 0x140244E70 (PfSnTraceTimerRoutine.c)
 *     PopSetWatchdog @ 0x140256998 (PopSetWatchdog.c)
 *     PpmEndHighPerfRequest @ 0x14025DC0C (PpmEndHighPerfRequest.c)
 *     CcScheduleLazyWriteScan @ 0x140276758 (CcScheduleLazyWriteScan.c)
 *     MiInsertUnusedSegment @ 0x140287FB8 (MiInsertUnusedSegment.c)
 *     KeSetTimer @ 0x1402E2C40 (KeSetTimer.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     PfSnStartTraceTimer @ 0x14035FC04 (PfSnStartTraceTimer.c)
 *     CcNotifyWriteBehindInternal @ 0x140389160 (CcNotifyWriteBehindInternal.c)
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 *     PopEnableIrpWatchdog @ 0x1403A4428 (PopEnableIrpWatchdog.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x1403BA9B4 (HalpTimerSchedulePeriodicQueries.c)
 *     MiQueueFinishDriverPageRangeAllocation @ 0x1403CFC88 (MiQueueFinishDriverPageRangeAllocation.c)
 *     HalpCmcStartPolling @ 0x1403D2BFC (HalpCmcStartPolling.c)
 *     CcNotifyWriteBehindVolume @ 0x14053D2E4 (CcNotifyWriteBehindVolume.c)
 *     CcScheduleLazyWriteScanVolume @ 0x14053DA58 (CcScheduleLazyWriteScanVolume.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140576200 (KiInvokeInterruptServiceRoutine.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 *     PfpServiceMainThreadBoost @ 0x1405C614C (PfpServiceMainThreadBoost.c)
 *     PopCoalescingSetTimer @ 0x1405CFBF0 (PopCoalescingSetTimer.c)
 *     DifKeSetTimerExWrapper @ 0x1406157E0 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x140615930 (DifKeSetTimerWrapper.c)
 *     CmpDelayFreeCmRm @ 0x14069FED8 (CmpDelayFreeCmRm.c)
 *     PfSnPowerBoost @ 0x1406E18A0 (PfSnPowerBoost.c)
 *     PiDrvDbUnloadNode @ 0x1407D4F98 (PiDrvDbUnloadNode.c)
 *     PoUserShutdownInitiated @ 0x1407EC000 (PoUserShutdownInitiated.c)
 *     PopBatteryWorker @ 0x1407EDFC0 (PopBatteryWorker.c)
 *     PopUserPresentSetWorker @ 0x1407F32E0 (PopUserPresentSetWorker.c)
 *     CmSetLazyFlushState @ 0x1407FFF4C (CmSetLazyFlushState.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x14081CFDC (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpCmdInit @ 0x140832270 (CmpCmdInit.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1408553A0 (PpmWmiDispatch.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14086448C (PfSnQueueEnablePrefetcherTimer.c)
 *     CmFreezeRegistry @ 0x140918C40 (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1409194E0 (CmpLazyCommitWorker.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x14092BDD0 (DbgkpWerDeferredWriteRoutine.c)
 *     PopSetSystemAwayMode @ 0x140990100 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x1409A332C (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1409A3B04 (TtmpResetEvaluationTimer.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140A48D9C (PfpStartLoggingHardFaultEvents.c)
 *     PopBuildDeviceNotifyList @ 0x140A50C40 (PopBuildDeviceNotifyList.c)
 *     PfSnBeginBootPhase @ 0x140A544B0 (PfSnBeginBootPhase.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140A5B0D0 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     KdpTimeSlipWork @ 0x140A6F010 (KdpTimeSlipWork.c)
 *     ViShutdownScheduleWatchdog @ 0x140A95A04 (ViShutdownScheduleWatchdog.c)
 *     VfWdCheckForSettingsChange @ 0x140A9CF88 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140A9D3E0 (ViWdIrpTimerDpcRoutine.c)
 *     PfSnInitializePrefetcher @ 0x140B23CDC (PfSnInitializePrefetcher.c)
 * Callees:
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402B7800 (KiInsertTimerTable.c)
 *     KiRemoveEntryTimer @ 0x1402E40E0 (KiRemoveEntryTimer.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x14035EDE4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTraceSetTimer @ 0x14057AAF8 (KiTraceSetTimer.c)
 */

__int64 __fastcall KiSetTimerEx(unsigned __int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  char v6; // r14
  __int64 v8; // rsi
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int8 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  struct _KPRCB *v16; // rdx
  volatile signed __int32 *v17; // r12
  _DWORD *v18; // rcx
  struct _KPRCB *v19; // r14
  char v20; // al
  struct _KPRCB *v21; // rcx
  _DWORD *v22; // rdx
  _KPROCESS *Process; // rcx
  __int16 v24; // ax
  volatile signed __int32 v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // r12
  _DWORD *SchedulerAssist; // r9
  _DWORD *v32; // rcx
  _DWORD *v33; // rcx
  struct _KPRCB *v34; // rcx
  _DWORD *v35; // rdx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v42; // [rsp+34h] [rbp-5Dh] BYREF
  int v43; // [rsp+38h] [rbp-59h] BYREF
  int v44; // [rsp+3Ch] [rbp-55h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-51h]
  int v46; // [rsp+44h] [rbp-4Dh]
  volatile signed __int32 *v47; // [rsp+48h] [rbp-49h] BYREF
  __int128 v48; // [rsp+50h] [rbp-41h]
  __int64 v49; // [rsp+60h] [rbp-31h]
  __int64 v50; // [rsp+68h] [rbp-29h]
  unsigned __int64 v51; // [rsp+70h] [rbp-21h] BYREF
  struct _KPRCB *v52; // [rsp+78h] [rbp-19h]
  __int64 v53; // [rsp+80h] [rbp-11h]
  __int64 v54; // [rsp+88h] [rbp-9h]
  _QWORD v55[2]; // [rsp+90h] [rbp-1h] BYREF

  v6 = a4;
  v46 = a3;
  v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  v53 = a5;
  CurrentIrql = KeGetCurrentIrql();
  v54 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v51 = 0LL;
  v11 = 0;
  v47 = 0LL;
  v42 = 0;
  while ( 1 )
  {
    v43 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v43);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v12 = *(unsigned __int8 *)(a1 + 2);
    v13 = *(unsigned __int16 *)(a1 + 56);
    v14 = (unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8;
    v45 = *(unsigned __int8 *)(a1 + 2);
    v15 = v12 + 16 + v14;
    v16 = KeGetCurrentPrcb();
    v17 = (volatile signed __int32 *)(KiProcessorBlock[v13] + 15360 + 32 * v15);
    v50 = KiProcessorBlock[v13] + 15360;
    v18 = v16->SchedulerAssist;
    v52 = v16;
    v44 = 0;
    if ( v18 )
    {
      if ( v16->NestingLevel <= 1u )
      {
        v36 = v18[6];
        v18[6] = v36 + 1;
        if ( v36 == -1 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    v19 = v52;
    while ( _interlockedbittestandset64(v17, 0LL) )
    {
      v32 = v19->SchedulerAssist;
      if ( v32 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v37 = v32[6] - 1;
          v32[6] = v37;
          if ( !v37 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
      do
        KeYieldProcessorEx(&v44);
      while ( *(_QWORD *)v17 );
      v33 = v19->SchedulerAssist;
      if ( v33 )
      {
        if ( v19->NestingLevel <= 1u )
        {
          v38 = v33[6];
          v33[6] = v38 + 1;
          if ( v38 == -1 )
            KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    v20 = *(_BYTE *)(a1 + 3);
    v6 = a4;
    v47 = v17;
    if ( v20 >= 0 )
    {
      KiRemoveEntryTimer(v50, a1, v45, &v47);
      _InterlockedAnd64((volatile signed __int64 *)v47, 0LL);
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      if ( v22 )
      {
        if ( v21->NestingLevel <= 1u )
        {
          v40 = v22[6] - 1;
          v22[6] = v40;
          if ( !v40 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)a1, 0xBFFFFFFF);
      goto LABEL_11;
    }
    _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
    v34 = KeGetCurrentPrcb();
    v35 = v34->SchedulerAssist;
    if ( v35 )
    {
      if ( v34->NestingLevel <= 1u )
      {
        v39 = v35[6] - 1;
        v35[6] = v39;
        if ( !v39 )
          KiRemoveSystemWorkPriorityKick(v34);
      }
    }
    if ( _InterlockedExchange64((volatile __int64 *)(v50 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFu);
LABEL_11:
      v11 = 1;
      break;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v42 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v42);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v11 )
  {
    v51 = a1;
    v55[0] = &v51;
    v55[1] = 8LL;
    EtwTraceKernelEvent((unsigned int)v55, 1, 1073872896, 3925, 1538);
  }
  v24 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x4000000) != 0 )
    {
      v24 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v24;
  *(_DWORD *)(a1 + 60) = v46;
  v49 = 0LL;
  *(_QWORD *)(a1 + 48) = v8;
  v25 = *(_DWORD *)a1;
  v48 = 0LL;
  LODWORD(v48) = v25;
  BYTE1(v48) = v6;
  if ( a2 >= 0 )
  {
    BYTE1(v48) = v6 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 >= 0 )
    {
      *(_DWORD *)a1 = v48;
      *(_QWORD *)(a1 + 24) = 0LL;
LABEL_31:
      KiTimerWaitTest((__int64)CurrentPrcb, a1, 0LL);
      goto LABEL_23;
    }
    v6 = BYTE1(v48);
  }
  v26 = 0LL;
  if ( (v6 & 0xFC) != 0 )
    v26 = (unsigned __int8)(v6 & 0xFC) << 16;
  BYTE3(v48) |= 0x40u;
  v27 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  v28 = (unsigned __int64)(v26 + v27) >> 18;
  BYTE2(v48) = v28;
  *(_DWORD *)a1 = v48;
  *(_DWORD *)(a1 + 4) = 0;
  v29 = v53;
  if ( !KiInsertTimerTable((__int64)CurrentPrcb, a1, v53, (unsigned __int8)v28, 0LL) )
    goto LABEL_31;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, v29, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_23:
  KiExitDispatcher((__int64)CurrentPrcb, 0, 1, 0, v54);
  return v11;
}
