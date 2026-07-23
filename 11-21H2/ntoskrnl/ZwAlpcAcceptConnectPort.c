/*
 * XREFs of ZwAlpcAcceptConnectPort @ 0x14041C640
 * Callers:
 *     sub_14061CD10 @ 0x14061CD10 (sub_14061CD10.c)
 *     sub_1407EFC00 @ 0x1407EFC00 (sub_1407EFC00.c)
 *     sub_14081AFCC @ 0x14081AFCC (sub_14081AFCC.c)
 *     sub_1408600E4 @ 0x1408600E4 (sub_1408600E4.c)
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
  return sub_140433F80(PortHandle, ConnectionPortHandle);
}
