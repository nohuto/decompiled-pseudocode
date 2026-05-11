/*
 * XREFs of USBType1AsyncEndpointInitialize @ 0x1C00369C0
 * Callers:
 *     USBType1RenderCreatePin @ 0x1C0039350 (USBType1RenderCreatePin.c)
 * Callees:
 *     memset @ 0x1C001AF80 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBType1AsyncEndpointInitialize(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // r9
  __int64 v4; // r14
  NTSTATUS v5; // ebx
  PIRP Irp; // rax
  IRP *v7; // rdi
  __int64 v8; // r15
  PIO_WORKITEM WorkItem; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 8);
  v11 = 0LL;
  v4 = v1[19];
  v5 = USBHwAllocateAndBag(&v11, 164LL, 64LL, v2);
  if ( v5 >= 0 )
  {
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(v1[2] + 40LL) + 76LL), 0);
    v7 = Irp;
    if ( !Irp )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD *)(v1[18] + 176LL);
    v5 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
    if ( v5 < 0 )
    {
      IoFreeIrp(v7);
      return (unsigned int)v5;
    }
    memset((void *)(v4 + 872), 0, 0x70uLL);
    *(_QWORD *)(v4 + 864) = v11;
    *(_QWORD *)(v4 + 872) = v7;
    *(_QWORD *)(v4 + 880) = v1;
    *(_DWORD *)(v4 + 900) = 1 << *(_BYTE *)(v8 + 7);
    KeInitializeEvent((PRKEVENT)(v4 + 920), SynchronizationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v4 + 944), SynchronizationEvent, 0);
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v1[2] + 40LL));
    *(_QWORD *)(v4 + 968) = WorkItem;
    if ( !WorkItem )
      return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
