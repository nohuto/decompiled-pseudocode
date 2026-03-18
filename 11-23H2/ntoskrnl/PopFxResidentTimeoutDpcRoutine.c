/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140367EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B2B0 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14034C4F4 (PopFxArmResidentTimer.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF) )
    PopFxArmResidentTimer(1);
}
