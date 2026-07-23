/*
 * XREFs of MiProtectPageListLocks @ 0x140397E90
 * Callers:
 *     MiInitializePartition @ 0x1408375A0 (MiInitializePartition.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiProtectPageListLocks(__int64 a1)
{
  unsigned __int64 v2; // rdi
  int v3; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 17632));
  LOBYTE(v3) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2848));
  if ( (_DWORD)KiIrqlFlags )
  {
    LOBYTE(v3) = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && (unsigned __int8)v3 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v6 = (v3 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v3;
      if ( v6 )
        LOBYTE(v3) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return v3;
}
