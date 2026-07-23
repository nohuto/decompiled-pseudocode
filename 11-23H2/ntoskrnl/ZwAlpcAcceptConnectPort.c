/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14041BFD0
 * Callers:
 *     DifZwAlpcAcceptConnectPortWrapper @ 0x1405ED290 (DifZwAlpcAcceptConnectPortWrapper.c)
 *     PopUmpoProcessMessage @ 0x1407A6C68 (PopUmpoProcessMessage.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084C87C (SshpAlpcProcessAlpcMessage.c)
 *     PopMonitorProcessLoop @ 0x140860528 (PopMonitorProcessLoop.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcAcceptConnectPort(
        PHANDLE PortHandle,
        HANDLE ConnectionPortHandle,
        ULONG Flags,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        PVOID PortContext,
        PPORT_MESSAGE ConnectionRequest,
        PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
        BOOLEAN AcceptConnection)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
