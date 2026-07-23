/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140AA62CC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D004 (PopUmpoSendPowerMessage.c)
 *     PopManageTransitionRecordRequest @ 0x140984548 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989D54 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B850 (PopInitSystemSleeperThread.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F194 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2, LARGE_INTEGER a3)
{
  return PoPushPowerStateTransitionRecordWithCallback(a1, a2, a3, 0LL);
}
