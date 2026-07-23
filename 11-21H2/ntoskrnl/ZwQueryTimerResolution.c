/*
 * XREFs of ZwQueryTimerResolution @ 0x14041E4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryTimerResolution(PULONG MaximumTime, PULONG MinimumTime, PULONG CurrentTime)
{
  _disable();
  __readeflags();
  return sub_140433F80(MaximumTime, MinimumTime);
}
