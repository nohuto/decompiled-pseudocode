/*
 * XREFs of ZwAcceptConnectPort @ 0x14041B130
 * Callers:
 *     SepRmLsaConnectRequest @ 0x14082BCDC (SepRmLsaConnectRequest.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAcceptConnectPort(
        PHANDLE PortHandle,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        BOOLEAN AcceptConnection,
        PPORT_VIEW ServerView,
        PREMOTE_PORT_VIEW ClientView)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
