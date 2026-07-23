/*
 * XREFs of ZwCreateEvent @ 0x18009F6F0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x18004B900 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180050404 (RtlpWnfRegisterTpNotification.c)
 *     RtlWaitForWnfMetaNotification @ 0x18005B380 (RtlWaitForWnfMetaNotification.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 *     LdrpCreateLoaderEvents @ 0x18005F808 (LdrpCreateLoaderEvents.c)
 *     LdrpInitializeInternal @ 0x180073EC8 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x180073F6C (_LdrpInitialize.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180082DF0 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DB170 (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E0CE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E1280 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800E7CC0 (WerpCreateCompletionEvent.c)
 *     RtlpCtContextInit @ 0x18010F0C4 (RtlpCtContextInit.c)
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
