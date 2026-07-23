/*
 * XREFs of ZwSetInformationJobObject @ 0x14041EBA0
 * Callers:
 *     sub_1406272D0 @ 0x1406272D0 (sub_1406272D0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  _disable();
  __readeflags();
  return sub_140433F80(JobHandle, *(_QWORD *)&JobObjectInformationClass);
}
