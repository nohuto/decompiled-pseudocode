/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180032A30
 * Callers:
 *     EtwpRegisterProvider @ 0x18003266C (EtwpRegisterProvider.c)
 *     RtlQueryResourcePolicy @ 0x180049E30 (RtlQueryResourcePolicy.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BC2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpHpMetadataHeapStart @ 0x180066CC0 (RtlpHpMetadataHeapStart.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18007C550 (RtlpLogCapabilityCheckLatency.c)
 *     RtlSetHeapInformation @ 0x18007CB90 (RtlSetHeapInformation.c)
 *     RtlRandomEx @ 0x18007D060 (RtlRandomEx.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180088C00 (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpInitMuiCritsRtlInitOnce @ 0x18009E3DC (LdrpInitMuiCritsRtlInitOnce.c)
 *     LdrpCgLogFailure @ 0x1800DAEB0 (LdrpCgLogFailure.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DBBA4 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DBF94 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DC0A0 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DC39C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DC518 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800DC664 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC768 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC848 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC928 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011639C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18005BA40 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x18005C3AC (RtlpRunOnceWaitForInit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x18010C17C (RtlReportCriticalFailure.c)
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
