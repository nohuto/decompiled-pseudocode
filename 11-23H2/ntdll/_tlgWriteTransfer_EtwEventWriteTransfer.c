/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007CB24
 * Callers:
 *     EtwSendNotification @ 0x180052AD0 (EtwSendNotification.c)
 *     EtwDeliverDataBlock @ 0x18005E7E0 (EtwDeliverDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18007CBC0 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007ED74 (LdrpLogRelativePathWithAlteredSearchError.c)
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
 *     RtlpHpTlLogGCScheduled @ 0x180119BF4 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x180119C50 (RtlpHpTlLogGCTimerFinished.c)
 *     RtlpHpTlLogMemStats @ 0x180119CAC (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x180119D88 (RtlpHpTlLogVAChange.c)
 *     RtlpXfgTlLogFailure @ 0x180121D6C (RtlpXfgTlLogFailure.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180030320 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v7) = *a2 << 24;
  DWORD1(v7) = *(unsigned __int16 *)(a2 + 1);
  *((_QWORD *)&v7 + 1) = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &v7, 0LL, 0LL, a5, a6);
}
