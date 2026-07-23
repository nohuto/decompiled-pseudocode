/*
 * XREFs of ZwCreateTimer @ 0x14041D060
 * Callers:
 *     sub_14061F0D0 @ 0x14061F0D0 (sub_14061F0D0.c)
 *     sub_14092BEF8 @ 0x14092BEF8 (sub_14092BEF8.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwCreateTimer(
        PHANDLE TimerHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        TIMER_TYPE TimerType)
{
  _disable();
  __readeflags();
  return sub_140433F80(TimerHandle, *(_QWORD *)&DesiredAccess);
}
