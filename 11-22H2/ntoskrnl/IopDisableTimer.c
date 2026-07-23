/*
 * XREFs of IopDisableTimer @ 0x1405550D4
 * Callers:
 *     IoStopTimer @ 0x140557560 (IoStopTimer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252980 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceIoTimerEvent @ 0x1405FCF20 (EtwTraceIoTimerEvent.c)
 */

char __fastcall IopDisableTimer(__int64 a1)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rsi
  int v4; // eax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
  if ( *(_WORD *)(a1 + 2) )
  {
    *(_WORD *)(a1 + 2) = 0;
    v2 = --IopTimerCount == 0;
  }
  LOBYTE(v4) = KxReleaseSpinLock((volatile signed __int64 *)&IopTimerLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    LOBYTE(v4) = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v4 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v7 = (v4 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v4;
      if ( v7 )
        LOBYTE(v4) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x800000) != 0 )
    LOBYTE(v4) = EtwTraceIoTimerEvent(3934LL, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 24));
  if ( v2 )
    LOBYTE(v4) = KeCancelTimer(&IopTimer);
  return v4;
}
