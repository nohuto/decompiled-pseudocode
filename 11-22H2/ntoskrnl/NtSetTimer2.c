/*
 * XREFs of NtSetTimer2 @ 0x140339520
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x140339550 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtSetTimer2(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PLARGE_INTEGER Period,
        PT2_SET_PARAMETERS Parameters)
{
  if ( DueTime )
    return ExpSetTimer2(TimerHandle);
  else
    return -1073741584;
}
