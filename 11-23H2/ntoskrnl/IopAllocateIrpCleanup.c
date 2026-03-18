/*
 * XREFs of IopAllocateIrpCleanup @ 0x140944144
 * Callers:
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     NtLockFile @ 0x140765490 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1407658A0 (BuildQueryDirectoryIrp.c)
 *     NtUnlockFile @ 0x1407B4AD0 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1407C9FC0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CBB90 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     NtSetVolumeInformationFile @ 0x1408818D0 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140945AC0 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14094AC60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B270 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopReleaseFileObjectLock @ 0x1402314E0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall IopAllocateIrpCleanup(volatile __int32 *Object, PVOID a2)
{
  if ( a2 )
    ObfDereferenceObject(a2);
  if ( (Object[20] & 2) != 0 )
    IopReleaseFileObjectLock(Object);
  return ObfDereferenceObject((PVOID)Object);
}
