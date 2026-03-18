/*
 * XREFs of IoGetDeviceAttachmentBaseRef @ 0x140302AF0
 * Callers:
 *     FsRtlReleaseFile @ 0x140723910 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B20 (FsRtlAcquireFileExclusiveCommon.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B44C8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4768 (FsRtlReleaseFileForCcFlush.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1407C3AE0 (IoWMIDeviceObjectToInstanceName.c)
 *     PipSetDevNodeStateFlags @ 0x140959A18 (PipSetDevNodeStateFlags.c)
 *     PipRecordOpenHandleVeto @ 0x140971C14 (PipRecordOpenHandleVeto.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140983294 (PopRegisterCoolingExtensionProtection.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302A88 (IoGetDeviceAttachmentBaseRefWithTag.c)
 */

PDEVICE_OBJECT __stdcall IoGetDeviceAttachmentBaseRef(PDEVICE_OBJECT DeviceObject)
{
  return (PDEVICE_OBJECT)IoGetDeviceAttachmentBaseRefWithTag((__int64)DeviceObject, 0x746C6644u);
}
