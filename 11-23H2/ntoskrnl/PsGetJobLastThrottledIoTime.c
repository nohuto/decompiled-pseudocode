/*
 * XREFs of PsGetJobLastThrottledIoTime @ 0x1405A4670
 * Callers:
 *     MiNoPagesLastChance @ 0x140651444 (MiNoPagesLastChance.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7E90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1403148B0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PsGetJobLastThrottledIoTime(__int64 a1)
{
  volatile LONG *v1; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // edx
  bool v10; // zf

  v1 = (volatile LONG *)(a1 + 1672);
  v3 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1672));
  v4 = *(_QWORD *)(a1 + 1720);
  v5 = v3;
  ExReleaseSpinLockSharedFromDpcLevel(v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v5 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v5);
  return v4;
}
