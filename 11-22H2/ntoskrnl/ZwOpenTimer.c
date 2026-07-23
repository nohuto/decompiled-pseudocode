/*
 * XREFs of ZwOpenTimer @ 0x14041CDA0
 * Callers:
 *     DifZwOpenTimerWrapper @ 0x1405F2C20 (DifZwOpenTimerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TimerHandle);
}
