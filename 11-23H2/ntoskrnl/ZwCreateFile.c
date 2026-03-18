/*
 * XREFs of ZwCreateFile @ 0x14041B800
 * Callers:
 *     RtlFileMapInitializeByNtPath @ 0x1402F7DF8 (RtlFileMapInitializeByNtPath.c)
 *     LdrpMapResourceFile @ 0x1403A7DC4 (LdrpMapResourceFile.c)
 *     DifZwCreateFileWrapper @ 0x1405EE610 (DifZwCreateFileWrapper.c)
 *     CmpOpenHiveFile @ 0x14068BA80 (CmpOpenHiveFile.c)
 *     PspIoRateEntryActivate @ 0x1407D866C (PspIoRateEntryActivate.c)
 *     EtwpCreateDirectoryFile @ 0x1407F6C44 (EtwpCreateDirectoryFile.c)
 *     PopGetPolicyDeviceObject @ 0x14084CEC0 (PopGetPolicyDeviceObject.c)
 *     CmpVolumeContextStart @ 0x14084EA00 (CmpVolumeContextStart.c)
 *     FsRtlpOpenDev @ 0x140851510 (FsRtlpOpenDev.c)
 *     CmpVolumeManagerGetContextForFilePath @ 0x1408540E0 (CmpVolumeManagerGetContextForFilePath.c)
 *     ExpGetSystemWriteConstraintInformation @ 0x1408623E4 (ExpGetSystemWriteConstraintInformation.c)
 *     IopBootLogToFile @ 0x1409441B4 (IopBootLogToFile.c)
 *     PiCreateDirectoryPath @ 0x14095569C (PiCreateDirectoryPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA3C8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409DBD8C (SmpUtilsGetControlDevice.c)
 *     CmpInitBackupHive @ 0x140A1ACD4 (CmpInitBackupHive.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1CD04 (CmpOpenFileWithExtremePrejudice.c)
 *     SdbpGetFileTimestamp @ 0x140A4E934 (SdbpGetFileTimestamp.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
 *     PopFlushVolumeWorker @ 0x140AA62B0 (PopFlushVolumeWorker.c)
 *     KdpCreateFileCallback @ 0x140AB3BD0 (KdpCreateFileCallback.c)
 *     BapdpProcessBCDCache @ 0x140B4F584 (BapdpProcessBCDCache.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140B4FA18 (BapdpProcessVsmKeyBlobs.c)
 *     EmInitSystem @ 0x140B55508 (EmInitSystem.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x140B6BEC8 (PiCreateDriverDataDirectoryRoot.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(FileHandle, *(_QWORD *)&DesiredAccess);
}
