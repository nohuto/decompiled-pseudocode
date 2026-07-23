/*
 * XREFs of HalpDpOfflineProcessorForReplace @ 0x140A97208
 * Callers:
 *     HalpDpReplaceTarget @ 0x140A978E0 (HalpDpReplaceTarget.c)
 * Callees:
 *     KeSweepLocalCaches @ 0x1403727A0 (KeSweepLocalCaches.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeSaveStateForHibernate @ 0x14041FE80 (KeSaveStateForHibernate.c)
 *     HalpInterruptOfflineProcessor @ 0x140521410 (HalpInterruptOfflineProcessor.c)
 *     HalpDpPostReplaceInitialization @ 0x140A97464 (HalpDpPostReplaceInitialization.c)
 */

__int64 __fastcall HalpDpOfflineProcessorForReplace(__int64 a1)
{
  __int16 v1; // bp
  int v3; // ebp
  unsigned __int8 CurrentIrql; // bl
  unsigned int Number; // r8d
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax
  __int16 v12; // [rsp+30h] [rbp-8h]
  unsigned __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v1 = v12;
  _disable();
  v3 = v1 & 0x200;
  CurrentIrql = KeGetCurrentIrql();
  Number = KeGetPcr()->Prcb.Number;
  v13 = __rdtsc();
  KeSaveStateForHibernate(HalpHiberProcState + 1472LL * Number);
  if ( *(_DWORD *)(a1 + 56) < *(_DWORD *)a1 )
  {
    KeSweepLocalCaches();
    HalpInterruptOfflineProcessor((volatile signed __int32 *)(a1 + 56));
  }
  HalpDpPostReplaceInitialization(a1, &v13);
  if ( (_DWORD)KiIrqlFlags )
  {
    v6 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v10 = (v9 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v9;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v3 )
    _enable();
  return result;
}
