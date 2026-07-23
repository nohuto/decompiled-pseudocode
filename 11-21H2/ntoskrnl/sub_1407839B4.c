/*
 * XREFs of sub_1407839B4 @ 0x1407839B4
 * Callers:
 *     sub_1406D8994 @ 0x1406D8994 (sub_1406D8994.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075EE80 @ 0x14075EE80 (sub_14075EE80.c)
 *     sub_14078362C @ 0x14078362C (sub_14078362C.c)
 *     sub_14078CD70 @ 0x14078CD70 (sub_14078CD70.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     sub_1409DCFD4 @ 0x1409DCFD4 (sub_1409DCFD4.c)
 *     sub_1409DE380 @ 0x1409DE380 (sub_1409DE380.c)
 * Callees:
 *     IoAllocateIrp @ 0x1402AAB20 (IoAllocateIrp.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 */

__int64 __fastcall sub_1407839B4(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, _OWORD *a6)
{
  PIRP Irp; // rax
  PIRP v8; // rbx
  unsigned int v9; // edi

  while ( 1 )
  {
    Irp = IoAllocateIrp(qword_140C164D8->StackSize + 1, 0);
    v8 = Irp;
    if ( !Irp )
      break;
    --Irp->Tail.Overlay.CurrentStackLocation;
    --Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation->DeviceObject = qword_140C164D8;
    Irp->Tail.Overlay.Thread = KeGetCurrentThread();
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)a5;
    v9 = sub_140783A9C(Irp, a4, a5);
    *a6 = *(_OWORD *)&v8->IoStatus.Status;
    IoFreeIrp(v8);
    if ( v9 != -1073741160 )
      return v9;
  }
  return 3221225626LL;
}
