/*
 * XREFs of ZwCreateDebugObject @ 0x14041BBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateDebugObject(
        PHANDLE DebugObjectHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
