/*
 * XREFs of PoFxIdleComponent @ 0x140313210
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x14028D2E0 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxIdleDevice @ 0x14032320C (PoFxIdleDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x140397BA0 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x1405E9B10 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x140313250 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
