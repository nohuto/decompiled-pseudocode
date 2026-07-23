/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x1402F6478
 * Callers:
 *     PspExitProcess @ 0x140751944 (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     ExpTimerResume @ 0x14036AA50 (ExpTimerResume.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int64 *v3; // rbp
  unsigned __int64 v4; // rdi
  __int64 **v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rsi
  void *v9; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf

  result = *(unsigned int *)(a1 + 632);
  if ( (result & 0x10) != 0 )
  {
    v3 = (volatile signed __int64 *)(a1 + 2440);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2440));
    v5 = (__int64 **)(a1 + 2448);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (__int64 *)v5 )
        break;
      v7 = *v6;
      if ( (__int64 **)v6[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
        __fastfail(3u);
      v8 = v6 - 36;
      *v5 = (__int64 *)v7;
      *(_QWORD *)(v7 + 8) = v5;
      v9 = (void *)*(v6 - 1);
      KxAcquireSpinLock((PKSPIN_LOCK)v6 - 28);
      v8[35] = 0LL;
      if ( (v8[38] & 2) != 0 )
        ExpTimerResume((PKTIMER)v8);
      KxReleaseSpinLock(v8 + 8);
      ObfDereferenceObjectWithTag(v9, 0x54567350u);
    }
    result = KxReleaseSpinLock(v3);
    if ( (_DWORD)KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v4);
  }
  return result;
}
