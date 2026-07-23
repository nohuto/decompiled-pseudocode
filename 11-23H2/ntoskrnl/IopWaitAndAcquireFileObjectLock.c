/*
 * XREFs of IopWaitAndAcquireFileObjectLock @ 0x1407653F0
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     NtSetInformationFile @ 0x1402A6E80 (NtSetInformationFile.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725270 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C3B0 (IopReadFile.c)
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
 *     NtSetEaFile @ 0x14094AE60 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14094B470 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BC260 (KeSetEventBoostPriorityEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     IopWaitForLockAlertable @ 0x1402FCF64 (IopWaitForLockAlertable.c)
 *     KeAbPreWait @ 0x1402FD500 (KeAbPreWait.c)
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
