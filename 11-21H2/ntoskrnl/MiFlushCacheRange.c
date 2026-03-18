/*
 * XREFs of MiFlushCacheRange @ 0x1405B2400
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140586A44 (MiHotRemoveHugeRange.c)
 *     MiRemovePhysicalMemory @ 0x140969850 (MiRemovePhysicalMemory.c)
 * Callees:
 *     KeInvalidateAllCaches @ 0x140259C80 (KeInvalidateAllCaches.c)
 *     MiFlushCacheForAttributeChange @ 0x140268AB0 (MiFlushCacheForAttributeChange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf

  if ( a2 < (unsigned int)dword_140C5074C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    MiFlushCacheForAttributeChange(a1, a2, 3);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140C50744;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
