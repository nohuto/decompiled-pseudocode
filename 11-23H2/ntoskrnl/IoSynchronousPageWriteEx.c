/*
 * XREFs of IoSynchronousPageWriteEx @ 0x140251040
 * Callers:
 *     MiFlushSectionInternal @ 0x1402759E0 (MiFlushSectionInternal.c)
 *     IoSynchronousPageWrite @ 0x14035D160 (IoSynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x1403C1C48 (MiSynchronousPageWrite.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x1405517A4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 * Callees:
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022F080 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F620 (IoGetRelatedDeviceObject.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140251670 (KxAcquireSpinLock.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402905E0 (IopSetDiskIoAttributionExtension.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7EC0 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetIoPriorityThread @ 0x1402A8E40 (PsGetIoPriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     IopAllocateBackpocketIrp @ 0x1405550A0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140555338 (IopAllocateReserveIrp.c)
 *     MmIsFileObjectAPagingFile @ 0x14063C268 (MmIsFileObjectAPagingFile.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  __int64 v13; // rdx
  IRP *Irp; // rbx
  __int64 v15; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  __int64 v17; // r9
  int IoPriorityThread; // r10d
  unsigned int v19; // eax
  PETHREAD Thread; // r14
  LIST_ENTRY *p_ThreadListEntry; // rdi
  struct _LIST_ENTRY *p_SystemCallNumber; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _LIST_ENTRY *Flink; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v27; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v29; // rcx
  unsigned __int8 v30; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v32; // r8
  int v33; // eax
  bool v34; // zf

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8474u);
    __addgsdword(0x8478u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL);
  if ( Irp )
    goto LABEL_5;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v29, (unsigned __int8)RelatedDeviceObject->StackSize, 1LL);
    if ( Irp )
      goto LABEL_5;
    return -1073741670;
  }
  _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
  Irp = (IRP *)IopAllocateBackpocketIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
    return -1073741670;
LABEL_5:
  Irp->AllocationFlags |= 0x20u;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread(), v13, v15, CurrentStackLocation);
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
      || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  v19 = Irp->Flags & 0xFFF1FFFF;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->UserIosb = a7;
  Irp->Flags = v19 | ((IoPriorityThread + 1) << 17);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v17 - 72) = 4;
  *(_DWORD *)(v17 - 64) = a2->ByteCount;
  *(_QWORD *)(v17 - 48) = *a3;
  *(_BYTE *)(v17 - 70) |= a5;
  *(_QWORD *)(v17 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  Thread = Irp->Tail.Overlay.Thread;
  p_ThreadListEntry = &Irp->ThreadListEntry;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v27) = 4;
    else
      v27 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v27;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  Irp->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread);
  if ( (_DWORD)KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = CurrentPrcb->SchedulerAssist;
      v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v34 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
