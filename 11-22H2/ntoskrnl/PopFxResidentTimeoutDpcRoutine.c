/*
 * XREFs of PopFxResidentTimeoutDpcRoutine @ 0x140367890
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItemEx @ 0x14030B180 (ExQueueWorkItemEx.c)
 *     PopFxArmResidentTimer @ 0x14034BEF4 (PopFxArmResidentTimer.c)
 */

void PopFxResidentTimeoutDpcRoutine()
{
  if ( !(unsigned __int8)ExQueueWorkItemEx(&PopFxResidentWorkItem, 1u, 0xFFFFFFFF) )
    PopFxArmResidentTimer(1);
}
