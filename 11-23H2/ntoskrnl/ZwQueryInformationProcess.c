/*
 * XREFs of ZwQueryInformationProcess @ 0x14041B410
 * Callers:
 *     RtlCheckXfgFailureInformation @ 0x1405B1FE0 (RtlCheckXfgFailureInformation.c)
 *     DifZwQueryInformationProcessWrapper @ 0x1405F4D40 (DifZwQueryInformationProcessWrapper.c)
 *     BiLogFileOwnerProcess @ 0x1406719E0 (BiLogFileOwnerProcess.c)
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
