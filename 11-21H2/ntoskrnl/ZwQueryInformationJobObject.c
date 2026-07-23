/*
 * XREFs of ZwQueryInformationJobObject @ 0x14041E180
 * Callers:
 *     sub_140624920 @ 0x140624920 (sub_140624920.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, *(_QWORD *)&JobObjectInformationClass);
}
