/*
 * XREFs of IoQueueThreadIrp @ 0x1403C7780
 * Callers:
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     PipSendGuestAssignedNotification @ 0x14096F004 (PipSendGuestAssignedNotification.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 */

void __stdcall IoQueueThreadIrp(PIRP Irp)
{
  IopQueueThreadIrp((__int64)Irp);
}
