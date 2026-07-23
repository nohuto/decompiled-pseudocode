/*
 * XREFs of IoQueueThreadIrp @ 0x1403C7960
 * Callers:
 *     PiPagePathSetState @ 0x140853F48 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14096F204 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022EE70 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
