/*
 * XREFs of sub_1C0057C30 @ 0x1C0057C30
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 *     sub_1C00A949C @ 0x1C00A949C (sub_1C00A949C.c)
 * Callees:
 *     sub_1C0018124 @ 0x1C0018124 (sub_1C0018124.c)
 */

__int64 __fastcall sub_1C0057C30(PDEVICE_OBJECT DeviceObject, ULONG_PTR a2, USHORT a3, __int64 a4, __int64 a5)
{
  PIRP Irp; // rax
  IRP *v9; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  int Status; // edi

  Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
  v9 = Irp;
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.QueryInterface.Version = 1;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
  CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
  Status = sub_1C0018124(DeviceObject, Irp);
  if ( Status >= 0 )
    Status = v9->IoStatus.Status;
  IoFreeIrp(v9);
  return (unsigned int)Status;
}
