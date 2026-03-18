/*
 * XREFs of ZwQueryInformationResourceManager @ 0x14041D820
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x1405F4930 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle, *(_QWORD *)&ResourceManagerInformationClass);
}
