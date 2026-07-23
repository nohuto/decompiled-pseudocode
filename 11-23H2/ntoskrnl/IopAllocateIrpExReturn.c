/*
 * XREFs of IopAllocateIrpExReturn @ 0x14022F080
 * Callers:
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14022E370 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x140251040 (IoSynchronousPageWriteEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1402512D0 (IopBuildDeviceIoControlRequest.c)
 *     IoPageReadEx @ 0x1402A6AA0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     IoAsynchronousPageWrite @ 0x140369BAC (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140371D90 (IopBuildAsynchronousFsdRequest.c)
 *     IopAllocateBackpocketIrp @ 0x1405550A0 (IopAllocateBackpocketIrp.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x14072CF50 (IopParseDevice.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
 *     IopGetFileInformation @ 0x14075B04C (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14075D47C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140765680 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x140765A90 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B4DB0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407CA290 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBE60 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7340 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E85C0 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x140881B10 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x140883430 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945CC0 (IopSetEaOrQuotaInformationFile.c)
 *     IoVerifyVolume @ 0x1409478B0 (IoVerifyVolume.c)
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopAllocateIrpPrivate @ 0x14022F0B0 (IopAllocateIrpPrivate.c)
 *     IopAllocateIrpWithExtension @ 0x140290050 (IopAllocateIrpWithExtension.c)
 *     IovAllocateIrp @ 0x140AC0CD0 (IovAllocateIrp.c)
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
