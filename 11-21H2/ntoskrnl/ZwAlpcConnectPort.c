/*
 * XREFs of ZwAlpcConnectPort @ 0x14041C680
 * Callers:
 *     sub_14061CEB0 @ 0x14061CEB0 (sub_14061CEB0.c)
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcConnectPort(
        PHANDLE PortHandle,
        PUNICODE_STRING PortName,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes,
        ULONG Flags,
        PSID RequiredServerSid,
        PPORT_MESSAGE ConnectionMessage,
        PSIZE_T BufferLength,
        PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
        PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
        PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, PortName);
}
