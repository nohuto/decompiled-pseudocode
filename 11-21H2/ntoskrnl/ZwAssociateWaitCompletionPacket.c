/*
 * XREFs of ZwAssociateWaitCompletionPacket @ 0x14041C960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAssociateWaitCompletionPacket(
        HANDLE WaitCompletionPacketHandle,
        HANDLE IoCompletionHandle,
        HANDLE TargetObjectHandle,
        PVOID KeyContext,
        PVOID ApcContext,
        NTSTATUS IoStatus,
        ULONG_PTR IoStatusInformation,
        PBOOLEAN AlreadySignaled)
{
  _disable();
  __readeflags();
  return sub_140433F80(WaitCompletionPacketHandle, IoCompletionHandle);
}
