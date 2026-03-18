/*
 * XREFs of ZwQueryObject @ 0x14041AF60
 * Callers:
 *     DifZwQueryObjectWrapper @ 0x1405F53E0 (DifZwQueryObjectWrapper.c)
 *     CmpNameFromAttributes @ 0x140691F04 (CmpNameFromAttributes.c)
 *     CmpAddToHiveFileList @ 0x1407E4E64 (CmpAddToHiveFileList.c)
 *     _RegRtlQueryKeyPathName @ 0x14086216C (_RegRtlQueryKeyPathName.c)
 *     EtwpObjectTypeRundown @ 0x1409EF3F0 (EtwpObjectTypeRundown.c)
 *     CmpCmdRenameHive @ 0x140A11978 (CmpCmdRenameHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&ObjectInformationClass);
}
