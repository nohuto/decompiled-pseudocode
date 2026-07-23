/*
 * XREFs of NtSetIRTimer @ 0x140339910
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140339980 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
