/*
 * XREFs of KeSuspendClockTimerSafe @ 0x140570010
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140A9C170 (IopLiveDumpProcessCorralStateChange.c)
 *     PnprQuiesceProcessorDpc @ 0x140A9D2F0 (PnprQuiesceProcessorDpc.c)
 *     PnprQuiesceProcessors @ 0x140A9D774 (PnprQuiesceProcessors.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 KeSuspendClockTimerSafe()
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v2; // rdx
  struct _KPRCB *v3; // rdi
  int v4; // ebp
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rdi
  int v12; // esi

  if ( ObGetCurrentIrql() >= 0xDu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (unsigned int)KiClockState;
    v12 = KiClockTimerOwner;
    if ( (CurrentPrcb->PendingTickFlags & 1) != 0 )
    {
      result = off_140C01C98[0]();
      CurrentPrcb->PendingTickFlags &= ~1u;
      CurrentPrcb->ClockTimerState.ClockActive = 0;
    }
    if ( CurrentPrcb->Number == v12 )
      ++dword_140C41B28;
    if ( CurrentPrcb->ClockOwner )
      CurrentPrcb->ClockOwner = 0;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xDuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 13 )
        LODWORD(v2) = 0x2000;
      else
        v2 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
      SchedulerAssist[5] |= v2;
    }
    v3 = KeGetCurrentPrcb();
    v4 = KiClockTimerOwner;
    if ( (v3->PendingTickFlags & 1) != 0 )
    {
      off_140C01C98[0]();
      v3->PendingTickFlags &= ~1u;
      v3->ClockTimerState.ClockActive = 0;
    }
    if ( v3->Number == v4 )
      ++dword_140C41B28;
    if ( v3->ClockOwner )
      v3->ClockOwner = 0;
    if ( (_DWORD)KiIrqlFlags )
    {
      v5 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
      {
        v6 = KeGetCurrentPrcb();
        v7 = v6->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
