/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402AFB30
 * Callers:
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x14072FA00 (CmpCreateKeyBody.c)
 *     PiUEventHandleRegistration @ 0x14077F88C (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FEF0 (EtwpEnableGuid.c)
 *     SeAuditHandleCreation @ 0x1407DCB58 (SeAuditHandleCreation.c)
 *     PiDqIrpQueryCreate @ 0x1407F9418 (PiDqIrpQueryCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967C00 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x1409897B0 (PoShutdownBugCheck.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E7760 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409ECAEC (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
