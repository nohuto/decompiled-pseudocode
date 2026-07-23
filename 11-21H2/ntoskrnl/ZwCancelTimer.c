/*
 * XREFs of ZwCancelTimer @ 0x14041C380
 * Callers:
 *     sub_14061DC40 @ 0x14061DC40 (sub_14061DC40.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCancelTimer(HANDLE TimerHandle, PBOOLEAN CurrentState)
{
  _disable();
  __readeflags();
  return sub_140433F80(TimerHandle, CurrentState);
}
