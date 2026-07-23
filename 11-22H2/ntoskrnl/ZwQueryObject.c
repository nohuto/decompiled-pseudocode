/*
 * XREFs of ZwQueryObject @ 0x14041A8A0
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1405F5470 (DifZwQueryObjectWrapper.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1407E53E4 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x14086223C (_RegRtlQueryKeyPathName.c)
 *     EtwpObjectTypeRundown @ 0x1409EF4A0 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x140A11A28 (CmpCmdRenameHive.c)
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
