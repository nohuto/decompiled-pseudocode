/*
 * XREFs of ZwSetSecurityObject @ 0x14041E420
 * Callers:
 *     BiZwSetSecurityObject @ 0x140373DE0 (BiZwSetSecurityObject.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x14038FE5C (CmpApplyAdminSdOnHiveFiles.c)
 *     DifZwSetSecurityObjectWrapper @ 0x1405F76E0 (DifZwSetSecurityObjectWrapper.c)
 *     CmpDoReDoSetEntireSecurityDescriptor @ 0x140680B2C (CmpDoReDoSetEntireSecurityDescriptor.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     PiDevCfgCopyDeviceKeys @ 0x14087E314 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E424 (PiDevCfgCopyDeviceKey.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D9B78 (SmKmStoreFileCreateForIoType.c)
 *     CmpDoReDoSetSecurityDescriptor @ 0x140A2AB00 (CmpDoReDoSetSecurityDescriptor.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A698 (_RegRtlCopyTreeInternal.c)
 *     IopApplySystemPartitionProt @ 0x140B93EE0 (IopApplySystemPartitionProt.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetSecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
