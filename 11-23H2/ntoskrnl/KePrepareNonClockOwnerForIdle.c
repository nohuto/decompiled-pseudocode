/*
 * XREFs of KePrepareNonClockOwnerForIdle @ 0x1402C1F6C
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x14027E550 (KiFindNextTimerDueTime.c)
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
 *     RtlGetInterruptTimePrecise @ 0x1402C4570 (RtlGetInterruptTimePrecise.c)
 *     KiSetNextClockTickDueTime @ 0x1402C87A0 (KiSetNextClockTickDueTime.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6DB4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldRearmClockTimer @ 0x1403410CC (KiShouldRearmClockTimer.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KePrepareNonClockOwnerForIdle(__int64 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // si
  __int64 v7; // rdx
  $7B5CACFB46652731FD5E219DB549FF78 *v8; // rcx
  struct _KPRCB *v9; // rbx
  int v10; // ebp
  __int64 NextTickDueTime; // rbx
  __int64 result; // rax
  __int64 NextTimerDueTime; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v15; // rdx
  int v16; // r8d
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int64 v22; // [rsp+30h] [rbp-58h] BYREF
  LARGE_INTEGER v23; // [rsp+38h] [rbp-50h] BYREF
  char v24[32]; // [rsp+40h] [rbp-48h] BYREF

  v23.QuadPart = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v23);
  v4 = -1LL;
  v22 = -1LL;
  v5 = -1LL;
  if ( !KiSerializeTimerExpiration )
  {
    NextTimerDueTime = KiFindNextTimerDueTime((__int64)CurrentPrcb, InterruptTimePrecise.QuadPart, 0, &v22);
    v4 = v22;
    v5 = NextTimerDueTime;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v15) = 0x8000;
    else
      v15 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v16 = v15 | SchedulerAssist[5];
    v4 = v22;
    SchedulerAssist[5] = v16;
  }
  if ( v4 != -1LL )
    KiSetClockTimer((_DWORD)CurrentPrcb, v4, 0, 0, 0, 0);
  if ( v5 != -1 )
    KiSetClockTimer((_DWORD)CurrentPrcb, v5, 0, 1, 0, 0);
  v7 = 0LL;
  v8 = &CurrentPrcb->ClockTimerState.ClockTimerEntries[0].12;
  while ( (v8->TypeFlags & 3) != 1 )
  {
    ++v7;
    v8 += 16;
    if ( v7 >= 7 )
    {
      v9 = KeGetCurrentPrcb();
      v10 = KiClockTimerOwner;
      if ( (v9->PendingTickFlags & 1) != 0 )
      {
        ((void (__fastcall *)($7B5CACFB46652731FD5E219DB549FF78 *))off_140C01C98[0])(v8);
        v9->PendingTickFlags &= ~1u;
        v9->ClockTimerState.ClockActive = 0;
      }
      if ( v9->Number == v10 )
        ++dword_140C41B28;
      if ( v9->ClockOwner )
        v9->ClockOwner = 0;
      if ( (unsigned int)dword_140C02F60 > 5 )
        tlgWriteTransfer_EtwWriteTransfer(&dword_140C02F60, &dword_14002D624, 0LL, 0LL, 2, v24);
      NextTickDueTime = -1LL;
      goto LABEL_20;
    }
  }
  if ( (unsigned __int8)KiShouldRearmClockTimer(CurrentPrcb, 0LL) )
  {
    CurrentPrcb->ClockTimerState.OneShotState = KClockTimerOneShotRearmRequired;
    KiSetNextClockTickDueTime(0LL);
  }
  NextTickDueTime = CurrentPrcb->ClockTimerState.NextTickDueTime;
LABEL_20:
  if ( (_DWORD)KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( a1 )
    *a1 = NextTickDueTime;
  return result;
}
