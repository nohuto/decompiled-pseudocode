/*
 * XREFs of TpSetTimer @ 0x18001C9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl TpSetTimer(PTP_TIMER Timer, PLARGE_INTEGER DueTime, ULONG Period, ULONG WindowLength)
{
  TpSetTimerEx(Timer, DueTime, Period, WindowLength);
}
