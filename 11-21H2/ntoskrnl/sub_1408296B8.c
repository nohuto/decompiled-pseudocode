/*
 * XREFs of sub_1408296B8 @ 0x1408296B8
 * Callers:
 *     sub_1408294F0 @ 0x1408294F0 (sub_1408294F0.c)
 *     sub_14098B4E0 @ 0x14098B4E0 (sub_14098B4E0.c)
 * Callees:
 *     IoSynchronousCallDriver @ 0x140245250 (IoSynchronousCallDriver.c)
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 */

__int64 __fastcall sub_1408296B8(__int64 a1)
{
  PIRP Irp; // rax
  IRP *v3; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v5; // ebx

  Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 48) + 76LL), 0);
  v3 = Irp;
  if ( Irp )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)qword_140011F18;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a1 + 88;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 65592;
    Irp->IoStatus.Status = -1073741637;
    v5 = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), Irp);
    IoFreeIrp(v3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
