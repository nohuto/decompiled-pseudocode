/*
 * XREFs of StorPortAdapterPoFxD3Completion @ 0x1C0015810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall StorPortAdapterPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        char *Context)
{
  if ( *((_DWORD *)Context + 210) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5640));
  Context[107] &= ~4u;
}
