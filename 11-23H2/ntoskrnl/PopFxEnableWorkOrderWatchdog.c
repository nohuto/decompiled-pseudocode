/*
 * XREFs of PopFxEnableWorkOrderWatchdog @ 0x140311F78
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x140311E14 (PopFxDispatchPluginWorkOnce.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14058A990 (PopFxHandleDirectedPowerTransition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetCoalescableTimer @ 0x140252620 (KeSetCoalescableTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxEnableWorkOrderWatchdog(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 *v5; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 168) = KeGetCurrentThread();
    if ( a2 )
    {
      KeSetCoalescableTimer((PKTIMER)(v2 + 16), (LARGE_INTEGER)(-10000LL * a2), 0, a2 / 0xA, (PKDPC)(v2 + 80));
      v3 = MEMORY[0xFFFFF78000000008];
      *(_QWORD *)(v2 + 152) = 0LL;
      *(_QWORD *)(v2 + 160) = v3;
      v4 = KeAcquireSpinLockRaiseToDpc(&PopWorkOrderLock);
      v5 = (__int64 *)qword_140C3EC48;
      if ( *(__int64 **)qword_140C3EC48 != &PopWorkOrderList )
        __fastfail(3u);
      *(_QWORD *)v2 = &PopWorkOrderList;
      *(_QWORD *)(v2 + 8) = v5;
      *v5 = v2;
      qword_140C3EC48 = v2;
      KxReleaseSpinLock((volatile signed __int64 *)&PopWorkOrderLock);
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
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v4);
    }
  }
  return v2;
}
