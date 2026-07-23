/*
 * XREFs of ZwSetInformationJobObject @ 0x14041E5B0
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x1405F74D0 (DifZwSetInformationJobObjectWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
