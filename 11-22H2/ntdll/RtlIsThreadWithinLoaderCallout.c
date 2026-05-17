/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180085B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_18017E298 == NtCurrentTeb()->ClientId.UniqueThread;
}
