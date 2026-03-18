/*
 * XREFs of IoGetRelatedDeviceObject @ 0x14022F510
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140250F80 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x1402A6810 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     FsRtlReleaseFileForModWrite @ 0x1402F4A7C (FsRtlReleaseFileForModWrite.c)
 *     CcZeroData @ 0x1402FB700 (CcZeroData.c)
 *     PnpGetRelatedTargetDevice @ 0x140322698 (PnpGetRelatedTargetDevice.c)
 *     FsRtlAcquireFileForModWriteEx @ 0x14034A0A4 (FsRtlAcquireFileForModWriteEx.c)
 *     CcSetValidData @ 0x140354E24 (CcSetValidData.c)
 *     IoAsynchronousPageWrite @ 0x140369A0C (IoAsynchronousPageWrite.c)
 *     FsRtlGetFileExtents @ 0x14053C888 (FsRtlGetFileExtents.c)
 *     FsRtlMdlReadComplete @ 0x14053CA00 (FsRtlMdlReadComplete.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1406AA1A0 (FsRtlGetFileSize.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     FsRtlReleaseFile @ 0x140723910 (FsRtlReleaseFile.c)
 *     FsRtlAcquireFileExclusiveCommon @ 0x140723B20 (FsRtlAcquireFileExclusiveCommon.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CD50 (IopParseDevice.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730490 (IopDeleteFile.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     CmpFileFlushAndPurge @ 0x140750BC4 (CmpFileFlushAndPurge.c)
 *     IopGetFileInformation @ 0x14075AE5C (IopGetFileInformation.c)
 *     IoGetDeviceObjectPointer @ 0x14075B260 (IoGetDeviceObjectPointer.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     FsRtlKernelFsControlFile @ 0x1407728C0 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1407735B0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlAcquireFileForCcFlushEx @ 0x1407B44C8 (FsRtlAcquireFileForCcFlushEx.c)
 *     FsRtlReleaseFileForCcFlush @ 0x1407B4768 (FsRtlReleaseFileForCcFlush.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     IopParseFile @ 0x1407BBC40 (IopParseFile.c)
 *     WmipGetFilePDO @ 0x1407C398C (WmipGetFilePDO.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x1407D2FE4 (IopOpenLinkOrRenameTarget.c)
 *     IopGetBasicInformationFile @ 0x1407D326C (IopGetBasicInformationFile.c)
 *     FsRtlSetKernelEaFile @ 0x1407D5960 (FsRtlSetKernelEaFile.c)
 *     FsRtlQueryCachedVdl @ 0x1407D8C70 (FsRtlQueryCachedVdl.c)
 *     CcMdlReadComplete @ 0x1407DFAC0 (CcMdlReadComplete.c)
 *     IopGetSetObjectId @ 0x1407E4CBC (IopGetSetObjectId.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1407E9410 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlPrepareMdlWrite @ 0x1407E9490 (FsRtlPrepareMdlWrite.c)
 *     FsRtlMdlReadEx @ 0x1407E9530 (FsRtlMdlReadEx.c)
 *     FsRtlMdlRead @ 0x1407E95B0 (FsRtlMdlRead.c)
 *     CcMdlWriteComplete @ 0x1407E9DD0 (CcMdlWriteComplete.c)
 *     FsRtlSetFileSize @ 0x1407EA694 (FsRtlSetFileSize.c)
 *     MiCreatePagingFile @ 0x1408330DC (MiCreatePagingFile.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140833F78 (FsRtlIssueFileNotificationFsctl.c)
 *     PopGetPolicyDeviceObject @ 0x14084CEC0 (PopGetPolicyDeviceObject.c)
 *     PiPagePathSetState @ 0x140853C48 (PiPagePathSetState.c)
 *     IopCopyOffloadCapable @ 0x140875A48 (IopCopyOffloadCapable.c)
 *     NtSetVolumeInformationFile @ 0x1408818D0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14093CFE8 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlMdlWriteComplete @ 0x14093D540 (FsRtlMdlWriteComplete.c)
 *     FsRtlQueryInformationFile @ 0x14093ED20 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140944C3C (IopGetVolumeId.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetRemoteLink @ 0x1409463F4 (IopSetRemoteLink.c)
 *     IoAttachDevice @ 0x140946C00 (IoAttachDevice.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x14095192C (IopFreeBandwidthContract.c)
 *     RawSetInformation @ 0x1409B8778 (RawSetInformation.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D8CFC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendUsageNotification @ 0x1409D95F4 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileOpenVolume @ 0x1409DA3C8 (SmKmStoreFileOpenVolume.c)
 *     SmpUtilsGetControlDevice @ 0x1409DBD8C (SmpUtilsGetControlDevice.c)
 *     VhdiMountVhdFile @ 0x140A7321C (VhdiMountVhdFile.c)
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
      && FileObjectExtension != IopRevocationExtension
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
