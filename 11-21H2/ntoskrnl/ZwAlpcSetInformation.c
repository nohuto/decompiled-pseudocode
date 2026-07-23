/*
 * XREFs of ZwAlpcSetInformation @ 0x14041C900
 * Callers:
 *     sub_14061D9D0 @ 0x14061D9D0 (sub_14061D9D0.c)
 *     sub_140B2984C @ 0x140B2984C (sub_140B2984C.c)
 *     sub_140B2B9FC @ 0x140B2B9FC (sub_140B2B9FC.c)
 *     sub_140B2CD08 @ 0x140B2CD08 (sub_140B2CD08.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcSetInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&PortInformationClass);
}
