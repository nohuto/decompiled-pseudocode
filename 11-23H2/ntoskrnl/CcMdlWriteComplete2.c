/*
 * XREFs of CcMdlWriteComplete2 @ 0x14036BA2C
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1407E8590 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1407EA0A0 (CcMdlWriteComplete.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmFlushSection @ 0x140287720 (MmFlushSection.c)
 *     CcDecrementOpenCount @ 0x14029CDB0 (CcDecrementOpenCount.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     CcSetDirtyInMask @ 0x1402C9280 (CcSetDirtyInMask.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     RtlRaiseStatus @ 0x140321A40 (RtlRaiseStatus.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, struct _MDL *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  CSHORT MdlFlags; // r15
  struct _MDL *v6; // rdi
  int Status; // esi
  __int16 v9; // r15
  __int64 v10; // r13
  struct _MDL *Next; // r12
  ULONG_PTR ByteCount; // r8
  __int64 v13; // rax
  PMDL v14; // r14
  unsigned __int64 OldIrql; // rbx
  struct _MDL *v16; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // eax
  bool v21; // zf
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v23; // ecx
  struct _IO_STATUS_BLOCK v24; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF
  PMDL Mdl; // [rsp+B0h] [rbp+50h]

  Mdl = a3;
  v3 = *a2;
  v26 = *a2;
  v4 = *(_QWORD *)(a1 + 40);
  MdlFlags = a3->MdlFlags;
  v6 = a3;
  Status = 0;
  v24 = 0LL;
  v9 = MdlFlags & 2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v10 = *(_QWORD *)(v4 + 8);
  do
  {
    Next = v6->Next;
    if ( v9 )
      MmUnlockPages(v6);
    ByteCount = v6->ByteCount;
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), &v26, ByteCount, 0LL, &v24, 1u);
      if ( v24.Status < 0 )
        Status = v24.Status;
    }
    else
    {
      CcSetDirtyInMask(v10, &v26, ByteCount, 0LL);
    }
    v13 = v6->ByteCount;
    v6 = Next;
    v3 += v13;
    v26 = v3;
  }
  while ( Next );
  v14 = Mdl;
  if ( v9 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 536) + 768LL), &LockHandle);
    CcDecrementOpenCount(v10);
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
        v20 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  if ( Status < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(Status);
    v23 = -1073741591;
    if ( IsNtstatusExpected )
      v23 = Status;
    RtlRaiseStatus(v23);
  }
  do
  {
    v16 = v14->Next;
    IoFreeMdl(v14);
    v14 = v16;
  }
  while ( v16 );
}
