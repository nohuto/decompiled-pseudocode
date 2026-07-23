/*
 * XREFs of ExInitializeDeviceAts @ 0x14060C7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpPrepareNewAtsDevice @ 0x14060CCA8 (ExpPrepareNewAtsDevice.c)
 *     IoQueryInterface @ 0x140828A80 (IoQueryInterface.c)
 */

__int64 __fastcall ExInitializeDeviceAts(ULONG_PTR BugCheckParameter1, int a2)
{
  char v4; // r15
  int Interface; // r14d
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int128 v20; // [rsp+40h] [rbp-59h] BYREF
  __int128 v21; // [rsp+50h] [rbp-49h]
  __int128 v22; // [rsp+60h] [rbp-39h]
  _QWORD v23[16]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v24; // [rsp+100h] [rbp+67h]
  __int64 *v25; // [rsp+110h] [rbp+77h] BYREF

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v23, 0, 0x50uLL);
  v25 = 0LL;
  v4 = 0;
  if ( !BugCheckParameter1 )
    return 3221225485LL;
  Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_IOMMU_BUS_INTERFACE, 80, 1, BugCheckParameter1, v23);
  if ( Interface >= 0 )
  {
    Interface = IoQueryInterface(BugCheckParameter1, 0, (int)&GUID_PCI_ATS_INTERFACE, 48, 1, BugCheckParameter1, &v20);
    if ( Interface < 0 )
    {
LABEL_29:
      ((void (__fastcall *)(_QWORD))v23[3])(v23[1]);
      if ( v4 )
        (*((void (__fastcall **)(_QWORD))&v21 + 1))(*((_QWORD *)&v20 + 1));
      return (unsigned int)Interface;
    }
    v4 = 1;
    CurrentThread = KeGetCurrentThread();
    v9 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v7, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v11, AbEntrySummary);
      v24 = v11;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v11);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v14 = *SchedulerAssist;
        do
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
        }
        while ( v15 != v14 );
        if ( (v14 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v9 = (__int64)(&CurrentThread[1].Process + 12 * v24);
      if ( (unsigned __int64)&ExpAtsSvmDeviceListLock - qword_140C659E8 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      *(_DWORD *)(v9 + 8) = SessionId;
      *(_QWORD *)v9 = (unsigned __int64)&ExpAtsSvmDeviceListLock & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpAtsSvmDeviceListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpAtsSvmDeviceListLock, v9, (__int64)&ExpAtsSvmDeviceListLock);
    if ( v9 )
      *(_BYTE *)(v9 + 18) = 1;
    v18 = (__int64 *)ExpAtsSvmDevices;
    if ( (__int64 *)ExpAtsSvmDevices != &ExpAtsSvmDevices )
    {
      do
      {
        v19 = v18;
        v25 = v18;
        if ( v18[3] == BugCheckParameter1 )
          break;
        v18 = (__int64 *)*v18;
      }
      while ( v18 != &ExpAtsSvmDevices );
      if ( v19[3] == BugCheckParameter1 )
      {
        if ( v19 )
        {
          if ( *((_DWORD *)v19 + 9) )
            KeBugCheckEx(0x1E9u, BugCheckParameter1, 0LL, 0LL, 0LL);
          ++*((_DWORD *)v19 + 8);
          goto LABEL_26;
        }
      }
      else
      {
        v25 = 0LL;
      }
    }
    Interface = ExpPrepareNewAtsDevice(BugCheckParameter1, a2, (unsigned int)v23, (unsigned int)&v20, (__int64)&v25);
LABEL_26:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpAtsSvmDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpAtsSvmDeviceListLock);
    KeAbPostRelease((ULONG_PTR)&ExpAtsSvmDeviceListLock);
    goto LABEL_29;
  }
  return (unsigned int)Interface;
}
