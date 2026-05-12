/*
 * XREFs of sub_1C00103B0 @ 0x1C00103B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00103B0(PDEVICE_OBJECT DeviceObject, UCHAR MinorFunction, POWER_STATE PowerState, _BYTE *Context)
{
  Context[448] &= ~0x80u;
}
