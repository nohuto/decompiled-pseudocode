/*
 * XREFs of ZwCreateThreadStateChange @ 0x14041C9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateThreadStateChange(
        PHANDLE ThreadStateChangeHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ThreadHandle,
        ULONG64 Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadStateChangeHandle);
}
