/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14041BBA0
 * Callers:
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 *     sub_140626560 @ 0x140626560 (sub_140626560.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, RequestMessage);
}
