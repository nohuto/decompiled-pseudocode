/*
 * XREFs of ZwQueryInformationProcess @ 0x14041BA80
 * Callers:
 *     sub_1405EE7E0 @ 0x1405EE7E0 (sub_1405EE7E0.c)
 *     sub_140624A80 @ 0x140624A80 (sub_140624A80.c)
 *     sub_14064CD50 @ 0x14064CD50 (sub_14064CD50.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, *(_QWORD *)&ProcessInformationClass);
}
