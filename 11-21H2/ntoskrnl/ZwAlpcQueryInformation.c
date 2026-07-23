/*
 * XREFs of ZwAlpcQueryInformation @ 0x14041C880
 * Callers:
 *     sub_14061D6E0 @ 0x14061D6E0 (sub_14061D6E0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&PortInformationClass);
}
