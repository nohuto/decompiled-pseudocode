/*
 * XREFs of ZwReplyWaitReceivePort @ 0x14041A800
 * Callers:
 *     SepRmCommandServerThread @ 0x14082D2D0 (SepRmCommandServerThread.c)
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
