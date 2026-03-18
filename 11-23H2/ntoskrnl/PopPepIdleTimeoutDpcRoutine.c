/*
 * XREFs of PopPepIdleTimeoutDpcRoutine @ 0x1403696C0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B2B0 (ExQueueWorkItemEx.c)
 *     PopPepArmIdleTimer @ 0x1403554F4 (PopPepArmIdleTimer.c)
 */

void PopPepIdleTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopPepIdleWorkItem, 1u, 0xFFFFFFFF) )
    PopPepArmIdleTimer(1);
}
