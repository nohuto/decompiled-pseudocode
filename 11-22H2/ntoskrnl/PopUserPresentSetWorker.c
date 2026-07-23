/*
 * XREFs of PopUserPresentSetWorker @ 0x14058E240
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiSetTimerEx @ 0x140252700 (KiSetTimerEx.c)
 *     PopSetNotificationWork @ 0x14032C950 (PopSetNotificationWork.c)
 *     PopEventCalloutDispatch @ 0x1403B5F0C (PopEventCalloutDispatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 *     PopInitSIdle @ 0x140825874 (PopInitSIdle.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

__int64 PopUserPresentSetWorker()
{
  unsigned int v0; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ecx
  KIRQL v10; // bl
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  _DWORD *v13; // r8
  int v14; // eax
  __int64 result; // rax

  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( PopUserPresentSetStatus != 1 )
      break;
    v0 = PopUserPresentMonitorOnReason;
    PopUserPresentSetStatus = 2;
    KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v4 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v5 = (v4 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v4;
        if ( v5 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v10);
    if ( byte_140C3D911 && !_InterlockedExchange(&dword_140C3D918, 1) )
    {
      PopAwayModeUserPresenceDpcObject.TargetInfoAsUlong = 275;
      PopAwayModeUserPresenceDpcObject.DeferredRoutine = (PKDEFERRED_ROUTINE)PopAwayModeUserPresenceDpc;
      PopAwayModeUserPresenceDpcObject.DpcData = 0LL;
      PopAwayModeUserPresenceDpcObject.DeferredContext = &dword_140C3D918;
      PopAwayModeUserPresenceDpcObject.ProcessorHistory = 0LL;
      KiSetTimerEx(
        (__int64)&PopAwayModeUserPresenceTimer,
        -30000000LL,
        0,
        0,
        (__int64)&PopAwayModeUserPresenceDpcObject);
      PopAwaymodeExitReason = v0;
      PopSetNotificationWork(0x40u, v6, v7, v8);
    }
    PopNotifyConsoleUserPresent(0LL, v0);
    if ( (PopFullWake & 3) == 0 )
    {
      _InterlockedOr(&PopFullWake, 3u);
      PopEventCalloutDispatch(0, 0LL);
      PopAcquirePolicyLock(v9);
      PopInitSIdle(4LL);
      PopReleasePolicyLock();
    }
  }
  if ( dword_140C3D914 )
    KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
  PopUserPresentSetStatus = 0;
  PopUserPresentMonitorOnReason = 0;
  KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    v11 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && v10 <= 0xFu && v11 >= 2u )
    {
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << (v10 + 1));
      v5 = (v14 & v13[5]) == 0;
      v13[5] &= v14;
      if ( v5 )
        KiRemoveSystemWorkPriorityKick((__int64)v12);
    }
  }
  result = v10;
  __writecr8(v10);
  return result;
}
