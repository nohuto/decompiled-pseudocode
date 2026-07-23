/*
 * XREFs of ZwCreateIoCompletion @ 0x14041BCA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(IoCompletionHandle);
}
