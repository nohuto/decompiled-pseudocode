/*
 * XREFs of sub_1C004F440 @ 0x1C004F440
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C003FFD8 @ 0x1C003FFD8 (sub_1C003FFD8.c)
 */

void __fastcall sub_1C004F440(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 448) &= ~0x80u;
  if ( Context[425] == (struct _DEVICE_OBJECT *)(Context + 425) )
    *((_BYTE *)Context + 451) &= ~2u;
  else
    sub_1C003FFD8(Context[1]);
}
