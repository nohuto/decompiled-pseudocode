/*
 * XREFs of CcDeletePartition @ 0x1405391B0
 * Callers:
 *     CcGetPartitionWithCreate @ 0x14034EE94 (CcGetPartitionWithCreate.c)
 *     CcCreatePartition @ 0x1403A04C0 (CcCreatePartition.c)
 *     CcExitPartition @ 0x140539938 (CcExitPartition.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeCancelTimer @ 0x140252B60 (KeCancelTimer.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDereferencePartition @ 0x14029C6C0 (CcDereferencePartition.c)
 *     DbgPrintEx @ 0x14032A9D0 (DbgPrintEx.c)
 *     CcDeleteNumaNode @ 0x1403C2594 (CcDeleteNumaNode.c)
 *     CcForEachNumaNode @ 0x1403C3D9C (CcForEachNumaNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x14041B170 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x140539C4C (CcUninitializePartitionVacbs.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  __int64 *v2; // rbp
  void *v3; // rcx
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  __int64 **v17; // rdi
  void *v18; // rcx
  __int64 **v19; // rsi
  __int64 *v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rcx
  ULONG v23; // edx
  __int64 *v24; // rcx
  __int64 v25; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeSetEvent((PRKEVENT)(P + 1304), 0, 0);
  CcDereferencePartition((__int64)P);
  v3 = (void *)*((_QWORD *)P + 169);
  if ( v3 )
  {
    ZwWaitForSingleObject(v3, 0, 0LL);
    ZwClose(*((HANDLE *)P + 169));
    *((_QWORD *)P + 169) = 0LL;
  }
  if ( P[1048] )
  {
    P[1048] = 0;
    KeCancelTimer((PKTIMER)(P + 984));
  }
  if ( P[1293] )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v5 = *((_QWORD *)P + 1);
    v6 = v4;
    --CcPartitionCount;
    *(_QWORD *)(v5 + 8) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)&CcGlobalPartitionLock);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v6 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v6);
  }
  if ( CcEnablePerVolumeLazyWriter && *((_QWORD *)P + 162) )
  {
    KeWaitForSingleObject(P + 56, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)P + 96, &LockHandle);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
      {
        v14 = KeGetCurrentPrcb();
        v15 = v14->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v11 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v14);
      }
    }
    __writecr8(OldIrql);
  }
  v17 = (__int64 **)(P + 96);
  while ( *v17 == (__int64 *)v17 )
    KeDelayExecutionThread(0, 0, &Cc10Milliseconds);
  v18 = (void *)*((_QWORD *)P + 142);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x70546343u);
    *((_QWORD *)P + 142) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  if ( !CcEnablePerVolumeLazyWriter )
    CcForEachNumaNode(
      (__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))CcUnInitializeAsyncReadForNodeHelper,
      (__int64)P,
      0LL,
      0LL);
  v19 = (__int64 **)(P + 16);
  while ( 1 )
  {
    v20 = *v19;
    v21 = v2;
    if ( *v19 == (__int64 *)v19 )
      break;
    v22 = *v20;
    if ( (__int64 **)v20[1] != v19 || *(__int64 **)(v22 + 8) != v20 )
LABEL_45:
      __fastfail(3u);
    *v19 = (__int64 *)v22;
    v2 = v20 - 4;
    *(_QWORD *)(v22 + 8) = v19;
    CcDeleteNumaNode((__int64)(v20 - 4));
    if ( v21 )
      v2 = v21;
  }
  if ( !v2 )
    goto LABEL_41;
  v23 = 1968071491;
  v24 = v2;
  while ( 1 )
  {
    ExFreePoolWithTag(v24, v23);
LABEL_41:
    v24 = *v17;
    if ( *v17 == (__int64 *)v17 )
      break;
    v25 = *v24;
    if ( (__int64 **)v24[1] != v17 || *(__int64 **)(v25 + 8) != v24 )
      goto LABEL_45;
    *v17 = (__int64 *)v25;
    v23 = 1901552451;
    *(_QWORD *)(v25 + 8) = v17;
  }
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
