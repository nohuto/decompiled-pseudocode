/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x1405CFC70
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x1407EED48 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x1408083DC (PopEnforceResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x14098F180 (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
