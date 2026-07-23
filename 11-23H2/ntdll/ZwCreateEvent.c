/*
 * XREFs of ZwCreateEvent @ 0x1800A17B0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B7A0 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800502A4 (RtlpWnfRegisterTpNotification.c)
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 *     LdrpCreateLoaderEvents @ 0x18005C97C (LdrpCreateLoaderEvents.c)
 *     RtlWaitForWnfMetaNotification @ 0x180060B50 (RtlWaitForWnfMetaNotification.c)
 *     LdrpInitializeInternal @ 0x180074538 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x1800745DC (_LdrpInitialize.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAB20 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E2010 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E25B0 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800E8FF0 (WerpCreateCompletionEvent.c)
 *     RtlpCtContextInit @ 0x180110544 (RtlpCtContextInit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  NTSTATUS result; // eax

  result = 72;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
