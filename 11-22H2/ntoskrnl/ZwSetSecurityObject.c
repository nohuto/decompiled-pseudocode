/*
 * XREFs of ZwSetSecurityObject @ 0x14041DD60
 * Callers:
 *     BiZwSetSecurityObject @ 0x140374434 (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14038E2DC (CmpApplyAdminSdOnHiveFiles.c)
 *     DifZwSetSecurityObjectWrapper @ 0x1405F7770 (DifZwSetSecurityObjectWrapper.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140680B2C (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x140834C2C (MiCreatePagingFile.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E7E4 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9C28 (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A2ABB0 (CmpDoReDoSetSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A708 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140B94EE0 (IopApplySystemPartitionProt.c)
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
