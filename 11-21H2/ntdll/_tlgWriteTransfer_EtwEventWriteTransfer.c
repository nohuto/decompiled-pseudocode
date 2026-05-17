/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180004EA0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     RtlpLogCapabilityCheckLatency @ 0x180014B1C (RtlpLogCapabilityCheckLatency.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180084878 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1800DBA74 (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800DBB80 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800DBE7C (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x1800DBFF8 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x1800DC144 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x1800DC248 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800DC328 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1800DC408 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCScheduled @ 0x180118348 (RtlpHpTlLogGCScheduled.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x1801183A4 (RtlpHpTlLogGCTimerFinished.c)
 *     RtlpHpTlLogMemStats @ 0x180118400 (RtlpHpTlLogMemStats.c)
 *     RtlpHpTlLogVAChange @ 0x1801184DC (RtlpHpTlLogVAChange.c)
 *     RtlpXfgTlLogFailure @ 0x18011EFDC (RtlpXfgTlLogFailure.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x180004F40 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = a2 + 11;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *(unsigned __int16 *)(a2 + 11);
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), (unsigned int)v7, 0, 0, a5, a6);
}
