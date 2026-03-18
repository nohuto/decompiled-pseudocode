/*
 * XREFs of IopAllocateIrpExReturn @ 0x14022EF90
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224240 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14022E280 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x140250E60 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402510F0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x1403693BC (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1403715A0 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x140554A80 (IopAllocateBackpocketIrp.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E5590 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x1407250E0 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CDC0 (IopParseDevice.c)
 *     IopReadFile @ 0x14074C6D0 (IopReadFile.c)
 *     IopGetFileInformation @ 0x14075B36C (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14075D79C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x1407659A0 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765DB0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B5080 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA550 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E75F0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E8870 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881DA0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1408836C0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945B70 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x140947760 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14094AD10 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B320 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022EFC0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x14028FCA0 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC1CE0 (IovAllocateIrp.c)
 */

__int64 __fastcall IopAllocateIrpExReturn(__int64 a1, __int64 a2, __int64 a3)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !IopDispatchAllocateIrp )
    return IopAllocateIrpPrivate(a1, a2, a3);
  if ( IopDispatchAllocateIrp == 2 || ViVerifyAllDrivers != 1 )
    return IopAllocateIrpWithExtension(a1, a2, a3);
  return IovAllocateIrp(a1, a2, a3, retaddr);
}
