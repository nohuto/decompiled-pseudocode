/*
 * XREFs of IvtFreeDomain @ 0x14052C790
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     HalpAcquireHighLevelLock @ 0x14037D1C8 (HalpAcquireHighLevelLock.c)
 *     ExtEnvCriticalFailure @ 0x14051F598 (ExtEnvCriticalFailure.c)
 *     ExtEnvDestroySpinLock @ 0x14051F5B8 (ExtEnvDestroySpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IvtFreeDomain(ULONG_PTR a1, ULONG_PTR a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v4; // rbp
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v2 = (volatile signed __int64 *)(a2 + 88);
  v4 = (_QWORD *)(a2 + 72);
  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  if ( *(_QWORD *)(a2 + 56) != a2 + 56 )
    ExtEnvCriticalFailure(v6, 0LL, a1, a2, 0LL);
  v7 = *(unsigned __int8 *)(a2 + 96);
  KxReleaseSpinLock(v2);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return ExtEnvDestroySpinLock(v4);
}
