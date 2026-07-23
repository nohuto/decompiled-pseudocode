/*
 * XREFs of sub_14074CA9C @ 0x14074CA9C
 * Callers:
 *     sub_1402D2524 @ 0x1402D2524 (sub_1402D2524.c)
 *     sub_1402D2F74 @ 0x1402D2F74 (sub_1402D2F74.c)
 *     sub_1406E636C @ 0x1406E636C (sub_1406E636C.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_1407499A8 @ 0x1407499A8 (sub_1407499A8.c)
 *     sub_14074A0F8 @ 0x14074A0F8 (sub_14074A0F8.c)
 *     sub_14074B21C @ 0x14074B21C (sub_14074B21C.c)
 *     sub_14074B2C8 @ 0x14074B2C8 (sub_14074B2C8.c)
 *     sub_14074B394 @ 0x14074B394 (sub_14074B394.c)
 *     sub_14074CA14 @ 0x14074CA14 (sub_14074CA14.c)
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 *     sub_140821918 @ 0x140821918 (sub_140821918.c)
 *     sub_1409587F0 @ 0x1409587F0 (sub_1409587F0.c)
 *     sub_1409588F0 @ 0x1409588F0 (sub_1409588F0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x1402AC2D0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402AE1B0 @ 0x1402AE1B0 (sub_1402AE1B0.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402D3080 @ 0x1402D3080 (sub_1402D3080.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 *     sub_14036CCBC @ 0x14036CCBC (sub_14036CCBC.c)
 */

__int64 __fastcall sub_14074CA9C(struct _DEVICE_OBJECT *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  PDEVICE_OBJECT v8; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  unsigned int v15; // edi
  struct _DEVICE_OBJECT *v17; // rdi
  __int128 v18; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  v8 = sub_1402D30A0(a1, 0x69706E50u);
  v9 = v8;
  if ( (v8->Flags & 0x80u) != 0 )
  {
    v17 = (struct _DEVICE_OBJECT *)sub_14036CCBC((__int64)v8, 0x69706E50u);
    if ( !v17 )
    {
      v15 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = v17;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  if ( Irp )
  {
    sub_1402D3080();
    LODWORD(v18) = a3;
    Irp->IoStatus.Status = a3;
    *((_QWORD *)&v18 + 1) = a4;
    Irp->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    Irp->UserIosb = (PIO_STATUS_BLOCK)&v18;
    Irp->UserEvent = &Event;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    sub_1402AE1B0((__int64)Irp);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v12;
    v14 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v14;
    CurrentStackLocation[-1].Context = (PVOID)v13;
    v15 = IofCallDriver(v9, Irp);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v18;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v18 + 1);
  }
  else
  {
    v15 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v15;
}
