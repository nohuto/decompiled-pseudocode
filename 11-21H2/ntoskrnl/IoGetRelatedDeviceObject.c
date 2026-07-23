/*
 * XREFs of IoGetRelatedDeviceObject @ 0x1402AC1B0
 * Callers:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_14023F3E8 @ 0x14023F3E8 (sub_14023F3E8.c)
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     sub_1402D2E74 @ 0x1402D2E74 (sub_1402D2E74.c)
 *     NtSetInformationFile @ 0x1402F72B0 (NtSetInformationFile.c)
 *     sub_140340130 @ 0x140340130 (sub_140340130.c)
 *     sub_140342C50 @ 0x140342C50 (sub_140342C50.c)
 *     sub_1404186A0 @ 0x1404186A0 (sub_1404186A0.c)
 *     sub_140540EA0 @ 0x140540EA0 (sub_140540EA0.c)
 *     FsRtlMdlReadComplete @ 0x140541010 (FsRtlMdlReadComplete.c)
 *     sub_14068A23C @ 0x14068A23C (sub_14068A23C.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     sub_1406A443C @ 0x1406A443C (sub_1406A443C.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     sub_1406B4800 @ 0x1406B4800 (sub_1406B4800.c)
 *     NtQueryEaFile @ 0x1406B6D70 (NtQueryEaFile.c)
 *     sub_1406BF5F0 @ 0x1406BF5F0 (sub_1406BF5F0.c)
 *     sub_1406C1BD4 @ 0x1406C1BD4 (sub_1406C1BD4.c)
 *     FsRtlQueryCachedVdl @ 0x1406C2860 (FsRtlQueryCachedVdl.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406C66B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1406C6AF0 (NtReadFileScatter.c)
 *     sub_1406C78D4 @ 0x1406C78D4 (sub_1406C78D4.c)
 *     sub_1406C7B5C @ 0x1406C7B5C (sub_1406C7B5C.c)
 *     sub_1406D3ACC @ 0x1406D3ACC (sub_1406D3ACC.c)
 *     CcMdlReadComplete @ 0x1406DA170 (CcMdlReadComplete.c)
 *     NtWriteFileGather @ 0x1406E3F70 (NtWriteFileGather.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406E4AF0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1406E4B70 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1406E4C10 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1406E4C90 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1406E7450 (CcMdlWriteComplete.c)
 *     sub_1406E8D8C @ 0x1406E8D8C (sub_1406E8D8C.c)
 *     FsRtlReleaseFile @ 0x1406FE310 (FsRtlReleaseFile.c)
 *     sub_1406FE4F0 @ 0x1406FE4F0 (sub_1406FE4F0.c)
 *     FsRtlGetFileSize @ 0x1406FF640 (FsRtlGetFileSize.c)
 *     sub_14070FC40 @ 0x14070FC40 (sub_14070FC40.c)
 *     IoGetDeviceObjectPointer @ 0x140710E60 (IoGetDeviceObjectPointer.c)
 *     NtUnlockFile @ 0x14071CD90 (NtUnlockFile.c)
 *     NtLockFile @ 0x14071D220 (NtLockFile.c)
 *     NtWriteFile @ 0x14071D850 (NtWriteFile.c)
 *     sub_14071E6BC @ 0x14071E6BC (sub_14071E6BC.c)
 *     sub_14071E8F0 @ 0x14071E8F0 (sub_14071E8F0.c)
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_14072E9E0 @ 0x14072E9E0 (sub_14072E9E0.c)
 *     sub_1407308F0 @ 0x1407308F0 (sub_1407308F0.c)
 *     sub_14073A450 @ 0x14073A450 (sub_14073A450.c)
 *     sub_1407563A0 @ 0x1407563A0 (sub_1407563A0.c)
 *     NtQueryVolumeInformationFile @ 0x1407AF670 (NtQueryVolumeInformationFile.c)
 *     NtQueryInformationFile @ 0x1407AFEF0 (NtQueryInformationFile.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 *     NtSetVolumeInformationFile @ 0x1407FB3A0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14080AE60 (IoSetInformation.c)
 *     sub_14081C234 @ 0x14081C234 (sub_14081C234.c)
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14084BB98 @ 0x14084BB98 (sub_14084BB98.c)
 *     sub_140858E74 @ 0x140858E74 (sub_140858E74.c)
 *     sub_14092D730 @ 0x14092D730 (sub_14092D730.c)
 *     FsRtlMdlWriteComplete @ 0x14092DC80 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_14093449C @ 0x14093449C (sub_14093449C.c)
 *     sub_140935320 @ 0x140935320 (sub_140935320.c)
 *     sub_140935C64 @ 0x140935C64 (sub_140935C64.c)
 *     IoAttachDevice @ 0x140935E60 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x140939360 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140939960 (NtQueryQuotaInformationFile.c)
 *     sub_14093FC6C @ 0x14093FC6C (sub_14093FC6C.c)
 *     sub_1409B53D8 @ 0x1409B53D8 (sub_1409B53D8.c)
 *     sub_1409D5B38 @ 0x1409D5B38 (sub_1409D5B38.c)
 *     sub_1409D6428 @ 0x1409D6428 (sub_1409D6428.c)
 *     sub_1409D71F0 @ 0x1409D71F0 (sub_1409D71F0.c)
 *     sub_1409D8B9C @ 0x1409D8B9C (sub_1409D8B9C.c)
 *     sub_140B54AE4 @ 0x140B54AE4 (sub_140B54AE4.c)
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetRelatedDeviceObject(PFILE_OBJECT FileObject)
{
  PVPB Vpb; // rax
  PDEVICE_OBJECT result; // rax
  struct _DEVICE_OBJECT *AttachedDevice; // rdx
  _QWORD *FileObjectExtension; // r8
  PVPB v5; // rax
  PDEVICE_OBJECT *v6; // rcx

  Vpb = FileObject->Vpb;
  if ( (!Vpb || (result = Vpb->DeviceObject) == 0LL)
    && ((FileObject->Flags & 0x800) != 0
     || (v5 = FileObject->DeviceObject->Vpb) == 0LL
     || (result = v5->DeviceObject) == 0LL) )
  {
    result = FileObject->DeviceObject;
  }
  AttachedDevice = result->AttachedDevice;
  if ( AttachedDevice )
  {
    FileObjectExtension = FileObject->FileObjectExtension;
    if ( FileObjectExtension
      && FileObjectExtension != off_140C06A80
      && (v6 = (PDEVICE_OBJECT *)FileObjectExtension[2]) != 0LL
      && *v6 )
    {
      while ( result != *v6 )
      {
        result = result->AttachedDevice;
        if ( !result )
          goto LABEL_5;
      }
      return *v6;
    }
    else
    {
      do
      {
LABEL_5:
        result = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
    }
  }
  return result;
}
