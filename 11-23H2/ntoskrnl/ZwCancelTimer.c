/*
 * XREFs of ZwCancelTimer @ 0x14041B980
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x1405EDC00 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, CurrentState);
}
