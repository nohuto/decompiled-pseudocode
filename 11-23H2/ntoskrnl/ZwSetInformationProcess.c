/*
 * XREFs of ZwSetInformationProcess @ 0x14041B470
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1405F7890 (DifZwSetInformationProcessWrapper.c)
 *     RtlCreateUserStack @ 0x14077426C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1407DE750 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x14080ADAC (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140B68C34 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
