/*
 * XREFs of PopPushPowerStateTransitionRecord @ 0x140AA620C
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x14032D1A0 (PopUmpoSendPowerMessage.c)
 *     PopManageTransitionRecordRequest @ 0x140984498 (PopManageTransitionRecordRequest.c)
 *     PopIssueActionRequest @ 0x140989CA4 (PopIssueActionRequest.c)
 *     PopInitSystemSleeperThread @ 0x14098B7A0 (PopInitSystemSleeperThread.c)
 * Callees:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058F104 (PoPushPowerStateTransitionRecordWithCallback.c)
 */

__int64 __fastcall PopPushPowerStateTransitionRecord(void *a1, void *a2, __int64 a3)
{
  return PoPushPowerStateTransitionRecordWithCallback(a1, a2, a3, 0LL);
}
