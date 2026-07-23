/*
 * XREFs of PsIoRateControlOverQuotaNotify @ 0x140369058
 * Callers:
 *     IoNotifyQuotaState @ 0x140368F90 (IoNotifyQuotaState.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PsIoRateControlOverQuotaNotify(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 UnbiasedInterruptTime; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  if ( a5 )
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  else
    UnbiasedInterruptTime = 0LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1672));
  if ( a4 != *(_DWORD *)(a1 + 1716) )
  {
    v11 = *(_QWORD *)(a1 + 1696);
    ++*(_DWORD *)(a1 + 1704);
    *(_QWORD *)(a1 + 1696) = 2 * v11;
  }
  *(_DWORD *)(a1 + 1712) = a3;
  *(_QWORD *)(a1 + 1696) |= a2 != 0;
  if ( a5 )
    *(_QWORD *)(a1 + 1720) = UnbiasedInterruptTime;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1672));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v10 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
      v16 = (v15 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v15;
      if ( v16 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v10);
}
