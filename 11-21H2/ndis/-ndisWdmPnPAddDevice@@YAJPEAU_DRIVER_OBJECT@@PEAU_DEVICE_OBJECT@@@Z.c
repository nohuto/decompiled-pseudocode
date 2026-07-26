/*
 * XREFs of ?ndisWdmPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C00344B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 */

__int64 __fastcall ndisWdmPnPAddDevice(struct _DRIVER_OBJECT *a1, struct _DEVICE_OBJECT *a2)
{
  return ndisPnPAddDevice(a1, a2, 0LL, 0LL, 0);
}
