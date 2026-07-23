/*
 * XREFs of MiStoreModifiedWriteComplete @ 0x14065CC98
 * Callers:
 *     SmIoRequestComplete @ 0x1405CD9FC (SmIoRequestComplete.c)
 * Callees:
 *     MiLockPageInline @ 0x1402EF910 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiStoreFreeWriteSupport @ 0x14065C7F4 (MiStoreFreeWriteSupport.c)
 *     MiStoreLogWriteCompleteFailure @ 0x14065C8C4 (MiStoreLogWriteCompleteFailure.c)
 *     MiStoreModifiedWriteDereference @ 0x14065CDA4 (MiStoreModifiedWriteDereference.c)
 */

__int64 __fastcall MiStoreModifiedWriteComplete(_SLIST_ENTRY *P)
{
  __int64 v1; // r14
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  v1 = *((_QWORD *)&P[3].Next + 1);
  v3 = *(_QWORD *)(v1 + 192);
  if ( SLODWORD(P[1].Next) < 0 )
  {
    MiStoreLogWriteCompleteFailure();
    v4 = 48LL * *((_QWORD *)&P[7].Next + 1) - 0x220000000000LL;
    v5 = (unsigned __int8)MiLockPageInline(v4);
    *(_BYTE *)(v4 + 34) |= 0x10u;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
    *(_DWORD *)(v3 + 1204) = 32;
  }
  MiStoreFreeWriteSupport(P, (_SLIST_HEADER *)v3);
  return MiStoreModifiedWriteDereference(v1);
}
