/*
 * XREFs of ?ndisWMIIrpDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000F990
 * Callers:
 *     <none>
 * Callees:
 *     ndisWMIDispatch @ 0x1C000F9B0 (ndisWMIDispatch.c)
 */

__int64 __fastcall ndisWMIIrpDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  return ndisWMIDispatch(a1, (char)a1->DeviceExtension, a2);
}
