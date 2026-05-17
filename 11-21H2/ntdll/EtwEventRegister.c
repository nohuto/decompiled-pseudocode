/*
 * XREFs of EtwEventRegister @ 0x180015AA0
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x180002FFC (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     SbSelectProcedure @ 0x18004E920 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180053E9C (LdrpLogDeprecatedDllEtwEvent.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1800853EC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     SbObtainTraceHandle @ 0x180086590 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6810 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D6898 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB8D0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180016730 (EtwNotificationRegister.c)
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
