/*
 * XREFs of ZwCreateJobObject @ 0x14041CD80
 * Callers:
 *     sub_14061E850 @ 0x14061E850 (sub_14061E850.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, *(_QWORD *)&DesiredAccess);
}
