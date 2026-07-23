/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x140634778
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x140635300 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x14022247C (MiReturnWsToExpansionList.c)
 *     KxReleaseQueuedSpinLock @ 0x140260240 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140260D40 (KeAcquireInStackQueuedSpinLock.c)
 *     MiEmptyWorkingSetInitiate @ 0x14036D5A4 (MiEmptyWorkingSetInitiate.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rbx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  int v15; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
  v2 = (_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v3 + 8) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF9 | 2;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C698C0, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v12 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v10 = (v15 & v14[5]) == 0;
      v14[5] &= v15;
      if ( v10 )
        KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
  }
  __writecr8(v11);
}
