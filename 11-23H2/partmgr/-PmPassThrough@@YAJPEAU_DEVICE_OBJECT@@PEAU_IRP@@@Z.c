/*
 * XREFs of ?PmPassThrough@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0003830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PmPassThrough(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  char *DeviceExtension; // rsi
  int v4; // eax
  unsigned int v5; // ebx

  DeviceExtension = (char *)a1->DeviceExtension;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, File, 1u, 0x20u);
  v5 = v4;
  if ( v4 < 0 )
  {
    a2->IoStatus.Status = v4;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v5 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 2), a2);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(DeviceExtension + 120), a2, 0x20u);
  }
  return v5;
}
