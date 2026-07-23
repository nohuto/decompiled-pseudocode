/*
 * XREFs of ZwCreateIoCompletion @ 0x14041CD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCreateIoCompletion(
        PHANDLE IoCompletionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG Count)
{
  _disable();
  __readeflags();
  return sub_140433F80(IoCompletionHandle, *(_QWORD *)&DesiredAccess);
}
