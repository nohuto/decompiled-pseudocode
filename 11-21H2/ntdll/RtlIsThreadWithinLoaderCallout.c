/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180089800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_180174370 == NtCurrentTeb()->ClientId.UniqueThread;
}
