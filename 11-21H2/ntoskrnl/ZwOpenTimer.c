/*
 * XREFs of ZwOpenTimer @ 0x14041DE20
 * Callers:
 *     sub_140622D90 @ 0x140622D90 (sub_140622D90.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwOpenTimer(PHANDLE TimerHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(TimerHandle, *(_QWORD *)&DesiredAccess);
}
