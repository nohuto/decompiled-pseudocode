/*
 * XREFs of HalpTimerSwitchToNormalClock @ 0x14050C138
 * Callers:
 *     HalpTimerClockArm @ 0x140354380 (HalpTimerClockArm.c)
 *     HalpTimerAlwaysOnClockInterrupt @ 0x140521AC0 (HalpTimerAlwaysOnClockInterrupt.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x140303720 (HalpTimerGetInternalData.c)
 *     HalpTimerClockArm @ 0x140354380 (HalpTimerClockArm.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerSwitchToNormalClock(char a1)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 InternalData; // rax
  __int64 v6; // rdx
  unsigned __int8 v7; // al
  struct _KPRCB *v8; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf
  __int64 result; // rax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  InternalData = HalpTimerGetInternalData(HalpAlwaysOnTimer);
  (*(void (__fastcall **)(__int64))(v6 + 136))(InternalData);
  CurrentPrcb->PendingTickFlags &= ~2u;
  if ( a1 && HalpTimerClockStatePeriodic )
    HalpTimerClockArm(0, (unsigned int)KiLastRequestedTimeIncrement, (__int64)&v13);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        v8 = KeGetCurrentPrcb();
        v9 = v8->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v8);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
