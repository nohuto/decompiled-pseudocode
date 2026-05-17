/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18007C4B4
 * Callers:
 *     EtwSendNotification @ 0x180052C30 (EtwSendNotification.c)
 *     EtwDeliverDataBlock @ 0x180061670 (EtwDeliverDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpLogCapabilityCheckLatency @ 0x18007C550 (RtlpLogCapabilityCheckLatency.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007E704 (LdrpLogRelativePathWithAlteredSearchError.c)
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
 *     RtlpHpTlLogGCScheduled @ 0x180118744 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x1801187A0 (RtlpHpTlLogGCTimerFinished.c)
 *     RtlpHpTlLogMemStats @ 0x1801187FC (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x1801188D8 (RtlpHpTlLogVAChange.c)
 *     RtlpXfgTlLogFailure @ 0x1801208BC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x1800304F0 (EtwEventWriteTransfer.c)
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
