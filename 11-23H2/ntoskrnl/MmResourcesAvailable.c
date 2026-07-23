/*
 * XREFs of MmResourcesAvailable @ 0x1402AF160
 * Callers:
 *     ExAllocatePool3 @ 0x140AAE430 (ExAllocatePool3.c)
 *     ExpAllocatePoolWithTagPriority @ 0x140AAECF4 (ExpAllocatePoolWithTagPriority.c)
 * Callees:
 *     KePulseEvent @ 0x1402206A0 (KePulseEvent.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x1402A19B0 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032FCF8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeExcessSegments @ 0x140624F6C (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x14063B26C (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MmResourcesAvailable(char a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v4; // r10d
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // r14
  struct _KTHREAD *v12; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v14; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  int SessionId; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 v22; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v25; // r10
  _DWORD *v26; // r9
  bool v27; // zf
  __int64 v28; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v30; // [rsp+60h] [rbp+8h]

  v3 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a1 & 1;
  if ( (a1 & 1) != 0 )
    v5 = qword_140C69938 - qword_140C69928;
  else
    v5 = MiState[0] - qword_140C65488;
  v6 = v5 << 12;
  v7 = 0;
  if ( a3 == 16 )
    v8 = a2 + 0x80000;
  else
    v8 = a2 + 0x200000;
  if ( v8 <= v6 )
  {
    if ( v4 )
    {
      v10 = qword_140C6F448 - qword_140C6F8E8;
      if ( qword_140C6F8E8 > (unsigned __int64)qword_140C6F448 )
        v10 = 0LL;
      if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
      {
        MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL);
        goto LABEL_15;
      }
    }
    v8 = a2 + 10485760;
    if ( a2 + 10485760 < v6 || qword_140C6F6D0 < 0x40000 )
      return 1LL;
    v7 = 1;
  }
  if ( v4 )
  {
LABEL_15:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v12->AbEntrySummary;
    if ( v12->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v8, v12)) != 0 )
    {
      _BitScanForward(&v14, AbEntrySummary);
      v30 = v14;
      v12->AbEntrySummary = AbEntrySummary & ~(1 << v14);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v17 = *SchedulerAssist;
        do
        {
          v18 = v17;
          v17 = _InterlockedCompareExchange(SchedulerAssist, v17 & 0xFFDFFFFF, v17);
        }
        while ( v18 != v17 );
        if ( (v17 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
      v3 = (__int64)(&v12[1].Process + 12 * v30);
      if ( (unsigned __int64)&qword_140C69918 - qword_140C659E8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v3 + 8) = SessionId;
      *(_QWORD *)v3 = (unsigned __int64)&qword_140C69918 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69918, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C69918, v3, &qword_140C69918);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    if ( !qword_140C6B550->Header.SignalState )
      KePulseEvent(qword_140C6B550, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69918, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C69918);
    KeAbPostRelease((ULONG_PTR)&qword_140C69918);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v27 )
    {
      v22 = (unsigned __int64)&CurrentThread->152;
      if ( *(_QWORD *)v22 != v22 )
        KiCheckForKernelApcDelivery(v22, v20, v21, v28);
    }
    goto LABEL_50;
  }
  KeAcquireInStackQueuedSpinLock(&qword_140C6F240, &LockHandle);
  if ( !qword_140C6B560->Header.SignalState )
    KePulseEvent(qword_140C6B560, 0, 0);
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v22 = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && CurrentIrql >= 2u )
    {
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      v22 = (unsigned int)LockHandle.OldIrql + 1;
      v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v27 = ((unsigned int)v20 & v26[5]) == 0;
      v21 = (unsigned int)v20 & v26[5];
      v26[5] = v21;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v25);
    }
  }
  __writecr8(OldIrql);
LABEL_50:
  MiFreeExcessSegments(v22, v20, v21);
  return v7;
}
