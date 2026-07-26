/*
 * XREFs of ?ndisDeviceInternalIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C007EDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007EC88 (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall ndisDeviceInternalIrpDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisDeviceInternalDispatch(a1, (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension, a2);
}
