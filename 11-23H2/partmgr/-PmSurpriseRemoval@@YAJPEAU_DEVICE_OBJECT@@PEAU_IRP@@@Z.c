/*
 * XREFs of ?PmSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001E1A8
 * Callers:
 *     ?PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001C340 (-PmPnp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z @ 0x1C00047F4 (-PmRemoveHelper@@YAXPEAU_DEVICE_EXTENSION@@@Z.c)
 */

__int64 __fastcall PmSurpriseRemoval(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  PDEVICE_OBJECT *DeviceExtension; // rbx
  unsigned int Status; // edi

  DeviceExtension = (PDEVICE_OBJECT *)a1->DeviceExtension;
  IoForwardIrpSynchronously(DeviceExtension[2], a2);
  Status = a2->IoStatus.Status;
  PmRemoveHelper((struct _DEVICE_EXTENSION *)DeviceExtension);
  IofCompleteRequest(a2, 0);
  return Status;
}
