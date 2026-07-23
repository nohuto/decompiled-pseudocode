/*
 * XREFs of MmResourcesAvailable @ 0x1402AEEA0
 * Callers:
 *     ExAllocatePool3 @ 0x140AAF430 (ExAllocatePool3.c)
 *     ExpAllocatePoolWithTagPriority @ 0x140AAFCF4 (ExpAllocatePoolWithTagPriority.c)
 * Callees:
 *     KePulseEvent @ 0x1402206C0 (KePulseEvent.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeExcessSegments @ 0x140624A8C (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x14063AD8C (MiIssuePageExtendRequest.c)
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
    v5 = qword_140C69A38 - qword_140C69A28;
  else
    v5 = MiState[0] - qword_140C65588;
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
      v10 = qword_140C6F508 - qword_140C6F9A8;
      if ( qword_140C6F9A8 > (unsigned __int64)qword_140C6F508 )
        v10 = 0LL;
      if ( (a2 >> 12) + ((a2 & 0xFFF) != 0) > v10 )
      {
        MiIssuePageExtendRequest(&MiSystemPartition, (a2 >> 12) + ((a2 & 0xFFF) != 0), 2LL);
        goto LABEL_15;
      }
    }
    v8 = a2 + 10485760;
    if ( a2 + 10485760 < v6 || qword_140C6F790 < 0x40000 )
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
      if ( (unsigned __int64)&qword_140C69A18 - qword_140C65AE8 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v3 + 8) = SessionId;
      *(_QWORD *)v3 = (unsigned __int64)&qword_140C69A18 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69A18, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C69A18, v3, &qword_140C69A18);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    if ( !qword_140C6B610->Header.SignalState )
      KePulseEvent(qword_140C6B610, 0, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69A18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C69A18);
    KeAbPostRelease((ULONG_PTR)&qword_140C69A18);
    v27 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v27 )
    {
      v22 = (unsigned __int64)&CurrentThread->152;
      if ( *(_QWORD *)v22 != v22 )
        KiCheckForKernelApcDelivery(v22, v20, v21, v28);
    }
    goto LABEL_50;
  }
  KeAcquireInStackQueuedSpinLock(&qword_140C6F300, &LockHandle);
  if ( !qword_140C6B620->Header.SignalState )
    KePulseEvent(qword_140C6B620, 0, 0);
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
