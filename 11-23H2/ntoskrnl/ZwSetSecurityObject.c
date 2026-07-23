/*
 * XREFs of ZwSetSecurityObject @ 0x14041E7B0
 * Callers:
 *     BiZwSetSecurityObject @ 0x140373F80 (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14039003C (CmpApplyAdminSdOnHiveFiles.c)
 *     DifZwSetSecurityObjectWrapper @ 0x1405F7C50 (DifZwSetSecurityObjectWrapper.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140680B2C (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1408333DC (MiCreatePagingFile.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E554 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E664 (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9D78 (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A2ADB0 (CmpDoReDoSetSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
