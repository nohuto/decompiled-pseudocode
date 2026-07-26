/*
 * XREFs of ndisDriverDispatch @ 0x1C0002AE0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDispatchRequest @ 0x1C0002B08 (ndisDispatchRequest.c)
 *     ?ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C00CBEF8 (-ndisLwmDispatchIrp@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 */

int __fastcall ndisDriverDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  if ( a1 == ndisLwmDeviceObject )
    return ndisLwmDispatchIrp(a1, a2);
  else
    return ndisDispatchRequest();
}
