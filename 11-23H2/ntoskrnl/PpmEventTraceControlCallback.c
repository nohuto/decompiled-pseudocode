/*
 * XREFs of PpmEventTraceControlCallback @ 0x140864ED0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     KeEnumerateNextProcessor @ 0x140257370 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1402573F0 (KeGetPrcb.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PopExecuteOnTargetProcessors @ 0x1402BFDAC (PopExecuteOnTargetProcessors.c)
 *     PoEnergyEstimationEnabled @ 0x1402C0DE0 (PoEnergyEstimationEnabled.c)
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PpmEventHgsHardwareTable @ 0x14059A7DC (PpmEventHgsHardwareTable.c)
 *     PpmEventHgsNormalizedTable @ 0x14059A9D4 (PpmEventHgsNormalizedTable.c)
 *     PpmEventPlatformVetoRundown @ 0x14059B604 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x14059B920 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x14059BFC8 (PpmEventTraceLPIState.c)
 *     PpmEventVetoReasonRundown @ 0x14059C854 (PpmEventVetoReasonRundown.c)
 *     PpmEventQosClassPolicyV1 @ 0x14067EAF0 (PpmEventQosClassPolicyV1.c)
 *     PpmEventQosSupport @ 0x1407EA58C (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x14082D6F0 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceHeteroSets @ 0x14082D774 (PpmEventTraceHeteroSets.c)
 *     PpmEventTraceProfiles @ 0x14084A010 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1409931DC (PpmInfoTraceProfileSettings.c)
 *     PpmEventEnergyEstimationRundown @ 0x140998A28 (PpmEventEnergyEstimationRundown.c)
 *     PpmEventStaticPolicyRundown @ 0x140998C14 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x140998DF0 (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140998EC8 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x14099912C (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140999270 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1409994B8 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x140999548 (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x14099976C (PpmEventTraceProcessorPerformance.c)
 *     PpmEventTraceProcessorPerformanceDomainRundown @ 0x140999B30 (PpmEventTraceProcessorPerformanceDomainRundown.c)
 *     PpmEventTraceProcessorPerformanceRundownHv @ 0x140999DCC (PpmEventTraceProcessorPerformanceRundownHv.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 Prcb; // rax
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int k; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int16 *v34; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+28h] [rbp-18h]
  __int16 v36; // [rsp+30h] [rbp-10h]
  int v37; // [rsp+32h] [rbp-Eh]
  __int16 v38; // [rsp+36h] [rbp-Ah]
  unsigned int v39; // [rsp+78h] [rbp+38h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    v37 = 0;
    v38 = 0;
    v39 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v35 = qword_140D1EFF8[0];
    v36 = 0;
    v34 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v39, &v34) )
    {
      Prcb = KeGetPrcb(v39);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( ControlCode == 2 )
      {
        PpmEventTraceProcessorPerformanceDomainRundown(i);
        PpmEventQosClassPolicyV1(i, 1);
      }
      for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
      {
        v8 = *(_QWORD *)(i + 312) + 144LL * j;
        if ( *(_DWORD *)(v8 + 16) == 1 )
          PpmEventTraceProcessorPerformanceRundownHv(*(_QWORD *)v8);
      }
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown(v10, v9, v11);
      PpmEventQosSupport(1);
      PpmEventHeteroPolicy(1);
      LOBYTE(v12) = 1;
      PpmEventTraceHeteroSets(v12);
      if ( PpmHeteroHgsEnabled || PpmHeteroHgsThreadEnabled )
      {
        PpmEventHgsHardwareTable(1);
        PpmEventHgsNormalizedTable();
      }
    }
    for ( k = 0; k < PpmParkNumNodes; ++k )
      PpmEventTraceParkNodeRundown(PpmParkNodes + 192LL * k);
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown(v15, v14, v16);
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings(v18, v17, v19);
    PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown(v21, v20, v22);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      PpmEventTraceCoordinatedIdleStates(v25, v24, v26);
      PpmEventTracePlatformIdleAccounting(v28, v27, v29);
      PpmEventVetoReasonRundown();
      PpmEventPlatformVetoRundown();
      v35 = qword_140D1EFF8[0];
      v36 = 0;
      v34 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v39, &v34) )
      {
        v30 = KeGetPrcb(v39);
        PpmEventProcessorVetoRundown(v30);
        PpmEventTraceProcessorIdle(v30);
      }
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
      PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
      if ( (unsigned __int8)PoEnergyEstimationEnabled() )
        PpmEventEnergyEstimationRundown(v32, v31, v33);
    }
  }
}
