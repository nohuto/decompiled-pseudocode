/*
 * XREFs of UsbhFdoHandleFreeDumpDataIoctl @ 0x1C003050C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhFdoHandleFreeDumpDataIoctl(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rax
  unsigned int v6; // ebx

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v6 = IofCallDriver(v5[151], a3);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v6;
}
