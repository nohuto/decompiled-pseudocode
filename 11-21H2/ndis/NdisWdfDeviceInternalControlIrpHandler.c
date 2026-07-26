/*
 * XREFs of NdisWdfDeviceInternalControlIrpHandler @ 0x1C005B120
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00797AC (-ndisDeviceInternalDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 */

__int64 __fastcall NdisWdfDeviceInternalControlIrpHandler(struct _IRP *a1)
{
  void *FsContext; // rcx

  FsContext = a1->Tail.Overlay.CurrentStackLocation->FileObject->FsContext;
  return ndisDeviceInternalDispatch(
           *(struct _DEVICE_OBJECT **)FsContext,
           *((struct _NDIS_MINIPORT_BLOCK **)FsContext + 1),
           a1);
}
