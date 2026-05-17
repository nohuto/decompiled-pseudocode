/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x1800163A0
 * Callers:
 *     RtlpLogCapabilityCheckLatency @ 0x180014B1C (RtlpLogCapabilityCheckLatency.c)
 *     EtwpRegisterProvider @ 0x1800165B8 (EtwpRegisterProvider.c)
 *     RtlQueryResourcePolicy @ 0x1800533F0 (RtlQueryResourcePolicy.c)
 *     RtlpHpMetadataHeapStart @ 0x1800558D4 (RtlpHpMetadataHeapStart.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x180059C2C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlRandomEx @ 0x180080E30 (RtlRandomEx.c)
 *     RtlSetHeapInformation @ 0x180080EF0 (RtlSetHeapInformation.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x18008E05C (RtlpQueryDiskSpeedPolicy.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DBA74 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBB80 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DBE7C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DBFF8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800DC144 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC248 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC328 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC408 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180115FAC (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x1800154F0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x18005B4E4 (RtlpRunOnceWaitForInit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x18010C00C (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, __int64 *),
        __int64 a3,
        __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  char v15[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  do
  {
    while ( 1 )
    {
      v11 = v4 & 3;
      if ( (v4 & 3) == 0 )
        break;
      if ( v11 != 1 )
      {
        if ( v11 != 3 )
          goto LABEL_2;
        v14 = -1073741584;
        v15[0] = 0;
        goto LABEL_20;
      }
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    v12 = v4;
    v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
  }
  while ( v4 != v12 );
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v14 = RtlRunOnceComplete((signed __int64 *)a1, 4u, 0LL);
    if ( v14 >= 0 )
      return v9;
    v15[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v13 = *a4;
  else
    v13 = 0LL;
  v14 = RtlRunOnceComplete((signed __int64 *)a1, 0, v13);
  if ( v14 < 0 )
  {
    v15[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v14, v15, 1LL);
    return (unsigned int)v14;
  }
  return 0;
}
