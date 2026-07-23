/*
 * XREFs of IoCancelIrp @ 0x14022D160
 * Callers:
 *     sub_14022CFE4 @ 0x14022CFE4 (sub_14022CFE4.c)
 *     sub_140249470 @ 0x140249470 (sub_140249470.c)
 *     sub_1402A7370 @ 0x1402A7370 (sub_1402A7370.c)
 *     sub_140376100 @ 0x140376100 (sub_140376100.c)
 *     sub_1403DEBE0 @ 0x1403DEBE0 (sub_1403DEBE0.c)
 *     sub_1405D09A0 @ 0x1405D09A0 (sub_1405D09A0.c)
 *     sub_140661B8C @ 0x140661B8C (sub_140661B8C.c)
 *     FsRtlSetKernelEaFile @ 0x1406A3540 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1406A4560 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1406A4870 (FsRtlQueryKernelEaFile.c)
 *     sub_1406A4A70 @ 0x1406A4A70 (sub_1406A4A70.c)
 *     sub_14079FC78 @ 0x14079FC78 (sub_14079FC78.c)
 *     sub_1407EDFC0 @ 0x1407EDFC0 (sub_1407EDFC0.c)
 *     FsRtlQueryInformationFile @ 0x14092ED30 (FsRtlQueryInformationFile.c)
 *     sub_140958514 @ 0x140958514 (sub_140958514.c)
 *     sub_140990634 @ 0x140990634 (sub_140990634.c)
 *     sub_140990740 @ 0x140990740 (sub_140990740.c)
 *     sub_14099089C @ 0x14099089C (sub_14099089C.c)
 *     sub_140995040 @ 0x140995040 (sub_140995040.c)
 *     sub_1409991F0 @ 0x1409991F0 (sub_1409991F0.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A7EC2C @ 0x140A7EC2C (sub_140A7EC2C.c)
 *     sub_140A805A8 @ 0x140A805A8 (sub_140A805A8.c)
 */

BOOLEAN __stdcall IoCancelIrp(PIRP Irp)
{
  KIRQL v2; // al
  __int64 v3; // r8
  ULONG_PTR v4; // rdi
  KIRQL v5; // si
  bool v6; // zf

  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0) )
    sub_140A805A8();
  v2 = KeAcquireQueuedSpinLock(7uLL);
  Irp->Cancel = 1;
  v4 = _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL);
  v5 = v2;
  if ( v4 )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      KeBugCheckEx(0x48u, (ULONG_PTR)Irp, v4, 0LL, 0LL);
    v6 = dword_140C1B2A0 == 0;
    Irp->CancelIrql = v2;
    if ( v6 || !dword_140D5750C )
      sub_14042A5E0(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v3);
    else
      sub_140A7EC2C(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp, v4);
    if ( KeGetCurrentIrql() == 2 && v5 != 2 )
      KeBugCheckEx(0x11Bu, (ULONG_PTR)Irp, v4, 0LL, 0LL);
    return 1;
  }
  else
  {
    KeReleaseQueuedSpinLock(7uLL, v2);
    return 0;
  }
}
