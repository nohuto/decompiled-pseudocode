/*
 * XREFs of PopEsWorkItemSchedule @ 0x140870840
 * Callers:
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1408650C0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140870820 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140998540 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140B51F88 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
