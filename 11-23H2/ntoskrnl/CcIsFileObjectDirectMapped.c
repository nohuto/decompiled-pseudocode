/*
 * XREFs of CcIsFileObjectDirectMapped @ 0x140319DE8
 * Callers:
 *     CcCanIWriteStreamEx @ 0x14020FC80 (CcCanIWriteStreamEx.c)
 *     CcCopyWriteWontFlush @ 0x140319AB0 (CcCopyWriteWontFlush.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall CcIsFileObjectDirectMapped(__int64 a1, char a2)
{
  bool v2; // bl
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  memset(&v14, 0, sizeof(v14));
  v4 = a2 & 1;
  if ( (a2 & 1) == 0 )
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v14);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      v2 = (*(_DWORD *)(v6 + 152) & 0x40000000) != 0;
  }
  if ( !v4 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&v14);
    OldIrql = v14.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v14.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (v14.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  return v2;
}
