/*
 * XREFs of EtwEventRegister @ 0x180031A30
 * Callers:
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x18002F38C (SbObtainTraceHandle.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18007C61C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x18007FC8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D61D4 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D625C (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB7A0 (LdrpLogFatalUserCallbackException.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     EtwNotificationRegister @ 0x180032680 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 */

NTSTATUS __cdecl EtwEventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  LONG v4; // ebx

  if ( !EnableCallback && CallbackContext )
    return 87;
  v4 = EtwNotificationRegister(ProviderId, 3u, (PETW_NOTIFICATION_CALLBACK)EnableCallback, CallbackContext, RegHandle);
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v4;
}
