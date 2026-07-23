/*
 * XREFs of MiWaitForAvailablePages @ 0x14065395C
 * Callers:
 *     MiDelayFaultingThread @ 0x140645E88 (MiDelayFaultingThread.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiWaitForAvailablePages(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  struct _KPRCB *v6; // r10
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  void *v10; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+30h] [rbp-28h] BYREF

  memset(&v16, 0, sizeof(v16));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 15872), &v16);
  if ( *(_QWORD *)(a1 + 17216) < 0x420uLL )
  {
    v10 = (void *)(a1 + 15944);
    KeResetEvent((PRKEVENT)(a1 + 15944));
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
    OldIrql = v16.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v16.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v16.OldIrql + 1));
        v9 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KeWaitForSingleObject(v10, WrFreePage, 0, 0, a2);
  }
  else
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v16);
    v4 = v16.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v5 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v5 <= 0xFu && v16.OldIrql <= 0xFu && v5 >= 2u )
      {
        v6 = KeGetCurrentPrcb();
        v7 = v6->SchedulerAssist;
        v8 = ~(unsigned __int16)(-1LL << (v16.OldIrql + 1));
        v9 = (v8 & v7[5]) == 0;
        v7[5] &= v8;
        if ( v9 )
          KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
    }
    __writecr8(v4);
  }
}
