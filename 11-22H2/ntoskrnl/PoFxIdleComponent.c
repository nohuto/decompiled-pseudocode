/*
 * XREFs of PoFxIdleComponent @ 0x140312DA0
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028CF30 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxIdleDevice @ 0x140322D9C (PoFxIdleDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140395E40 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1405E9630 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140312DE0 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
