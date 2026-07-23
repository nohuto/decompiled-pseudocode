/*
 * XREFs of IopInsertPassiveInterruptBlock @ 0x1403A2FA0
 * Callers:
 *     IopAllocatePassiveInterruptBlock @ 0x140848A00 (IopAllocatePassiveInterruptBlock.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     IopFindPassiveInterruptBlockLocked @ 0x1403A3768 (IopFindPassiveInterruptBlockLocked.c)
 *     IopAcquireGlobalPassiveInterruptListLock @ 0x1403A379C (IopAcquireGlobalPassiveInterruptListLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopInsertPassiveInterruptBlock(__int64 a1, _BYTE *a2)
{
  __int64 PassiveInterruptBlockLocked; // rsi
  __int64 *v5; // rcx
  unsigned __int8 v6; // bl
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  *a2 = 1;
  IopAcquireGlobalPassiveInterruptListLock(&v13);
  PassiveInterruptBlockLocked = IopFindPassiveInterruptBlockLocked(*(unsigned int *)(a1 + 20));
  if ( !PassiveInterruptBlockLocked )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v5 = (__int64 *)qword_140C5D348;
    if ( *(__int64 **)qword_140C5D348 != &PassiveInterruptList )
      __fastfail(3u);
    *(_QWORD *)a1 = &PassiveInterruptList;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140C5D348 = a1;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PassiveInterruptListLock);
  if ( (_DWORD)KiIrqlFlags
    && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
    && CurrentIrql <= 0xFu )
  {
    v6 = v13;
    if ( v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = v13;
      v11 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v6 = v13;
  }
  __writecr8(v6);
  if ( PassiveInterruptBlockLocked )
    *a2 = 0;
  return 0LL;
}
