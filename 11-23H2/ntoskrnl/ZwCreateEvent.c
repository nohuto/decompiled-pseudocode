/*
 * XREFs of ZwCreateEvent @ 0x14041B660
 * Callers:
 *     CmSiCreateEvent @ 0x1402088C4 (CmSiCreateEvent.c)
 *     DifZwCreateEventWrapper @ 0x1405EE4C0 (DifZwCreateEventWrapper.c)
 *     CmpCreateEvent @ 0x1406898C8 (CmpCreateEvent.c)
 *     NtCopyFileChunk @ 0x140749890 (NtCopyFileChunk.c)
 *     IoCreateNotificationEvent @ 0x1407E90F0 (IoCreateNotificationEvent.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140810608 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     PiDrvDbCreateNode @ 0x140811CDC (PiDrvDbCreateNode.c)
 *     MiCreateMemoryEvent @ 0x14081BEC4 (MiCreateMemoryEvent.c)
 *     SepInitializationPhase1 @ 0x140822A40 (SepInitializationPhase1.c)
 *     PfpCreateEvent @ 0x140846CB4 (PfpCreateEvent.c)
 *     DbgkpCreateNotificationEvent @ 0x14085B3BC (DbgkpCreateNotificationEvent.c)
 *     SmCreateEvent @ 0x1408618B8 (SmCreateEvent.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408623E4 (ExpGetSystemWriteConstraintInformation.c)
 *     IoCreateSynchronizationEvent @ 0x140864790 (IoCreateSynchronizationEvent.c)
 *     PspShutdownCsrProcess @ 0x1409AD2A8 (PspShutdownCsrProcess.c)
 *     CMFFlushHitsFile @ 0x140A0217C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140A02AC0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateEvent(
        PHANDLE EventHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        EVENT_TYPE EventType,
        BOOLEAN InitialState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EventHandle, *(_QWORD *)&DesiredAccess);
}
