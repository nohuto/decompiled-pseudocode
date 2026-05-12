/*
 * XREFs of StorPortAdapterPoFxD3Completion @ 0x1C004E1A0
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
  if ( *((_DWORD *)Context + 226) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5704));
  Context[107] &= ~4u;
}
