/*
 * XREFs of ZwCreateEvent @ 0x14041B9F0
 * Callers:
 *     CmSiCreateEvent @ 0x1402088C4 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1405EEA30 (DifZwCreateEventWrapper.c)
 *     CmpCreateEvent @ 0x1406898C8 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140749A80 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x1407E93C0 (IoCreateNotificationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1408108D8 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x140811FAC (PiDrvDbCreateNode.c)
 *     MiCreateMemoryEvent @ 0x14081C194 (MiCreateMemoryEvent.c)
 *     SepInitializationPhase1 @ 0x140822D40 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x140846FB4 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B5FC (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x140861AF8 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862624 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x1408649D0 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409AD4A8 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140A0240C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02D50 (CMFSystemThreadRoutine.c)
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
