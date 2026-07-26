/*
 * XREFs of NdisWdfPnPAddDevice @ 0x1C005B410
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z @ 0x1C00296DC (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAXE@Z.c)
 */

__int64 __fastcall NdisWdfPnPAddDevice(__int64 a1, void **a2)
{
  return ndisPnPAddDevice(
           *(struct _DRIVER_OBJECT **)a1,
           *(struct _DEVICE_OBJECT **)(a1 + 8),
           *(void **)(a1 + 16),
           a2,
           *(_BYTE *)(a1 + 24));
}
