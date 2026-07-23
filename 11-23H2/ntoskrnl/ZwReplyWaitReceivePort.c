/*
 * XREFs of ZwReplyWaitReceivePort @ 0x14041B250
 * Callers:
 *     SepRmCommandServerThread @ 0x14082BA80 (SepRmCommandServerThread.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReplyWaitReceivePort(
        HANDLE PortHandle,
        PVOID *PortContext,
        PPORT_MESSAGE ReplyMessage,
        PPORT_MESSAGE ReceiveMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
