/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1800328D0
 * Callers:
 *     EtwpRegisterProvider @ 0x18003250C (EtwpRegisterProvider.c)
 *     RtlQueryResourcePolicy @ 0x180049CD0 (RtlQueryResourcePolicy.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800613FC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpHpMetadataHeapStart @ 0x180066CA4 (RtlpHpMetadataHeapStart.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18007CBC0 (RtlpLogCapabilityCheckLatency.c)
 *     RtlSetHeapInformation @ 0x18007D200 (RtlSetHeapInformation.c)
 *     RtlRandomEx @ 0x18007D6D0 (RtlRandomEx.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089400 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009F46C (LdrpInitMuiCritsRtlInitOnce.c)
 *     RtlpFtQueryConfiguration @ 0x18009F998 (RtlpFtQueryConfiguration.c)
 *     LdrpCgLogFailure @ 0x1800DA860 (LdrpCgLogFailure.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB554 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DB944 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBA50 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DBD4C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DBEC8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800DC014 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC118 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC1F8 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC2D8 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011781C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180061210 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180061B7C (RtlpRunOnceWaitForInit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x18010D5FC (RtlReportCriticalFailure.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v9; // edi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  PVOID v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = Value & 3;
      if ( (Value & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    v12 = Value;
    Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
  }
  while ( Value != v12 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v13 = *Context;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete(RunOnce, 0, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v14, v15, 1LL);
    return v14;
  }
  return 0;
}
