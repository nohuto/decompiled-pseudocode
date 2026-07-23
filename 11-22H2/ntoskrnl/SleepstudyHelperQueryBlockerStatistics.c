/*
 * XREFs of SleepstudyHelperQueryBlockerStatistics @ 0x1405A34A0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall SleepstudyHelperQueryBlockerStatistics(__int64 a1, char *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v7; // rbp
  char v8; // r12
  __int64 v9; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  v3 = 0;
  if ( a1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1);
    if ( (*(_BYTE *)(a1 + 8) & 3) == 3 )
    {
      v8 = 1;
      v9 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 24);
    }
    else
    {
      v8 = 0;
      v9 = 0LL;
    }
    KxReleaseSpinLock((volatile signed __int64 *)a1);
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
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v7);
    if ( a2 )
      *a2 = v8;
    if ( a3 )
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
