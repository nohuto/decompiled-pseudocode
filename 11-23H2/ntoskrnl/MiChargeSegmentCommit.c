/*
 * XREFs of MiChargeSegmentCommit @ 0x1407481F8
 * Callers:
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406B1A00 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x140720480 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x140748590 (MmCommitSessionMappedView.c)
 *     MiCommitPagefileBackedSection @ 0x1407DC358 (MiCommitPagefileBackedSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetControlAreaPartition @ 0x140275940 (MiGetControlAreaPartition.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiMakeDemandZeroPte @ 0x140284C08 (MiMakeDemandZeroPte.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiUpdateControlAreaCommitCount @ 0x1402EC258 (MiUpdateControlAreaCommitCount.c)
 *     MiGetSubsectionCrossPartitionReferences @ 0x1402ED680 (MiGetSubsectionCrossPartitionReferences.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiGetSubsectionCharges @ 0x14066B6F8 (MiGetSubsectionCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14066B904 (MiReturnCrossPartitionSectionCharges.c)
 *     MiUpdateProcessSharedCommit @ 0x140748498 (MiUpdateProcessSharedCommit.c)
 */

__int64 __fastcall MiChargeSegmentCommit(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 ControlAreaPartition; // rax
  __int64 v6; // r8
  unsigned __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 *v18; // r13
  bool v19; // zf
  __int64 DemandZeroPte; // rbx
  __int64 v22; // r15
  __int64 v23; // r12
  __int64 updated; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-88h]
  unsigned __int64 v26; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+38h] [rbp-70h]
  unsigned int *v29; // [rsp+40h] [rbp-68h]
  _QWORD *v30; // [rsp+48h] [rbp-60h]
  _QWORD *v31; // [rsp+50h] [rbp-58h]
  int SubsectionCrossPartitionReferences; // [rsp+B0h] [rbp+8h]
  volatile signed __int64 *BugCheckParameter2; // [rsp+B8h] [rbp+10h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp+20h]

  v3 = (__int64)a1;
  CurrentThread = KeGetCurrentThread();
  v31 = (_QWORD *)*a1;
  v28 = *(_QWORD *)*a1;
  ControlAreaPartition = MiGetControlAreaPartition(*a1);
  v7 = (unsigned __int64 *)(v6 + 40);
  v25 = ControlAreaPartition;
  BugCheckParameter2 = (volatile signed __int64 *)(v6 + 40);
  v8 = *(unsigned int *)(v3 + 44);
  v30 = (_QWORD *)(v3 + 8);
  v9 = *(_QWORD *)(v3 + 8);
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64)a2;
  v29 = (unsigned int *)(v3 + 44);
  v26 = v9 + 8 * v8;
  v11 = KeAbPreAcquire(v6 + 40, 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v11, (__int64)v7);
  if ( v12 )
    *(_BYTE *)(v12 + 18) = 1;
  v13 = 0LL;
  v14 = 0LL;
  v15 = v26;
  SubsectionCrossPartitionReferences = MiGetSubsectionCrossPartitionReferences(v3);
  while ( 1 )
  {
    v16 = MI_READ_PTE_LOCK_FREE(v10);
    v17 = v14 + 1;
    if ( v16 )
      v17 = v14;
    ++v13;
    v10 += 8LL;
    v14 = v17;
    if ( v13 == a3 )
      break;
    if ( v10 == v15 )
    {
      v3 = *(_QWORD *)(v3 + 16);
      v10 = *(_QWORD *)(v3 + 8);
      v15 = v10 + 8LL * *(unsigned int *)(v3 + 44);
    }
  }
  v18 = a1;
  if ( !v17 )
  {
    if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2);
    KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( !v19 )
      return 1LL;
    v19 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
LABEL_16:
    if ( !v19 )
      KiCheckForKernelApcDelivery();
    return 1LL;
  }
  if ( (unsigned int)MiChargeCommit(v25, v17, 0LL) )
  {
    if ( !SubsectionCrossPartitionReferences || (int)MiGetSubsectionCharges(v3, v14) >= 0 )
    {
      DemandZeroPte = MiMakeDemandZeroPte((*(_BYTE *)(v28 + 14) >> 1) & 0x1F);
      v22 = 0LL;
      v23 = *v30 + 8LL * *v29;
      while ( 1 )
      {
        if ( !MI_READ_PTE_LOCK_FREE((unsigned __int64)a2) )
          *a2 = DemandZeroPte;
        ++v22;
        ++a2;
        if ( v22 == a3 )
          break;
        if ( a2 == (__int64 *)v23 )
        {
          v18 = (__int64 *)v18[2];
          a2 = (__int64 *)v18[1];
          v23 = (__int64)&a2[*((unsigned int *)v18 + 11)];
        }
      }
      MiUpdateProcessSharedCommit(v31, v14);
      updated = MiUpdateControlAreaCommitCount((__int64)v31, v14);
      if ( SubsectionCrossPartitionReferences && !updated )
        MiReturnCrossPartitionSectionCharges(v25, 0, v14);
      if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(BugCheckParameter2);
      KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
      v19 = CurrentThread->SpecialApcDisable++ == -1;
      if ( !v19 )
        return 1LL;
      v19 = CurrentThread->ApcState.ApcListHead[0].Flink == CurrentThread->ApcState.ApcListHead;
      goto LABEL_16;
    }
    MiReturnCommit(v25, v14);
  }
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return 0LL;
}
