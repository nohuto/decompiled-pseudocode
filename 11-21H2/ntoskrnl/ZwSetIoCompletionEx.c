/*
 * XREFs of ZwSetIoCompletionEx @ 0x14041ED00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetIoCompletionEx(
        HANDLE IoCompletionHandle,
        HANDLE IoCompletionPacketHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation)
{
  _disable();
  __readeflags();
  return sub_140433F80(IoCompletionHandle, IoCompletionPacketHandle);
}
