/*
 * XREFs of ZwRequestWaitReplyPort @ 0x14041B530
 * Callers:
 *     SepRmDispatchDataToLsa @ 0x14031CDB8 (SepRmDispatchDataToLsa.c)
 *     DifZwRequestWaitReplyPortWrapper @ 0x1405F67E0 (DifZwRequestWaitReplyPortWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRequestWaitReplyPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage, PPORT_MESSAGE ReplyMessage)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
