/*
 * XREFs of MiUnlockHugePfn @ 0x140622D10
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x140A4438C (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUnlockHugePfn(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  v2 = a2;
  _InterlockedAnd(
    (volatile signed __int32 *)(qword_140C67EF8 + 4 * ((((a1 - qword_140C67EF0) >> 3) & 0x3FFFFFuLL) >> 5)),
    ~(1 << (((a1 - qword_140C67EF0) >> 3) & 0x1F)));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && a2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << (a2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
}
