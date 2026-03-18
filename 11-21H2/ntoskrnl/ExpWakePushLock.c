/*
 * XREFs of ExpWakePushLock @ 0x140359F70
 * Callers:
 *     ExfReleasePushLockSharedEx @ 0x14021C64C (ExfReleasePushLockSharedEx.c)
 *     ExpOptimizePushLockList @ 0x14029F640 (ExpOptimizePushLockList.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfReleasePushLockExclusive @ 0x140359EF0 (ExfReleasePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpWakePushLock(volatile signed __int64 *a1, signed __int64 a2)
{
  _DWORD *SchedulerAssist; // r9
  int v3; // r10d
  _QWORD *v4; // r8
  struct _KEVENT *v5; // rbx
  struct _LIST_ENTRY *Blink; // rax
  bool v7; // zf
  signed __int64 v8; // rax
  unsigned __int8 CurrentIrql; // di
  struct _LIST_ENTRY *v10; // rsi
  __int64 Flink; // rdx
  signed __int64 v12; // rax
  _QWORD *v13; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax

  SchedulerAssist = a1;
  v3 = 1;
  while ( (a2 & 1) == 0 )
  {
LABEL_3:
    v4 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v5 = *(struct _KEVENT **)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20);
    if ( !v5 )
    {
      do
      {
        v13 = v4;
        v4 = (_QWORD *)v4[3];
        v4[5] = v13;
        v5 = (struct _KEVENT *)v4[4];
      }
      while ( !v5 );
      if ( v4 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = v5;
    }
    if ( (v5[2].Header.SignalState & 1) != 0 )
    {
      Blink = v5[1].Header.WaitListHead.Blink;
      if ( Blink )
      {
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20) = Blink;
        v5[1].Header.WaitListHead.Blink = 0LL;
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        v3 = 0;
LABEL_7:
        CurrentIrql = 2;
        if ( v5[1].Header.WaitListHead.Blink )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
            {
              SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
              SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
            }
          }
        }
        if ( !v3 )
        {
          Flink = (__int64)v5[2].Header.WaitListHead.Flink;
          if ( Flink )
            KiAbApplyWakeupBoost(KeGetCurrentThread()->Priority, Flink, 0LL, SchedulerAssist);
        }
        do
        {
          v10 = v5[1].Header.WaitListHead.Blink;
          if ( !_interlockedbittestandreset(&v5[2].Header.SignalState, 1u) )
            KeSetEvent(v5, 0, 0);
          v5 = (struct _KEVENT *)v10;
        }
        while ( v10 );
        if ( CurrentIrql != 2 )
        {
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v14 = KeGetCurrentIrql();
              if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v16 = CurrentPrcb->SchedulerAssist;
                v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v7 = (v17 & v16[5]) == 0;
                v16[5] &= v17;
                if ( v7 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
        }
        return;
      }
    }
    v8 = _InterlockedCompareExchange64(a1, 0LL, a2);
    v7 = a2 == v8;
    a2 = v8;
    if ( v7 )
      goto LABEL_7;
  }
  while ( 1 )
  {
    v12 = _InterlockedCompareExchange64(a1, a2 - 4, a2);
    v7 = a2 == v12;
    a2 = v12;
    if ( v7 )
      break;
    if ( (v12 & 1) == 0 )
      goto LABEL_3;
  }
}
