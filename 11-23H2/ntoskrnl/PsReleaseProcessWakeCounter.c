/*
 * XREFs of PsReleaseProcessWakeCounter @ 0x140715900
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140716B7C (AlpcpAcceptConnectPort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1407193F4 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcMessageCleanupProcedure @ 0x140738970 (AlpcMessageCleanupProcedure.c)
 *     AlpcpSendMessage @ 0x140739290 (AlpcpSendMessage.c)
 *     AlpcpCancelMessage @ 0x1407793FC (AlpcpCancelMessage.c)
 *     EtwpReleaseQueueEntry @ 0x140781A00 (EtwpReleaseQueueEntry.c)
 *     PopPowerRequestDelete @ 0x1407A6980 (PopPowerRequestDelete.c)
 *     PspCloseActivityReference @ 0x1408016C0 (PspCloseActivityReference.c)
 *     PopPowerRequestSpecialRequestClear @ 0x140981B00 (PopPowerRequestSpecialRequestClear.c)
 *     PopPowerRequestSpecialRequestSet @ 0x140981BDC (PopPowerRequestSpecialRequestSet.c)
 * Callees:
 *     PspChargeProcessWakeCounter @ 0x1407385C0 (PspChargeProcessWakeCounter.c)
 */

__int64 __fastcall PsReleaseProcessWakeCounter(__int64 a1)
{
  return PspChargeProcessWakeCounter((PVOID)(a1 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
}
