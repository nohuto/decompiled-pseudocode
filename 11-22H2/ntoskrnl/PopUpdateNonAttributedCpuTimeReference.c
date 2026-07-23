/*
 * XREFs of PopUpdateNonAttributedCpuTimeReference @ 0x140599978
 * Callers:
 *     PpmUpdateIdleVeto @ 0x1405864C0 (PpmUpdateIdleVeto.c)
 *     PopFxPlatformStateAvailable @ 0x14058B3EC (PopFxPlatformStateAvailable.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140599910 (PopAccumulateNonActivatedCpuTime.c)
 */

void __fastcall PopUpdateNonAttributedCpuTimeReference(char a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140CF7E48);
  if ( a1 )
  {
    if ( ++dword_140CF7E44 == 1 )
    {
      v2 = 0LL;
LABEL_6:
      PopAccumulateNonActivatedCpuTime(v2, &qword_140CF7D38, &qword_140CF7D40);
    }
  }
  else if ( !--dword_140CF7E44 )
  {
    LOBYTE(v2) = 1;
    goto LABEL_6;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140CF7E48);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v8 = (v7 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
}
