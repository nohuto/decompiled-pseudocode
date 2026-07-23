/*
 * XREFs of ExDeleteResourceLite @ 0x1402A9050
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     CcUnpinFileDataEx @ 0x14025DAA0 (CcUnpinFileDataEx.c)
 *     CcDeallocateBcb @ 0x1402F41E0 (CcDeallocateBcb.c)
 *     DifExDeleteResourceLiteWrapper @ 0x1405D8AD0 (DifExDeleteResourceLiteWrapper.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     SepTokenDeleteMethod @ 0x140729790 (SepTokenDeleteMethod.c)
 *     PnpDereferenceNotify @ 0x14078F618 (PnpDereferenceNotify.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 *     CmpDelayFreeRMWorker @ 0x1407E9180 (CmpDelayFreeRMWorker.c)
 *     RtlDestroyHeap @ 0x1407E9500 (RtlDestroyHeap.c)
 *     DrvDbOpenContext @ 0x140812D10 (DrvDbOpenContext.c)
 *     MUIInitializeResourceLock @ 0x14085F7FC (MUIInitializeResourceLock.c)
 *     PiDrvDbDestroyNode @ 0x14097002C (PiDrvDbDestroyNode.c)
 *     TtmpDeleteQueue @ 0x1409AC660 (TtmpDeleteQueue.c)
 *     _PnpCtxCloseMachine @ 0x140A60A20 (_PnpCtxCloseMachine.c)
 *     DrvDbDestroyDatabaseNode @ 0x140A6DC00 (DrvDbDestroyDatabaseNode.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140207740 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     PsBoostThreadIoEx @ 0x140230040 (PsBoostThreadIoEx.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     ExpOwnerEntryToThread @ 0x1402A8E18 (ExpOwnerEntryToThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsBoostThreadIoQoS @ 0x14031A99C (PsBoostThreadIoQoS.c)
 *     ExpResourceEnforcesOwnershipTransfer @ 0x14031A9D4 (ExpResourceEnforcesOwnershipTransfer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall ExDeleteResourceLite(PERESOURCE Resource)
{
  __int16 v2; // ax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  LONG i; // ecx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax
  unsigned __int8 v9; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf
  ERESOURCE_THREAD OwnerThread; // rbx
  __int64 v15; // r8
  POWNER_ENTRY OwnerTable; // rcx
  unsigned int v17; // ebp
  __int64 *j; // rbx
  struct _KTHREAD *v19; // rdi
  __int64 v20; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]
  int v23; // [rsp+58h] [rbp+10h] BYREF

  v2 = Resource->Flag & 1;
  if ( !FeatureFastResource2 )
  {
    if ( !v2 )
      goto LABEL_3;
LABEL_61:
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  }
  if ( v2 )
    goto LABEL_61;
LABEL_3:
  __incgsdword(0x8A60u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v5) = 4;
    else
      v5 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v5;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&ExpResourceSpinLock, CurrentIrql);
  }
  else
  {
    v23 = 0;
    if ( _interlockedbittestandset(&ExpResourceSpinLock, 0x1Fu) )
      v23 = ExpWaitForSpinLockExclusiveAndAcquire(&ExpResourceSpinLock, CurrentIrql);
    for ( i = ExpResourceSpinLock; (ExpResourceSpinLock & 0xBFFFFFFF) != 0x80000000; i = ExpResourceSpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(&ExpResourceSpinLock, 0x40000000u);
      KeYieldProcessorEx(&v23);
    }
  }
  Flink = Resource->SystemResourcesList.Flink;
  Blink = Resource->SystemResourcesList.Blink;
  if ( (PERESOURCE)Resource->SystemResourcesList.Flink->Blink != Resource || (PERESOURCE)Blink->Flink != Resource )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(&ExpResourceSpinLock, retaddr);
  else
    ExpResourceSpinLock = 0;
  if ( (_DWORD)KiIrqlFlags )
  {
    v9 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
      v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v13 = (v12 & v11[5]) == 0;
      v11[5] &= v12;
      if ( v13 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  Resource->SystemResourcesList.Flink = 0LL;
  Resource->SystemResourcesList.Blink = 0LL;
  OwnerThread = Resource->OwnerEntry.OwnerThread;
  if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
  {
    OwnerThread &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (OwnerThread & 3) != 0 )
  {
    goto LABEL_45;
  }
  if ( OwnerThread )
  {
    if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
      && (Resource->OwnerEntry.TableSize & 2) == 0
      && (struct _KTHREAD *)OwnerThread != KeGetCurrentThread() )
    {
      KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), OwnerThread, 1uLL);
    }
    if ( (Resource->OwnerEntry.TableSize & 1) != 0 )
      PsBoostThreadIoEx(OwnerThread, 1, 0, 0LL);
    if ( (Resource->OwnerEntry.TableSize & 4) != 0 )
      PsBoostThreadIoQoS(OwnerThread, 1LL, v15);
    if ( (Resource->OwnerEntry.TableSize & 2) != 0 )
      ObDereferenceObjectDeferDeleteWithTag((PVOID)OwnerThread, 0x746C6644u);
  }
LABEL_45:
  OwnerTable = Resource->OwnerTable;
  if ( OwnerTable )
  {
    v17 = 1;
    for ( j = (__int64 *)&OwnerTable->0; v17 < OwnerTable->TableSize; ++v17 )
    {
      j += 2;
      v19 = (struct _KTHREAD *)ExpOwnerEntryToThread(j - 1);
      if ( v19 )
      {
        if ( (unsigned __int8)ExpResourceEnforcesOwnershipTransfer(Resource)
          && (*(_DWORD *)j & 2) == 0
          && v19 != KeGetCurrentThread() )
        {
          KeBugCheckEx(0x16Eu, (ULONG_PTR)Resource, (ULONG_PTR)KeGetCurrentThread(), (ULONG_PTR)v19, 2uLL);
        }
        if ( (*(_DWORD *)j & 1) != 0 )
          PsBoostThreadIoEx((__int64)v19, 1, 0, 0LL);
        if ( (*(_DWORD *)j & 4) != 0 )
          PsBoostThreadIoQoS(v19, 1LL, v20);
        if ( (*(_DWORD *)j & 2) != 0 )
          ObDereferenceObjectDeferDeleteWithTag(v19, 0x746C6644u);
      }
      OwnerTable = Resource->OwnerTable;
    }
    ExFreePoolWithTag(OwnerTable, 0);
  }
  return 0;
}
