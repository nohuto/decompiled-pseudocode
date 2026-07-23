/*
 * XREFs of ZwOpenJobObject @ 0x14041CBA0
 * Callers:
 *     DifZwOpenJobObjectWrapper @ 0x1405F1AA0 (DifZwOpenJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
