/*
 * XREFs of sub_1409585A4 @ 0x1409585A4
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14094774C @ 0x14094774C (sub_14094774C.c)
 */

__int64 __fastcall sub_1409585A4(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v6; // rdx
  PDEVICE_OBJECT v7; // r14
  PIRP Irp; // rbp
  unsigned int v9; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v12; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      sub_14042A5E0(*(_QWORD *)(v3 + 8), 3LL);
      sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL), v6);
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    v7 = sub_1402D30A0(DeviceObject, 0x69706E50u);
    Irp = IoAllocateIrp(v7->StackSize, 0);
    if ( Irp )
    {
      sub_1402D3080();
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      Irp->IoStatus.Status = -1073741637;
      memset(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      Irp->UserIosb = 0LL;
      Irp->UserEvent = 0LL;
      Irp->Tail.Overlay.Thread = CurrentThread;
      Irp->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = Irp;
      sub_14094774C((_QWORD *)a2);
      v12 = Irp->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)sub_1405648E0;
      v12[-1].Context = (PVOID)a2;
      v12[-1].Control = -32;
      v9 = IofCallDriver(v7, Irp);
    }
    else
    {
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)a2 = a2;
      sub_14094774C((_QWORD *)a2);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = sub_140947450;
      *(_QWORD *)(a2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
      v9 = -1073741670;
    }
    ObfDereferenceObjectWithTag(v7, 0x69706E50u);
    return v9;
  }
  else
  {
    if ( v3 )
      sub_14042A5E0(*(_QWORD *)(v3 + 8), 4LL);
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    sub_14094774C((_QWORD *)a2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = sub_140947450;
    *(_QWORD *)(a2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
    return 0LL;
  }
}
