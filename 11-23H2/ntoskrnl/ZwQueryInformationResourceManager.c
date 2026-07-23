/*
 * XREFs of ZwQueryInformationResourceManager @ 0x14041DBB0
 * Callers:
 *     DifZwQueryInformationResourceManagerWrapper @ 0x1405F4EA0 (DifZwQueryInformationResourceManagerWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationResourceManager(
        HANDLE ResourceManagerHandle,
        RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
        PVOID ResourceManagerInformation,
        ULONG ResourceManagerInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ResourceManagerHandle);
}
