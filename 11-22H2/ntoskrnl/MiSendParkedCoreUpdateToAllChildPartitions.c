/*
 * XREFs of MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655380
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIterateOverPartitions @ 0x14062947C (MiIterateOverPartitions.c)
 */

void __fastcall MiSendParkedCoreUpdateToAllChildPartitions(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _KTHREAD *v2; // rdi
  __int64 v3; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  int SessionId; // eax
  bool v12; // zf
  unsigned __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  unsigned int v22; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  while ( 1 )
  {
    --CurrentThread->SpecialApcDisable;
    v2 = KeGetCurrentThread();
    v3 = 0LL;
    _disable();
    AbEntrySummary = v2->AbEntrySummary;
    if ( v2->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v2)) != 0 )
    {
      _BitScanForward(&v5, AbEntrySummary);
      v22 = v5;
      v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v8 = *SchedulerAssist;
        do
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange(SchedulerAssist, v8 & 0xFFDFFFFF, v8);
        }
        while ( v9 != v8 );
        if ( (v8 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v3 = (__int64)(&v2[1].Process + 12 * v22);
      if ( (unsigned __int64)&qword_140C67488 - qword_140C65AE8 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
      *(_DWORD *)(v3 + 8) = SessionId;
      *(_QWORD *)v3 = (unsigned __int64)&qword_140C67488 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C67488, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C67488, v3, (__int64)&qword_140C67488);
    if ( v3 )
      *(_BYTE *)(v3 + 18) = 1;
    MiIterateOverPartitions((void (__fastcall *)(__int64, __int64))MiMoveBackgroundZeroThreads, 0LL);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C67488, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C67488);
    KeAbPostRelease((ULONG_PTR)&qword_140C67488);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v13 = ExAcquireSpinLockExclusive(&dword_140C66CC0);
    if ( stru_140C66DD0.Parameter == (void *)1 )
      break;
    stru_140C66DD0.Parameter = (void *)1;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66CC0);
    a1 = (unsigned int)KiIrqlFlags;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v13 <= 0xFu
        && CurrentIrql >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        a1 = (unsigned int)(v13 + 1);
        v16 = v15->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v12 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(v13);
  }
  stru_140C66DD0.Parameter = 0LL;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C66CC0);
  if ( (_DWORD)KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v21 = v19->SchedulerAssist;
      v12 = (v20 & v21[5]) == 0;
      v21[5] &= v20;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
  }
  __writecr8(v13);
}
