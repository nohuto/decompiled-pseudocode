/*
 * XREFs of PoFxIdleComponent @ 0x1403557F0
 * Callers:
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x1403B1020 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1403B9A30 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1406193F0 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140355830 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
