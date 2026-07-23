/*
 * XREFs of sub_14074C5A8 @ 0x14074C5A8
 * Callers:
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     sub_1409589A4 @ 0x1409589A4 (sub_1409589A4.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 */

__int64 __fastcall sub_14074C5A8(struct _DEVICE_OBJECT *a1, __int128 *a2, IO_COMPLETION_ROUTINE *a3, void *a4)
{
  PDEVICE_OBJECT v8; // rsi
  PIRP Irp; // rbx
  _QWORD *DeviceNode; // rax
  __int128 v11; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int128 v13; // xmm1
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  struct _IO_STACK_LOCATION *v17; // rax
  unsigned int v18; // ebx

  v8 = sub_1402D30A0(a1, 0x69706E50u);
  Irp = IoAllocateIrp(v8->StackSize, 0);
  if ( Irp )
  {
    sub_1402D3080();
    if ( a1 )
    {
      DeviceNode = a1->DeviceObjectExtension->DeviceNode;
      if ( DeviceNode )
        DeviceNode[9] = Irp;
    }
    Irp->IoStatus.Information = 0LL;
    v11 = *a2;
    Irp->IoStatus.Status = -1073741637;
    CurrentThread = KeGetCurrentThread();
    Irp->UserIosb = 0LL;
    Irp->UserEvent = 0LL;
    v13 = a2[1];
    Irp->Tail.Overlay.Thread = CurrentThread;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    Irp->RequestorMode = 0;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = v11;
    v15 = a2[2];
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v16 = a2[3];
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v15;
    *(_QWORD *)&v15 = *((_QWORD *)a2 + 8);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v16;
    CurrentStackLocation[-1].Context = (PVOID)v15;
    v17 = Irp->Tail.Overlay.CurrentStackLocation;
    v17[-1].CompletionRoutine = a3;
    v17[-1].Context = a4;
    v17[-1].Control = -32;
    v18 = IofCallDriver(v8, Irp);
  }
  else
  {
    v18 = -1073741670;
  }
  ObfDereferenceObjectWithTag(v8, 0x69706E50u);
  return v18;
}
