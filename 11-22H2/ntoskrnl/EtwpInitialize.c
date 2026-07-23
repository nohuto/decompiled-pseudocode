/*
 * XREFs of EtwpInitialize @ 0x140B4B150
 * Callers:
 *     EtwInitialize @ 0x14081F5AC (EtwInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     KeGetPrcb @ 0x140257210 (KeGetPrcb.c)
 *     KiInitializeTimer2 @ 0x14031E33C (KiInitializeTimer2.c)
 *     KiInitializeMutant @ 0x14033ABEC (KiInitializeMutant.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140354470 (KeRegisterBugCheckReasonCallback.c)
 *     ExRegisterCallback @ 0x140367250 (ExRegisterCallback.c)
 *     EtwpGetCurrentSiloMaxLoggers @ 0x1403B392C (EtwpGetCurrentSiloMaxLoggers.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x14041E370 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     EtwRegister @ 0x14078DD90 (EtwRegister.c)
 *     EtwpUpdateFileInfoDriverState @ 0x1407D5BF0 (EtwpUpdateFileInfoDriverState.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     EtwpMapEnableFlags @ 0x1407FC7A0 (EtwpMapEnableFlags.c)
 *     EtwpInitializeCoverage @ 0x140803324 (EtwpInitializeCoverage.c)
 *     TlgRegisterAggregateProvider @ 0x140803364 (TlgRegisterAggregateProvider.c)
 *     TlgRegisterAggregateProviderEx @ 0x140803380 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408034B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwInitializeProcessorActivityId @ 0x14081FD34 (EtwInitializeProcessorActivityId.c)
 *     EtwInitializeProcessor @ 0x14081FD58 (EtwInitializeProcessor.c)
 *     EtwpInitializeProcessorTrace @ 0x140823110 (EtwpInitializeProcessorTrace.c)
 *     WdipSemInitialize @ 0x140831548 (WdipSemInitialize.c)
 *     EtwpInitializeSiloState @ 0x14083D0F4 (EtwpInitializeSiloState.c)
 *     EtwpPreInitializeSiloState @ 0x140847ADC (EtwpPreInitializeSiloState.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140862AC8 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x140863ED0 (EtwpInitializePrivateSessionDemuxObject.c)
 *     EtwpInitializeProviderTraits @ 0x140864C94 (EtwpInitializeProviderTraits.c)
 *     EtwpInitializeLastBranchTracing @ 0x140865408 (EtwpInitializeLastBranchTracing.c)
 *     EtwpInitializeStackLookasideList @ 0x140866244 (EtwpInitializeStackLookasideList.c)
 *     EtwpTraceSystemInitialization @ 0x140B381EC (EtwpTraceSystemInitialization.c)
 *     EtwpFixBootLoggers @ 0x140B68B2C (EtwpFixBootLoggers.c)
 *     PerfDiagInitialize @ 0x140B706A8 (PerfDiagInitialize.c)
 *     EtwpReadConfigParameters @ 0x140B73A8C (EtwpReadConfigParameters.c)
 *     EtwpInitializeSecurity @ 0x140B74864 (EtwpInitializeSecurity.c)
 *     EtwpInitializeRegistration @ 0x140B74B08 (EtwpInitializeRegistration.c)
 *     EtwpInitializeCoverageSampler @ 0x140B74D28 (EtwpInitializeCoverageSampler.c)
 *     EtwpInitializeBootTimeStamps @ 0x140B74FDC (EtwpInitializeBootTimeStamps.c)
 *     EtwpInitializeRealTimeConnection @ 0x140B75BE8 (EtwpInitializeRealTimeConnection.c)
 *     EtwpFixBootSystemTime @ 0x140B984E0 (EtwpFixBootSystemTime.c)
 *     EtwpStartBootLogger @ 0x140B986C4 (EtwpStartBootLogger.c)
 */

void __fastcall EtwpInitialize(int a1, int a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // rcx
  unsigned int CurrentSiloMaxLoggers; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD **v9; // rbx
  _QWORD *i; // rdi
  unsigned int v11; // r14d
  int v12; // eax
  __int64 v13; // rcx
  _WORD *v14; // rdi
  unsigned int j; // edi
  __int64 Prcb; // rax
  __int64 v17; // rsi
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int v24; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v25; // [rsp+C0h] [rbp+40h] BYREF

  if ( !a3 || (v5 = 1, *(_QWORD *)(a3 + 8) == a3 + 8) )
    v5 = 0;
  if ( !a1 )
  {
    KiInitializeMutant((__int64)&EtwpGroupMaskMutex, 0, 1, 0);
    KiInitializeMutant((__int64)&EtwpCrimsonMaskMutex, 0, 1, 0);
    EtwpSecurityLock = 0LL;
    EtwpInitializeStackLookasideList();
    dword_140D1F3CC |= 0x880000u;
    LOBYTE(v6) = v5;
    EtwpBootDeferredGroupMask |= 0x10000u;
    EtwpInitializeBootTimeStamps(v6);
    if ( !a3 || (CurrentSiloMaxLoggers = *(_DWORD *)a3) == 0 )
    {
      if ( a2 )
        CurrentSiloMaxLoggers = EtwpGetCurrentSiloMaxLoggers();
      else
        CurrentSiloMaxLoggers = 80;
    }
    if ( (int)EtwpPreInitializeSiloState(0LL, CurrentSiloMaxLoggers) < 0 )
      KeBugCheck(0x11Du);
    CurrentPrcb = KeGetCurrentPrcb();
    EtwpHostSiloState = qword_140D49D20;
    EtwInitializeProcessor((__int64)CurrentPrcb);
    qword_140C0B4B8 = *(_QWORD *)(EtwpHostSiloState + 456);
    qword_140C0B4C0 = EtwpHostSiloState;
    if ( a3 )
    {
      v9 = (_QWORD **)(a3 + 8);
      for ( i = *v9; i != v9; i = (_QWORD *)*i )
        EtwpStartBootLogger(i);
    }
LABEL_16:
    ++EtwpBootPhase;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    EtwpUpdateFileInfoDriverState(PerfGlobalGroupMask, PerfGlobalGroupMask, 1, (_QWORD *)EtwpHostSiloState, 0);
    goto LABEL_16;
  }
  v11 = KeNumberProcessors_0;
  if ( v5 )
    EtwpFixBootSystemTime();
  v12 = EtwpInitializeSecurity();
  if ( v12 < 0 )
    KeBugCheckEx(0x11Du, 1uLL, v12, 0LL, 0LL);
  EtwpFixBootLoggers();
  v13 = 9LL;
  v14 = (_WORD *)(MmWriteableSharedUserData + 896);
  while ( v13 )
  {
    *v14++ = 0;
    --v13;
  }
  for ( j = 0; j < v11; ++j )
  {
    Prcb = KeGetPrcb(j);
    v17 = Prcb;
    if ( !*(_QWORD *)(Prcb + 34472) )
    {
      v18 = EtwInitializeProcessor(Prcb);
      if ( v18 < 0 )
        KeBugCheckEx(0x11Du, 2uLL, v18, j, 0LL);
    }
    v19 = EtwInitializeProcessorActivityId(v17);
    if ( v19 < 0 )
      KeBugCheckEx(0x11Du, 2uLL, v19, j, 0LL);
  }
  EtwpReadConfigParameters();
  EtwpInitializeRegistration();
  EtwpInitializePrivateSessionDemuxObject();
  EtwpInitializeRealTimeConnection();
  EtwCPUSpeedInMHz = *(_DWORD *)(KeGetPrcb(0) + 68);
  EtwpInitializeLastBranchTracing();
  EtwpInitializeProcessorTrace(v21, v20);
  dword_140C31C10 = 0;
  EtwpAdjustBuffersWorkItem.WorkerRoutine = (void (__fastcall *)(void *))EtwpAdjustTraceBuffers;
  EtwpMdlTable = 0;
  qword_140C31C08 = 0LL;
  EtwpAdjustBuffersWorkItem.Parameter = &EtwpBufferAdjustmentActive;
  dword_140C31C04 = 12;
  EtwpBufferAdjustmentCount = 8;
  EtwpAdjustBuffersWorkItem.List.Flink = 0LL;
  word_140C32402 = 0;
  KiInitializeTimer2((unsigned __int64)&EtwpMemInfoTimer, (__int64)EtwpLogMemInfoTimerCallback, 0LL, 8);
  EtwpInitializeProviderTraits();
  if ( !ExRegisterCallback((PCALLBACK_OBJECT)ExCbPowerState, (PCALLBACK_FUNCTION)EtwpPowerStateCallback, 0LL) )
    goto LABEL_43;
  v25 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  if ( (int)KsrGetFirmwareInformation(&v25) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Callback\\SoftRestart");
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(&EtwpKsrCallbackObject, &ObjectAttributes, 0, 1u) >= 0 )
      ExRegisterCallback(EtwpKsrCallbackObject, (PCALLBACK_FUNCTION)EtwpKsrCallback, 0LL);
  }
  EtwpLoadMicroarchitecturalPmcs();
  EtwpSiloAllowedGroupMask |= 0x1600370Fu;
  dword_140D1EE94 |= 0x8206u;
  dword_140D1EE98 |= 0x10040u;
  dword_140D1EEA8 |= 0x1FFFFFFFu;
  EtwpMapEnableFlags((__int64)&EtwpSiloAllowedGroupMask, 0);
  if ( (int)EtwpInitializeSiloState(0LL, a3) < 0 )
LABEL_43:
    KeBugCheck(0x11Du);
  EtwpBugCheckCallback.State = 0;
  KeRegisterBugCheckReasonCallback(
    &EtwpBugCheckCallback,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)EtwpBugCheckMultiPartCallback,
    KbCallbackSecondaryMultiPartDumpData,
    (PUCHAR)"Etw");
  EtwRegister(
    &EventTracingProvGuid,
    (PETWENABLECALLBACK)EtwpTracingProvEnableCallback,
    0LL,
    &EtwpEventTracingProvRegHandle);
  WdipSemInitialize();
  PerfDiagInitialize();
  EtwpInitializeCoverage();
  EtwpInitializeCoverageSampler();
  EtwRegister(&KernelProvGuid, (PETWENABLECALLBACK)EtwpKernelProvEnableCallback, 0LL, &EtwKernelProvRegHandle);
  TlgRegisterAggregateProvider(&dword_140C066C0);
  EtwRegister(&PsProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)1, &EtwpPsProvRegHandle);
  TlgRegisterAggregateProviderEx(
    &dword_140C042E8,
    (__int64)EtwpTraceLoggingProvEnableCallback,
    (__int64)PsProvTraceLoggingGuid);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C038E0, 0LL, 0LL);
  EtwRegister(&NetProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x10000, &EtwpNetProvRegHandle);
  EtwRegister(&DiskProvGuid, (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback, (PVOID)0x100, &EtwpDiskProvRegHandle);
  EtwRegister(
    &FileProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x2000000,
    &EtwpFileProvRegHandle);
  EtwRegister(&RegistryProvGuid, (PETWENABLECALLBACK)EtwpRegTraceEnableCallback, 0LL, &EtwpRegTraceHandle);
  EtwRegister(
    &MemoryProvGuid,
    (PETWENABLECALLBACK)EtwpCrimsonProvEnableCallback,
    (PVOID)0x20000001,
    &EtwpMemoryProvRegHandle);
  EtwRegister(&MS_Windows_Kernel_AppCompat_Provider, 0LL, 0LL, &EtwAppCompatProvRegHandle);
  EtwRegister(&KernelAuditApiCallsGuid, 0LL, 0LL, &EtwApiCallsProvRegHandle);
  EtwRegister(&CVEAuditProviderGuid, 0LL, 0LL, &EtwCVEAuditProvRegHandle);
  EtwRegister(&ThreatIntProviderGuid, 0LL, 0LL, &EtwThreatIntProvRegHandle);
  EtwRegister(&MS_Windows_Security_LPAC_Provider, 0LL, 0LL, &EtwLpacProvRegHandle);
  EtwRegister(&SecurityMitigationsProviderGuid, 0LL, 0LL, &EtwSecurityMitigationsRegHandle);
  EtwRegister(
    &CpuStarvationProvGuid,
    (PETWENABLECALLBACK)EtwpCpuStarvationProvEnableCallback,
    0LL,
    &EtwCpuStarvationProvRegHandle);
  ++EtwpBootPhase;
  ZwUpdateWnfStateData(&WNF_ETW_SUBSYSTEM_INITIALIZED, 0LL, 0, 0LL, 0LL, 0, 0);
  EtwpTraceSystemInitialization();
  v24 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140C020E8[0])(
         44LL,
         4LL,
         (char *)&NlsMbCodePageTag + 6,
         &v24) < 0 )
    *(_DWORD *)((char *)&NlsMbCodePageTag + 6) = 8;
  EtwpMaxProfilingSources = *(_DWORD *)((char *)&NlsMbCodePageTag + 6);
}
