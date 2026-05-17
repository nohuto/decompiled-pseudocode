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
 *     RtlpFtQueryConfiguration @ 0x18009F9D8 (RtlpFtQueryConfiguration.c)
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
 *     RtlpHpStackTraceHeapGetContext @ 0x18011784C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180061210 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180061B7C (RtlpRunOnceWaitForInit.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x18010D62C (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rdx
  signed __int64 v12; // rcx
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
  else
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = v4 & 3;
        if ( (v4 & 3) != 0 )
          break;
        v12 = v4;
        v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
        if ( v4 == v12 )
        {
          if ( a2(a1, a3, a4) )
          {
            v13 = RtlRunOnceComplete(a1, 0LL);
            if ( v13 >= 0 )
              return 0;
            v14[0] = 1;
          }
          else
          {
            v9 = -1073741823;
            v13 = RtlRunOnceComplete(a1, 4LL);
            if ( v13 >= 0 )
              return v9;
            v14[0] = 2;
          }
          goto LABEL_17;
        }
      }
      if ( v11 != 1 )
        break;
      v4 = RtlpRunOnceWaitForInit(v4, a1);
    }
    if ( v11 != 3 )
      goto LABEL_2;
    v13 = -1073741584;
    v14[0] = 0;
LABEL_17:
    RtlReportCriticalFailure((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
}
