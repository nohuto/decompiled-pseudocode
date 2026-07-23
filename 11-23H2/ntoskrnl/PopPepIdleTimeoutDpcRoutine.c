/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x140369860
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B540 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x140355694 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
