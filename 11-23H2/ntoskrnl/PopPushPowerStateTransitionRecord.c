/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140AA607C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D430 (PopUmpoSendPowerMessage.c)
 *     PopManageTransitionRecordRequest @ 0x140984698 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989EA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B9A0 (PopInitSystemSleeperThread.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F5F4 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2, LARGE_INTEGER a3)
{
  return PoPushPowerStateTransitionRecordWithCallback(a1, a2, a3, 0LL);
}
