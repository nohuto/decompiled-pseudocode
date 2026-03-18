/*
 * XREFs of PoFxIdleComponent @ 0x140312F80
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028D050 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxIdleDevice @ 0x140322F7C (PoFxIdleDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1403979C0 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1405E95A0 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140312FC0 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
