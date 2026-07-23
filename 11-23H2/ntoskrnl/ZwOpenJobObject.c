/*
 * XREFs of ZwOpenJobObject @ 0x14041D5F0
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1405F1F80 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
