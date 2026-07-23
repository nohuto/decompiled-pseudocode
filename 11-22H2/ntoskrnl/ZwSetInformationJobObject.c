/*
 * XREFs of ZwSetInformationJobObject @ 0x14041DB60
 * Callers:
 *     DifZwSetInformationJobObjectWrapper @ 0x1405F6FF0 (DifZwSetInformationJobObjectWrapper.c)
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
