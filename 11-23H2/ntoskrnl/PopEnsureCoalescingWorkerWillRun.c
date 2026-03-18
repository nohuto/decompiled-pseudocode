/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14058DA00
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140700E80 (PopCheckResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x140986FE0 (PopCoalescingNotify.c)
 *     PopEnforceResiliencyScenarios @ 0x140994238 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7C30 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
