/*
 * XREFs of HalpReleaseSecondaryIcEntryExclusive @ 0x14051A9E8
 * Callers:
 *     HalpDeleteSecondaryIcEntry @ 0x14051A23C (HalpDeleteSecondaryIcEntry.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall HalpReleaseSecondaryIcEntryExclusive(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v6; // eax
  _DWORD *SchedulerAssist; // r8
  bool v8; // zf

  v2 = a2;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 112), 0xFFFFFFFF);
  KxReleaseSpinLock((volatile signed __int64 *)&SecondaryIcListSpinLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  return KeSetEvent((PRKEVENT)(a1 + 120), 0, 0);
}
