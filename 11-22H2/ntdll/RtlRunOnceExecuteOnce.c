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
