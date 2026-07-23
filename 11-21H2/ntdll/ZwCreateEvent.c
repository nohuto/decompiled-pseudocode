/*
 * XREFs of ZwCreateEvent @ 0x1800A4970
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     RtlWaitForWnfMetaNotification @ 0x1800596D0 (RtlWaitForWnfMetaNotification.c)
 *     LdrpInitializeInternal @ 0x18007B218 (LdrpInitializeInternal.c)
 *     _LdrpInitialize @ 0x18007B2BC (_LdrpInitialize.c)
 *     RtlpWnfRegisterTpNotification @ 0x180083A54 (RtlpWnfRegisterTpNotification.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180084B20 (EtwpRegisterTpNotificationOnce.c)
 *     LdrpCreateLoaderEvents @ 0x1800851E0 (LdrpCreateLoaderEvents.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     LdrpCheckComponentOnDemandEtwEvent @ 0x1800DAD8C (LdrpCheckComponentOnDemandEtwEvent.c)
 *     RtlCreateProcessReflection @ 0x1800E2080 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800E2610 (RtlpProcessReflectionStartup.c)
 *     WerpCreateCompletionEvent @ 0x1800E8E30 (WerpCreateCompletionEvent.c)
 *     RtlpCtContextInit @ 0x18010EE94 (RtlpCtContextInit.c)
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
