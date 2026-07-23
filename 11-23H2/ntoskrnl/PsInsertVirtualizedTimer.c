/*
 * XREFs of PsInsertVirtualizedTimer @ 0x140356800
 * Callers:
 *     ExpSetTimerObject @ 0x14032EAB4 (ExpSetTimerObject.c)
 *     NtCreateTimer @ 0x1407C6860 (NtCreateTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExpTimerPause @ 0x1403699A8 (ExpTimerPause.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

KSPIN_LOCK **__fastcall PsInsertVirtualizedTimer(
        KSPIN_LOCK *Object,
        _QWORD *a2,
        KSPIN_LOCK *a3,
        __int64 a4,
        KSPIN_LOCK **a5)
{
  KSPIN_LOCK **result; // rax
  char v6; // r15
  KIRQL CurrentIrql; // di
  volatile signed __int64 *v11; // rbp
  PVOID *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf

  result = (KSPIN_LOCK **)*((unsigned int *)Object + 281);
  v6 = a4;
  if ( ((unsigned int)result & 0x40000008) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v11 = (volatile signed __int64 *)(Object + 305);
    if ( a3 )
    {
      CurrentIrql = KeAcquireSpinLockRaiseToDpc(Object + 305);
      KxAcquireSpinLock(a3);
    }
    v12 = (PVOID *)Object[307];
    if ( *v12 != Object + 306 )
      __fastfail(3u);
    *a2 = Object + 306;
    a2[1] = v12;
    *v12 = a2;
    Object[307] = (KSPIN_LOCK)a2;
    if ( v6 )
    {
      LOBYTE(a4) = 1;
      ExpTimerPause(a2 - 36, MEMORY[0xFFFFF78000000014], MEMORY[0xFFFFF78000000008], a4);
    }
    ObfReferenceObjectWithTag(Object, 0x54567350u);
    result = a5;
    *a5 = Object;
    if ( a3 )
    {
      KxReleaseSpinLock((volatile signed __int64 *)a3);
      KxReleaseSpinLock(v11);
      if ( (_DWORD)KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      result = (KSPIN_LOCK **)CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
