/*
 * XREFs of MiSetZeroPageThreadPriority @ 0x140353BEC
 * Callers:
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiZeroPageMakeHot @ 0x140655C7C (MiZeroPageMakeHot.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetActualBasePriorityThread @ 0x1402B9630 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetZeroPageThreadPriority(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL) + 48LL) + 16LL)
     + 25408LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 88) + 168LL) + 56LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 23160));
  if ( (*(_DWORD *)(a1 + 136) & 8) != 0 )
    v7 = 32;
  else
    v7 = KeSetActualBasePriorityThread((ULONG_PTR)CurrentThread, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 23160));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v13 = (v12 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
  return v7;
}
