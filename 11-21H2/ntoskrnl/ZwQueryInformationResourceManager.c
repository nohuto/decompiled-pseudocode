/*
 * XREFs of ZwQueryInformationResourceManager @ 0x14041E1C0
 * Callers:
 *     sub_140624BE0 @ 0x140624BE0 (sub_140624BE0.c)
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
  return sub_140433F80(ResourceManagerHandle, *(_QWORD *)&ResourceManagerInformationClass);
}
