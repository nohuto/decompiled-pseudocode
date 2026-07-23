/*
 * XREFs of ZwCreateFile @ 0x14041B140
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1402F7DF8 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403A7634 (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x1405EE6A0 (DifZwCreateFileWrapper.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     PspIoRateEntryActivate @ 0x1407D8BEC (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x1407F72B4 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14084E120 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeContextStart @ 0x14084F880 (CmpVolumeContextStart.c)
 *     FsRtlpOpenDev @ 0x140852420 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x140854FF0 (CmpVolumeManagerGetContextForFilePath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862544 (ExpGetSystemWriteConstraintInformation.c)
 *     IopBootLogToFile @ 0x140944264 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14095574C (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA478 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409DBE3C (SmpUtilsGetControlDevice.c)
 *     CmpInitBackupHive @ 0x140A1AD84 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CDB4 (CmpOpenFileWithExtremePrejudice.c)
 *     SdbpGetFileTimestamp @ 0x140A4E9A4 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x140A7328C (VhdiMountVhdFile.c)
 *     PopFlushVolumeWorker @ 0x140AA6370 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140AB4BC0 (KdpCreateFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B38EBC (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B39350 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140B54E68 (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6CFB4 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG CreateDisposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
