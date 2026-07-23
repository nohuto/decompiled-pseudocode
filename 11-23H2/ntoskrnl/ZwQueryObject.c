/*
 * XREFs of ZwQueryObject @ 0x14041B2F0
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1405F5950 (DifZwQueryObjectWrapper.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1407E5134 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x1408623AC (_RegRtlQueryKeyPathName.c)
 *     EtwpObjectTypeRundown @ 0x1409EF680 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x140A11C28 (CmpCmdRenameHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
