/*
 * XREFs of ZwCancelTimer @ 0x14041BD10
 * Callers:
 *     DifZwCancelTimerWrapper @ 0x1405EE170 (DifZwCancelTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
