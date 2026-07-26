/*
 * XREFs of NdisWdfDeviceControlIrpHandler @ 0x1C005B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall NdisWdfDeviceControlIrpHandler(struct _IRP *a1)
{
  void *FsContext; // rcx

  FsContext = a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  return ndisDeviceControlHandler(
           *(struct _DEVICE_OBJECT **)FsContext,
           *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
           a1);
}
