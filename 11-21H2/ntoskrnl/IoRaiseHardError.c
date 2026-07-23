/*
 * XREFs of IoRaiseHardError @ 0x140557690
 * Callers:
 *     sub_140610190 @ 0x140610190 (sub_140610190.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140936BD8 @ 0x140936BD8 (sub_140936BD8.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r13
  bool v6; // r15
  PETHREAD Thread; // r14
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ecx
  __int64 Pool2; // rbx
  bool v13; // bl
  struct _EX_RUNDOWN_REF *v14; // r15
  __int64 v15; // r9
  __int64 v16; // r13
  ULONG_PTR v17; // rbx
  char v18; // r14
  int v19; // eax
  __int16 v20; // cx
  struct _WORK_QUEUE_ITEM *v22; // rax
  _OWORD v23[3]; // [rsp+58h] [rbp-60h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*((_DWORD *)Thread + 344) & 0x10) != 0 )
    goto LABEL_29;
  v8 = sub_140287F30(*((_QWORD *)Thread + 68));
  v9 = sub_140936BD8(Thread);
  v10 = 0;
  if ( v8 != -1 )
    v10 = v8;
  if ( v10 != v9 )
  {
LABEL_29:
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_31;
LABEL_30:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_31;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) != 0x43 && Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 18 )
  {
    v11 = *((_DWORD *)KeGetCurrentThread() + 121);
    v6 = v11 != 0;
    if ( !v11 )
    {
      Pool2 = ExAllocatePool2(64LL, 88LL, 1129333067LL);
      if ( Pool2 )
      {
        KeInitializeApc(
          Pool2,
          (__int64)Thread,
          Irp->ApcEnvironment,
          (__int64)sub_1406D9550,
          (__int64)sub_140933A70,
          (__int64)sub_140934B80,
          0,
          (__int64)Irp);
        KeInsertQueueApc(Pool2, (__int64)v4, (__int64)RealDeviceObject, 0);
        return;
      }
      goto LABEL_31;
    }
  }
  if ( v6 && (*((_DWORD *)Thread + 29) & 0x400) == 0 )
  {
    v13 = 1;
    v14 = (struct _EX_RUNDOWN_REF *)((char *)Thread + 1352);
    if ( sub_140347810((struct _EX_RUNDOWN_REF *)Thread + 169) )
    {
      memset(v23, 0, sizeof(v23));
      v16 = *((_QWORD *)Thread + 30);
      v17 = *((_QWORD *)Thread + 68);
      if ( v17 == *((_QWORD *)KeGetCurrentThread() + 23) )
      {
        v18 = 0;
      }
      else
      {
        v18 = 1;
        sub_14030D5C0(v17, 0LL, (__int64)v23, v15);
      }
      v19 = *(_DWORD *)(v16 + 5808);
      if ( *(_QWORD *)(v17 + 1408) )
      {
        v20 = *(_WORD *)(v17 + 2412);
        if ( v20 == 332 || v20 == 452 )
          v19 |= *(_DWORD *)(v16 + 12072);
      }
      v13 = (v19 & 0x10) != 0;
      if ( v18 )
        sub_1402D0930((__int64)v23, 0LL);
      sub_1402AD030(v14);
      v4 = Vpb;
    }
    if ( v13 )
      goto LABEL_30;
  }
  v22 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 56LL, 1917153097LL);
  if ( v22 )
  {
    v22->WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_140935DE0;
    v22->Parameter = v22;
    v22->List.Flink = 0LL;
    v22[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v22[1].List.Blink = (struct _LIST_ENTRY *)v4;
    v22[1].WorkerRoutine = (PWORKER_THREAD_ROUTINE)RealDeviceObject;
    ExQueueWorkItem(v22, CriticalWorkQueue);
    return;
  }
LABEL_31:
  IofCompleteRequest(Irp, 1);
}
