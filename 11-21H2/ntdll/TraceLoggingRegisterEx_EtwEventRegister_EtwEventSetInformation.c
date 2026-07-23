/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180084878 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlpCapChkTelemetryRunOnce @ 0x18008C800 (RtlpCapChkTelemetryRunOnce.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x1800DC600 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LibLoaderTelemetryInitOnce @ 0x1800DC630 (LibLoaderTelemetryInitOnce.c)
 *     VsmEnclaveTelemetryInitOnce @ 0x1800DC710 (VsmEnclaveTelemetryInitOnce.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     EtwEventSetInformation @ 0x1800155D0 (EtwEventSetInformation.c)
 *     EtwEventRegister @ 0x180015AA0 (EtwEventRegister.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(char *CallbackContext)
{
  ULONGLONG *v1; // rsi
  bool v2; // zf
  NTSTATUS v4; // eax
  unsigned __int32 v5; // ebx
  GUID ProviderId; // [rsp+20h] [rbp-28h] BYREF

  v1 = (ULONGLONG *)(CallbackContext + 32);
  v2 = *((_QWORD *)CallbackContext + 4) == 0LL;
  ProviderId = *(GUID *)(*((_QWORD *)CallbackContext + 1) - 16LL);
  if ( !v2 )
    __fastfail(5u);
  *((_QWORD *)CallbackContext + 5) = 0LL;
  *((_QWORD *)CallbackContext + 6) = 0LL;
  v4 = EtwEventRegister(&ProviderId, tlgEnableCallback, CallbackContext, v1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      *v1,
      (EVENT_INFO_CLASS)2,
      *((PVOID *)CallbackContext + 1),
      **((unsigned __int16 **)CallbackContext + 1));
  }
  return v5;
}
