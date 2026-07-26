/*
 * XREFs of ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000FB20
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C000FB40 (ndisWMIDispatch.c)
 */

__int64 __fastcall ndisWMIIrpDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisWMIDispatch(a1, (char)a1->DeviceExtension, a2);
}
