/*
 * XREFs of ?PmQueryPnpDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000A694
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall PmQueryPnpDeviceState(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rdi

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( DeviceExtension[604]
    || *((_DWORD *)DeviceExtension + 148)
    || *((_DWORD *)DeviceExtension + 149)
    || *((_DWORD *)DeviceExtension + 150) )
  {
    a2->IoStatus.Information |= 0x20uLL;
    a2->IoStatus.Status = 0;
  }
  KeWaitForSingleObject(DeviceExtension + 56, Executive, 0, 0, 0LL);
  if ( DeviceExtension[524] )
  {
    a2->IoStatus.Information |= 2uLL;
    a2->IoStatus.Status = 0;
  }
  KeReleaseMutex((PRKMUTEX)DeviceExtension + 1, 0);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
}
