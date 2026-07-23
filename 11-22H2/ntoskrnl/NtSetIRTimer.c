/*
 * XREFs of NtSetIRTimer @ 0x1403394E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140339550 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetIRTimer(HANDLE TimerHandle, PLARGE_INTEGER DueTime)
{
  return ExpSetTimer2(TimerHandle);
}
