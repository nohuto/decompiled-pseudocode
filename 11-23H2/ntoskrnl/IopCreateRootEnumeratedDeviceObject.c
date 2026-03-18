/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x140812578
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x1408121C4 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140815844 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x140834DD0 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14096DAE4 (PiInitializeDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x140304E10 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x14076AFD0 (IoCreateDevice.c)
 */

__int64 __fastcall IopCreateRootEnumeratedDeviceObject(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = IoCreateDevice(PnpDriverObject, 4u, 0LL, 4u, 0x80u, 0, &v6);
  if ( v2 < 0 )
  {
    v4 = v6;
  }
  else
  {
    v3 = v6;
    *a1 = v6;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}
