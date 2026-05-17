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

__int64 __fastcall TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(__int64 *a1)
{
  __int64 *v1; // rsi
  bool v2; // zf
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 4;
  v2 = a1[4] == 0;
  v7 = *(_OWORD *)(a1[1] - 16);
  if ( !v2 )
    __fastfail(5u);
  a1[5] = 0LL;
  a1[6] = 0LL;
  v4 = EtwEventRegister((int)&v7, (__int64)tlgEnableCallback, (__int64)a1, (__int64)v1);
  v5 = v4;
  if ( v4 )
  {
    if ( v4 > 0 )
      return (unsigned __int16)v4 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(*v1, 2, a1[1], *(unsigned __int16 *)a1[1]);
  }
  return v5;
}
