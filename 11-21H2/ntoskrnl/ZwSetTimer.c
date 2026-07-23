/*
 * XREFs of ZwSetTimer @ 0x14041C3A0
 * Callers:
 *     sub_140627E00 @ 0x140627E00 (sub_140627E00.c)
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
  return sub_140433F80(TimerHandle, DueTime);
}
