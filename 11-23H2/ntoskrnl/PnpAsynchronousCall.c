/*
 * XREFs of PnpAsynchronousCall @ 0x140795184
 * Callers:
 *     PnpSendIrp @ 0x140322A28 (PnpSendIrp.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D31C (PiIrpQueryRemoveDevice.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E720 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14022F000 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302E90 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x140302EF4 (IovUtilWatermarkIrp.c)
 */

__int64 __fastcall PnpAsynchronousCall(_QWORD *a1, __int128 *a2, IO_COMPLETION_ROUTINE *a3, void *a4)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rsi
  PIRP Irp; // rax
  IRP *v10; // rbx
  __int64 v11; // rax
  __int128 v12; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int128 v14; // xmm1
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct _IO_STACK_LOCATION *v18; // rax
  unsigned int v19; // ebx

  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
  v10 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1[39] + 40LL);
      if ( v11 )
        *(_QWORD *)(v11 + 72) = v10;
    }
    v10->IoStatus.Information = 0LL;
    v12 = *a2;
    v10->IoStatus.Status = -1073741637;
    CurrentThread = KeGetCurrentThread();
    v10->UserIosb = 0LL;
    v10->UserEvent = 0LL;
    v14 = a2[1];
    v10->Tail.Overlay.Thread = CurrentThread;
    CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
    v10->RequestorMode = 0;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v12;
    v16 = a2[2];
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v14;
    v17 = a2[3];
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v16;
    *(_QWORD *)&v16 = *((_QWORD *)a2 + 8);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v17;
    CurrentStackLocation[-1].Context = (PVOID)v16;
    v18 = v10->Tail.Overlay.CurrentStackLocation;
    v18[-1].CompletionRoutine = a3;
    v18[-1].Context = a4;
    v18[-1].Control = -32;
    v19 = IofCallDriver(AttachedDeviceReferenceWithTag, v10);
  }
  else
  {
    v19 = -1073741670;
  }
  ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
  return v19;
}
