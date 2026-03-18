/*
 * XREFs of ZwSetTimer @ 0x14041B9A0
 * Callers:
 *     DifZwSetTimerWrapper @ 0x1405F7A60 (DifZwSetTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetTimer(
        HANDLE TimerHandle,
        PLARGE_INTEGER DueTime,
        PTIMER_APC_ROUTINE TimerApcRoutine,
        PVOID TimerContext,
        BOOLEAN ResumeTimer,
        LONG Period,
        PBOOLEAN PreviousState)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle, DueTime);
}
