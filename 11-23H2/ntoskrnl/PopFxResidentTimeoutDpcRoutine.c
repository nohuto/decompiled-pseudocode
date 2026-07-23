/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140368080
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B540 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14034C694 (PopFxArmResidentTimer.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF) )
    PopFxArmResidentTimer(1);
}
