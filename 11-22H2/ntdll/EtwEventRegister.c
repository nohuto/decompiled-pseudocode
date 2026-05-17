/*
 * XREFs of EtwEventRegister @ 0x180031B90
 * Callers:
 *     SbSelectProcedure @ 0x18002F390 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F55C (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007BFAC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007F61C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180080E04 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6874 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D68FC (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DBDF0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwNotificationRegister @ 0x1800327E0 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v4;
}
