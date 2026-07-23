/*
 * XREFs of ZwOpenTimer @ 0x14041D7F0
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x1405F3100 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
