/*
 * XREFs of ZwAlpcCreatePort @ 0x14041B600
 * Callers:
 *     DifZwAlpcCreatePortWrapper @ 0x1405ED270 (DifZwAlpcCreatePortWrapper.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B70C0C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B72254 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreatePort(
        PHANDLE PortHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PALPC_PORT_ATTRIBUTES PortAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
