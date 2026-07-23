/*
 * XREFs of IopProcessIoTracking @ 0x14045FF88
 * Callers:
 *     IopPerfCompleteRequest @ 0x14045FD5E (IopPerfCompleteRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExfTryAcquirePushLockSharedEx @ 0x14032FD6C (ExfTryAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rdi
  ULONG_PTR v5; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  int SessionId; // eax
  $C71981A45BEB2B45F82C232A7085991E *v13; // rax
  __int64 i; // rbx
  struct _KTHREAD *v15; // rcx
  unsigned int v18; // [rsp+20h] [rbp-58h]
  __int16 v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+32h] [rbp-46h]
  __int16 v21; // [rsp+36h] [rbp-42h]
  __int64 v22; // [rsp+38h] [rbp-40h]
  int v23; // [rsp+40h] [rbp-38h]

  v22 = a1;
  v20 = 0;
  v2 = 0;
  v21 = 0;
  v23 = a2;
  v19 = 24;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  v4 = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  AbEntrySummary = v4->AbEntrySummary;
  if ( v4->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v4)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v18 = v7;
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v5 = (ULONG_PTR)(&v4[1].Process + 12 * v18);
    if ( (unsigned __int64)&IopPerfIoTrackingLock - qword_140C659E8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = (unsigned __int64)&IopPerfIoTrackingLock & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (LOBYTE(v13) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&IopPerfIoTrackingLock, 0), (_BYTE)v13) )
  {
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(__int16 *))(i + 16))(&v19);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    LOBYTE(v13) = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    LOBYTE(v13) = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v5);
  }
  if ( v2 == 1 )
  {
    v15 = KeGetCurrentThread();
    if ( v15->SpecialApcDisable++ == -1 )
    {
      v13 = &v15->152;
      if ( ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != v13 )
        LOBYTE(v13) = KiCheckForKernelApcDelivery();
    }
  }
  return (char)v13;
}
