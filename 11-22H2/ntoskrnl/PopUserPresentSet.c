/*
 * XREFs of PopUserPresentSet @ 0x14058DFF4
 * Callers:
 *     PopSetSystemState @ 0x14058DFAC (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopResetIdleTime @ 0x1403B43D8 (PopResetIdleTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408839B0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(__int32 a1)
{
  KIRQL v2; // al
  int v3; // ebp
  unsigned __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rbx
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // r9
  int v13; // eax
  _DWORD *v14; // r8
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  int v18; // eax
  _DWORD *v19; // r8

  if ( (PopSimulate & 0x40000) != 0 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    v3 = PopUserPresentSetStatus;
    v4 = v2;
    KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v4 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = (v8 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v4);
    DbgkWerCaptureLiveKernelDump((unsigned int)L"UserPresenceSet", 160, 273, v3, PopFullWake, 0LL, 0LL, 0LL, 0);
  }
  if ( byte_140C3CE21 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, a1);
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&PopUserPresentLock);
    if ( dword_140C3D914 )
    {
      if ( !PopUserPresentSetStatus )
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        v11 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v11 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v11 >= 2u )
        {
          v12 = KeGetCurrentPrcb();
          v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v14 = v12->SchedulerAssist;
          v9 = (v13 & v14[5]) == 0;
          v14[5] &= v13;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v12);
        }
      }
      __writecr8(v10);
    }
    else
    {
      PopUserPresentMonitorOnReason = a1;
      if ( !PopUserPresentSetStatus )
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      PopUserPresentSetStatus = 1;
      KxReleaseSpinLock((volatile signed __int64 *)&PopUserPresentLock);
      if ( (_DWORD)KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && (unsigned __int8)v10 <= 0xFu && v16 >= 2u )
        {
          v17 = KeGetCurrentPrcb();
          v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
          v19 = v17->SchedulerAssist;
          v9 = (v18 & v19[5]) == 0;
          v15 = (unsigned int)v18 & v19[5];
          v19[5] = v15;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)v17);
        }
      }
      __writecr8(v10);
      PopResetIdleTime(2LL, v15);
    }
  }
}
