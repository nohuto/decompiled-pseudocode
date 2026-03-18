/*
 * XREFs of PsGetCurrentThreadProcessId @ 0x1402AF8A0
 * Callers:
 *     ObpCreateHandle @ 0x1406E4510 (ObpCreateHandle.c)
 *     NtTraceControl @ 0x140725BD0 (NtTraceControl.c)
 *     CmpCreateKeyBody @ 0x14072F810 (CmpCreateKeyBody.c)
 *     PiUEventHandleRegistration @ 0x14077F69C (PiUEventHandleRegistration.c)
 *     EtwpNotifyGuid @ 0x14077F9E8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x14077FD00 (EtwpEnableGuid.c)
 *     SeAuditHandleCreation @ 0x1407DC888 (SeAuditHandleCreation.c)
 *     PiDqIrpQueryCreate @ 0x1407F9148 (PiDqIrpQueryCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14081904C (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140967A00 (PiSwQueuedCreateInfoCreate.c)
 *     PoShutdownBugCheck @ 0x1409895B0 (PoShutdownBugCheck.c)
 *     EtwpNotifyDisallowedGuidChange @ 0x1409E74D0 (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC85C (EtwpRegisterPrivateSession.c)
 * Callees:
 *     <none>
 */

unsigned __int64 PsGetCurrentThreadProcessId()
{
  return KeGetCurrentThread()[1].CycleTime;
}
