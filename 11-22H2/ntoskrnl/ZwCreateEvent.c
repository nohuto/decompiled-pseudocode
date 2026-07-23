/*
 * XREFs of ZwCreateEvent @ 0x14041AFA0
 * Callers:
 *     CmSiCreateEvent @ 0x1402088C4 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1405EE550 (DifZwCreateEventWrapper.c)
 *     CmpCreateEvent @ 0x1406898C8 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140749DA0 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x1407E9670 (IoCreateNotificationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140812B88 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x14081425C (PiDrvDbCreateNode.c)
 *     MiCreateMemoryEvent @ 0x14081E444 (MiCreateMemoryEvent.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x140848A44 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x140858FD0 (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140861988 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862544 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140864BB0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140A0222C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02B70 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle);
}
