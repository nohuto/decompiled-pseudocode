/*
 * XREFs of ZwCreateJobObject @ 0x14041C730
 * Callers:
 *     DifZwCreateJobObjectWrapper @ 0x1405EED30 (DifZwCreateJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
