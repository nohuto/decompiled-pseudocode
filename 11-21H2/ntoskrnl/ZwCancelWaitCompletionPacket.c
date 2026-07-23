/*
 * XREFs of ZwCancelWaitCompletionPacket @ 0x14041CA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwCancelWaitCompletionPacket(HANDLE WaitCompletionPacketHandle, BOOLEAN RemoveSignaledPacket)
{
  _disable();
  __readeflags();
  return sub_140433F80(WaitCompletionPacketHandle, RemoveSignaledPacket);
}
