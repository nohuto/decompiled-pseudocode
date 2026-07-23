/*
 * XREFs of KiRestoreClockTickRate @ 0x140340F90
 * Callers:
 *     KeClockInterruptNotify @ 0x1402C4930 (KeClockInterruptNotify.c)
 *     KeResumeClockTimerFromIdle @ 0x1402C72F0 (KeResumeClockTimerFromIdle.c)
 *     KiResumeClockTimer @ 0x140570388 (KiResumeClockTimer.c)
 * Callees:
 *     KiSetPendingTick @ 0x1402C2AF0 (KiSetPendingTick.c)
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     KiGetClockIntervalOneShot @ 0x140340E50 (KiGetClockIntervalOneShot.c)
 *     KiShouldRearmClockTimer @ 0x1403410CC (KiShouldRearmClockTimer.c)
 *     KiLogClockIncrementUpdate @ 0x1403D03B8 (KiLogClockIncrementUpdate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall KiRestoreClockTickRate(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *v5; // r15
  unsigned __int8 CurrentIrql; // si
  int v8; // ecx
  unsigned __int8 result; // al
  int v10; // esi
  int v11; // r8d
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 ClockIntervalOneShot; // rdx
  __int64 (__fastcall *v20)(); // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (_QWORD *)a2;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        a2 = 0x8000LL;
      else
        a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= a2;
    }
    LOBYTE(a2) = 1;
    if ( (unsigned __int8)KiShouldRearmClockTimer(CurrentPrcb, a2) )
    {
      CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
      KiSetNextClockTickDueTime(1);
    }
    *(_QWORD *)a3 = CurrentPrcb->ClockTimerState.TimeIncrement;
    v8 = (int)KiIrqlFlags;
    *v5 = CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement;
    if ( v8 )
    {
      v13 = KeGetCurrentIrql();
      if ( (v8 & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    CurrentPrcb->ClockKeepAlive = 1;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
  }
  else
  {
    v10 = KiClockOwnerOneShotRequestState;
    *(_QWORD *)a2 = (unsigned int)KiLastRequestedTimeIncrement;
    if ( v10 )
    {
      v18 = KiClockOwnerOneShotRequest;
      if ( KiClockOwnerOneShotCorrectiveRequest >= a1
        && KiClockOwnerOneShotCorrectiveRequest < (unsigned __int64)KiClockOwnerOneShotRequest )
      {
        v18 = KiClockOwnerOneShotCorrectiveRequest;
      }
      ClockIntervalOneShot = (unsigned int)KiGetClockIntervalOneShot(v18, a1);
      v20 = off_140C01CA0[0];
      *v5 = ClockIntervalOneShot;
      ((void (__fastcall *)(__int64, __int64, unsigned int *))v20)(1LL, ClockIntervalOneShot, a3);
      KiLastRequestedTimeIncrement = *(_DWORD *)v5;
      KeTimeIncrement = *a3;
    }
    else
    {
      ((void (__fastcall *)(_QWORD))off_140C01CA0[0])(0LL);
    }
    v11 = *(_DWORD *)v5;
    CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement = *(_DWORD *)v5;
    CurrentPrcb->ClockTimerState.OneShotState = v10;
    CurrentPrcb->ClockTimerState.TimeIncrement = *a3;
    CurrentPrcb->ClockTimerState.ClockActive = 1;
    KiLogClockIncrementUpdate((_DWORD)CurrentPrcb, a1, v11, *a3, v10 == 1);
    return KiSetPendingTick(1);
  }
  return result;
}
