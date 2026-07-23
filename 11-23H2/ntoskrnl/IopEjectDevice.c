/*
 * XREFs of IopEjectDevice @ 0x14096CF18
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408676B8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x140302EF4 (IovUtilWatermarkIrp.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpQueuePendingEject @ 0x14095945C (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r14
  PIRP Irp; // rax
  IRP *v8; // rbp
  unsigned int v9; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v12; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 3LL);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a2 + 96) + 40LL))(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL));
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x69706E50u);
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
    v8 = Irp;
    if ( Irp )
    {
      IovUtilWatermarkIrp((__int64)Irp, 1LL);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      v8->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      v8->IoStatus.Status = -1073741637;
      memset(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      v8->UserIosb = 0LL;
      v8->UserEvent = 0LL;
      v8->Tail.Overlay.Thread = CurrentThread;
      v8->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = v8;
      PnpQueuePendingEject((_QWORD *)a2);
      v12 = v8->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v12[-1].Context = (PVOID)a2;
      v12[-1].Control = -32;
      v9 = IofCallDriver(AttachedDeviceReferenceWithTag, v8);
    }
    else
    {
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)a2 = a2;
      PnpQueuePendingEject((_QWORD *)a2);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
      *(_QWORD *)(a2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
      v9 = -1073741670;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
    return v9;
  }
  else
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 4LL);
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    PnpQueuePendingEject((_QWORD *)a2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
    *(_QWORD *)(a2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
    return 0LL;
  }
}
