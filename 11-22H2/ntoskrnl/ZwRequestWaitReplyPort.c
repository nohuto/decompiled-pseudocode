/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14041AAE0
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031C948 (SepRmDispatchDataToLsa.c)
 *     DifZwRequestWaitReplyPortWrapper @ 0x1405F6300 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
