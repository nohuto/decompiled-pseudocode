/*
 * XREFs of MiAssignInitialPageAttribute @ 0x1403A23E4
 * Callers:
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x1402F1714 (MiInsertPhysicalPteMapping.c)
 *     MiMapContiguousMemoryLarge @ 0x14038C884 (MiMapContiguousMemoryLarge.c)
 *     MiMapMdlCommon @ 0x1403A6DE0 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF680 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 v4; // bl
  char result; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  if ( (struct _KTHREAD *)qword_140C67F88 == KeGetCurrentThread() )
    v4 = 17;
  else
    v4 = MiLockPageInline(a1);
  result = *(_BYTE *)(a1 + 34);
  if ( (result & 0xC0) == 0xC0 )
  {
    result = (a2 << 6) | result & 0x3F;
    *(_BYTE *)(a1 + 34) = result;
  }
  if ( v4 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v4;
    __writecr8(v4);
  }
  return result;
}
