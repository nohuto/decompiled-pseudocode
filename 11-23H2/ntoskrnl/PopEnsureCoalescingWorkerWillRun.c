/*
 * XREFs of PopEnsureCoalescingWorkerWillRun @ 0x14058DEF0
 * Callers:
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopCoalescingNotify @ 0x1409871E0 (PopCoalescingNotify.c)
 *     PopEnforceResiliencyScenarios @ 0x140994438 (PopEnforceResiliencyScenarios.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 */

void PopEnsureCoalescingWorkerWillRun()
{
  if ( (PopCoalescingState & 8) == 0 )
  {
    PopCoalescingState |= 8u;
    ExQueueWorkItem(&PopCoalescingCallbackWorkItem, DelayedWorkQueue);
  }
}
