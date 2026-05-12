/*
 * XREFs of sub_1C004E770 @ 0x1C004E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1C004E770(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, char *Context)
{
  if ( *((_DWORD *)Context + 226) > 1u )
    KeCancelTimer((PKTIMER)(Context + 5704));
  Context[107] &= ~4u;
}
