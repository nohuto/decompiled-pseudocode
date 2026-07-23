/*
 * XREFs of ZwOpenJobObject @ 0x14041DC20
 * Callers:
 *     sub_140621BA0 @ 0x140621BA0 (sub_140621BA0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, *(_QWORD *)&DesiredAccess);
}
