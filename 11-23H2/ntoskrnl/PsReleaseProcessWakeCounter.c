/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140715700
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14071697C (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407191F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcMessageCleanupProcedure @ 0x140738780 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x1407390A0 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x14077920C (AlpcpCancelMessage.c)
 *     EtwpReleaseQueueEntry @ 0x140781810 (EtwpReleaseQueueEntry.c)
 *     PopPowerRequestDelete @ 0x1407A6790 (PopPowerRequestDelete.c)
 *     PspCloseActivityReference @ 0x1408013F0 (PspCloseActivityReference.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140981900 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x1409819DC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407383D0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
