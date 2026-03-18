/*
 * XREFs of PopEsWorkItemSchedule @ 0x140870D10
 * Callers:
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1408654E0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsQueueStateEvaluation @ 0x140870CF0 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1409985F0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140B51EFC (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
