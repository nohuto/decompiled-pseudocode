/*
 * XREFs of StorPortUnitDirectedPowerUpCompletion @ 0x1C004B480
 * Callers:
 *     <none>
 * Callees:
 *     RaFlushDFxQueue @ 0x1C003D758 (RaFlushDFxQueue.c)
 */

void __fastcall StorPortUnitDirectedPowerUpCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        struct _DEVICE_OBJECT **Context)
{
  *((_BYTE *)Context + 448) &= ~0x80u;
  if ( Context[419] == (struct _DEVICE_OBJECT *)(Context + 419) )
    *((_BYTE *)Context + 451) &= ~2u;
  else
    RaFlushDFxQueue(Context[1]);
}
