/*
 * XREFs of RtlIsThreadWithinLoaderCallout @ 0x180086340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool RtlIsThreadWithinLoaderCallout()
{
  return (void *)qword_180181370 == NtCurrentTeb()->ClientId.UniqueThread;
}
