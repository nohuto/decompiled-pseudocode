/*
 * XREFs of KiResumeClockTimer @ 0x14038BFAC
 * Callers:
 *     KeResumeClockTimer @ 0x14038BF94 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x14056CB60 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiRestoreClockTickRate @ 0x14022F864 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x14022FA04 (KiEventClockStateChange.c)
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 *     KiSetClockTimerKTimerDeadlines @ 0x14056CFD8 (KiSetClockTimerKTimerDeadlines.c)
 */

__int64 KiResumeClockTimer()
{
  char v0; // di
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // esi
  __int64 result; // rax
  unsigned __int64 InterruptTimePrecise; // r14
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rdx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  LARGE_INTEGER v15; // [rsp+70h] [rbp+18h] BYREF

  v13 = 0LL;
  v0 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0LL;
  v15.QuadPart = 0LL;
  v2 = KiClockState;
  result = (unsigned int)KiClockTimerOwner;
  if ( CurrentPrcb->Number == (_DWORD)KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    goto LABEL_4;
  }
  off_140C01ED0[0]();
  result = off_140C01EC8();
  CurrentPrcb->ClockTimerState.ClockActive = 1;
  if ( !v0 )
  {
LABEL_4:
    if ( !KiClockTimerPerCpuTickScheduling )
      return result;
    goto LABEL_8;
  }
  ++dword_140C2B144;
  CurrentPrcb->ClockOwner = 1;
LABEL_8:
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KiSetClockTimer((_DWORD)CurrentPrcb, -KeMaximumIncrement, KeMaximumIncrement, 3, 1, 0);
    if ( v0 || !KiSerializeTimerExpiration )
    {
      LOBYTE(v7) = v0;
      KiSetClockTimerKTimerDeadlines(CurrentPrcb, v7);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          v9 = KeGetCurrentPrcb();
          v10 = v9->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v9);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v15);
  result = KiRestoreClockTickRate(InterruptTimePrecise, &v14, (int *)&v13);
  if ( v0 )
  {
    if ( v2 == 2 )
      LOBYTE(v2) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v2, &v13, &v14);
    result = InterruptTimePrecise + (unsigned int)KeTimeIncrement;
    KiClockTimerNextTickTime = result;
  }
  CurrentPrcb->ClockTimerState.NextTickDueTime = InterruptTimePrecise + v13;
  return result;
}
