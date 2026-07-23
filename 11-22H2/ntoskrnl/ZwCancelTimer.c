/*
 * XREFs of ZwCancelTimer @ 0x14041B2C0
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x1405EDC90 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
