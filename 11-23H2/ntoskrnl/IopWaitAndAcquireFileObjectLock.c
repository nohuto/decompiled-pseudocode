/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x140765200
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
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
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140233C40 (ObfReferenceObject.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFD0 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD4F0 (KeAbPostReleaseEx.c)
 *     IopWaitForLockAlertable @ 0x1402FCCD4 (IopWaitForLockAlertable.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 */

__int64 __fastcall IopWaitAndAcquireFileObjectLock(
        volatile signed __int32 *Object,
        char a2,
        char a3,
        __int64 a4,
        _BYTE *a5)
{
  NTSTATUS v9; // ebp
  _QWORD v11[5]; // [rsp+30h] [rbp-28h] BYREF
  int Priority; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement(Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange(Object + 29, 1) )
    {
      if ( a4 )
        *(_BYTE *)(a4 + 18) = 1;
      ObfReferenceObject((PVOID)Object);
      _InterlockedDecrement(Object + 28);
      return 0;
    }
    if ( a4 )
      KeAbPreWait((__int64 *)a4);
    v9 = IopWaitForLockAlertable((PVOID)(Object + 32), a2, a3);
    if ( a4 )
      a4 = KeAbPreAcquire((__int64)(Object + 32), a4);
  }
  while ( v9 >= 0 );
  _InterlockedDecrement(Object + 28);
  if ( !*((_DWORD *)Object + 29) && *((_DWORD *)Object + 28) )
  {
    Priority = KeGetCurrentThread()->Priority;
    KeSetEventBoostPriorityEx((__int64)(Object + 32), v11, &Priority, (__int64)(Object + 32), 0, 1);
  }
  if ( a4 )
    KeAbPostReleaseEx((ULONG_PTR)(Object + 32), a4);
  *a5 = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
