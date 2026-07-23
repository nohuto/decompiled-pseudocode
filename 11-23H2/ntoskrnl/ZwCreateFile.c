/*
 * XREFs of ZwCreateFile @ 0x14041BB90
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1402F8088 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403A7FA4 (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x1405EEB80 (DifZwCreateFileWrapper.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     PspIoRateEntryActivate @ 0x1407D893C (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x1407F6F14 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14084D1C0 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeContextStart @ 0x14084ED00 (CmpVolumeContextStart.c)
 *     FsRtlpOpenDev @ 0x140851810 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1408543E0 (CmpVolumeManagerGetContextForFilePath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x140862624 (ExpGetSystemWriteConstraintInformation.c)
 *     IopBootLogToFile @ 0x1409443B4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14095589C (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA5C8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409DBF8C (SmpUtilsGetControlDevice.c)
 *     CmpInitBackupHive @ 0x140A1AF84 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CFB4 (CmpOpenFileWithExtremePrejudice.c)
 *     SdbpGetFileTimestamp @ 0x140A4EBE4 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x140A734CC (VhdiMountVhdFile.c)
 *     PopFlushVolumeWorker @ 0x140AA6120 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140AB3BD0 (KdpCreateFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
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
