/*
 * XREFs of IoPageReadEx @ 0x1402A66F0
 * Callers:
 *     MiIssueHardFaultIo @ 0x1402A1AC0 (MiIssueHardFaultIo.c)
 *     MiPageRead @ 0x1402A3A8C (MiPageRead.c)
 *     IoPageRead @ 0x1403D5370 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x1406185DC (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x140631E1C (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     IofCallDriver @ 0x14022EF10 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x14022F530 (IoGetRelatedDeviceObject.c)
 *     KxAcquireSpinLock @ 0x140251490 (KxAcquireSpinLock.c)
 *     IopSetDiskIoAttributionExtension @ 0x140290230 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402906A0 (IopSetDriverFlagsExtension.c)
 *     PsGetBaseIoPriorityThread @ 0x1402A7AA0 (PsGetBaseIoPriorityThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402A7AE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1402A7B10 (IoSetDiskIoAttributionFromThread.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     IopAllocateBackpocketIrp @ 0x140554A80 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140554D18 (IopAllocateReserveIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x1405718E8 (KiReleaseSpinLockInstrumented.c)
 *     MmIsFileObjectAPagingFile @ 0x14063BD88 (MmIsFileObjectAPagingFile.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v9; // r14
  unsigned __int8 v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  int v12; // ebp
  __int64 v13; // rsi
  __int64 Irp; // rdi
  int v15; // r12d
  KIRQL v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int BaseIoPriorityThread; // r8d
  __int64 v23; // r9
  __int64 v24; // r10
  unsigned int v25; // eax
  _QWORD *v26; // rbx
  __int64 v27; // rbp
  __int64 *v28; // rsi
  unsigned __int8 v29; // r14
  __int64 v30; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v32; // rcx
  _DWORD *v34; // r8
  __int64 v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  bool v42; // zf
  unsigned __int8 v43; // cl
  struct _KPRCB *v44; // r9
  _DWORD *v45; // r8
  int v46; // eax
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( v10 >= 4u )
    v13 = -1LL;
  Irp = IopAllocateIrpExReturn(v13, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
      Irp = IopAllocateReserveIrp(v36, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
      {
        LOBYTE(v37) = 1;
        Irp = IopAllocateBackpocketIrp(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v37);
        if ( Irp )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  v15 = 0;
  v16 = ExAcquireSpinLockShared(&dword_140C69748);
  v17 = (_QWORD *)qword_140C69740;
  v18 = v16;
  if ( !qword_140C69740 )
    goto LABEL_18;
  while ( (unsigned __int64)FileObject < *(v17 - 25) )
  {
    v17 = (_QWORD *)*v17;
LABEL_13:
    if ( !v17 )
      goto LABEL_18;
  }
  if ( (unsigned __int64)FileObject > *(v17 - 25) )
  {
    v17 = (_QWORD *)v17[1];
    goto LABEL_13;
  }
  if ( v17 )
    v15 = 1;
LABEL_18:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C69748);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v18 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = -1LL << ((unsigned __int8)v18 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v41 = ~(unsigned __int16)v19;
      v42 = (v41 & SchedulerAssist[5]) == 0;
      v20 = (unsigned int)v41 & SchedulerAssist[5];
      SchedulerAssist[5] = v20;
      if ( v42 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v18);
  if ( v15 || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v12 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  v21 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(Irp + 16) = v12;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), v19, v20, v21);
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (struct _KTHREAD *)v24 == KeGetCurrentThread() && *(_DWORD *)(v24 + 1440) )
    {
      BaseIoPriorityThread = 2;
    }
    else if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  v25 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF;
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 80) = a4;
  *(_DWORD *)(Irp + 16) = v25 | ((BaseIoPriorityThread + 1) << 17);
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v23 - 72) = 3;
  *(_QWORD *)(v23 - 24) = FileObject;
  *(_DWORD *)(v23 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v23 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0);
  else
    IoSetDiskIoAttributionFromThread(Irp, *(_QWORD *)(Irp + 152));
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  *(_QWORD *)(a5 + 8) = Irp;
  v26 = (_QWORD *)(Irp + 32);
  v27 = *(_QWORD *)(Irp + 152);
  v28 = (__int64 *)(v27 + 1280);
  v29 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v29 <= 0xFu )
  {
    v34 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v29 == 2 )
      LODWORD(v35) = 4;
    else
      v35 = (-1LL << (v29 + 1)) & 4;
    v34[5] |= v35;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)(v27 + 1496));
  v30 = *v28;
  if ( *(__int64 **)(*v28 + 8) != v28 )
    __fastfail(3u);
  *v26 = v30;
  *(_QWORD *)(Irp + 40) = v28;
  *(_QWORD *)(v30 + 8) = v26;
  *v28 = (__int64)v26;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v27 + 1496, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v27 + 1496), 0LL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v43 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v43 <= 0xFu && v29 <= 0xFu && v43 >= 2u )
    {
      v44 = KeGetCurrentPrcb();
      v45 = v44->SchedulerAssist;
      v46 = ~(unsigned __int16)(-1LL << (v29 + 1));
      v42 = (v46 & v45[5]) == 0;
      v45[5] &= v46;
      if ( v42 )
        KiRemoveSystemWorkPriorityKick(v44);
    }
  }
  __writecr8(v29);
  CurrentThread = KeGetCurrentThread();
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
  {
    v32 = KeGetCurrentThread();
    v32[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, (PIRP)Irp);
}
