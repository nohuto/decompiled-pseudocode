/*
 * XREFs of ZwAlpcSetInformation @ 0x14041B840
 * Callers:
 *     DifZwAlpcSetInformationWrapper @ 0x1405EDA30 (DifZwAlpcSetInformationWrapper.c)
 *     SshpAlpcInitialize @ 0x140B680A4 (SshpAlpcInitialize.c)
 *     PopUmpoInitializeChannel @ 0x140B70C0C (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140B72254 (PopUmpoInitializeMonitorChannel.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
