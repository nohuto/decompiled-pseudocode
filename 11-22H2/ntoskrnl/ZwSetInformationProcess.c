/*
 * XREFs of ZwSetInformationProcess @ 0x14041AA20
 * Callers:
 *     DifZwSetInformationProcessWrapper @ 0x1405F73B0 (DifZwSetInformationProcessWrapper.c)
 *     RtlCreateUserStack @ 0x14077458C (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1407DEA00 (RtlpWow64CreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x14080D05C (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
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
