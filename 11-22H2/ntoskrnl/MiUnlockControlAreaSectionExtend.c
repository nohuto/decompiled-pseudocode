/*
 * XREFs of MiUnlockControlAreaSectionExtend @ 0x140292F50
 * Callers:
 *     MmExtendSection @ 0x1407065B4 (MmExtendSection.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiBuildWakeList @ 0x1402893C4 (MiBuildWakeList.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KeSignalGate @ 0x14035CCEC (KeSignalGate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockControlAreaSectionExtend(ULONG_PTR a1, __int64 a2)
{
  int v2; // r14d
  unsigned __int64 v5; // rsi
  __int64 *v6; // rax
  volatile LONG *v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 result; // rax
  __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10

  v2 = *(_DWORD *)(a2 + 8);
  KeAbPostRelease(a1);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v6 = MiBuildWakeList(a1, *(_DWORD *)(a2 + 8));
  v7 = (volatile LONG *)(a1 + 72);
  v8 = v6;
  ExReleaseSpinLockExclusiveFromDpcLevel(v7);
  result = (unsigned int)KiIrqlFlags;
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = -1LL << ((unsigned __int8)v5 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)v9;
      v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      v10 = (unsigned int)result & SchedulerAssist[5];
      SchedulerAssist[5] = v10;
      if ( v15 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
  if ( v8 )
  {
    do
    {
      v13 = (__int64 *)*v8;
      if ( v8 != (__int64 *)a2 )
        result = KeSignalGate(v8 + 2, 1LL);
      v8 = v13;
    }
    while ( v13 );
  }
  CurrentThread = KeGetCurrentThread();
  if ( v2 != 16 )
    return (__int64)KeLeaveCriticalRegionThread((__int64)CurrentThread);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 )
  {
    result = (__int64)&CurrentThread->152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery(CurrentThread, v9, v10, SchedulerAssist);
  }
  return result;
}
