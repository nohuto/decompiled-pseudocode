/*
 * XREFs of ZwQueryInformationProcess @ 0x14041A9C0
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405B1B00 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x1405F4860 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x140671500 (BiLogFileOwnerProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
