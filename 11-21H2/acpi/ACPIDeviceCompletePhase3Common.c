/*
 * XREFs of ACPIDeviceCompletePhase3Common @ 0x1C00080D4
 * Callers:
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase6 @ 0x1C0007E50 (ACPIDevicePowerProcessPhase5DeviceSubPhase6.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C0007F80 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase5 @ 0x1C00288F0 (ACPIDevicePowerProcessPhase5DeviceSubPhase5.c)
 *     ACPIDeviceCompletePhase3On @ 0x1C002B230 (ACPIDeviceCompletePhase3On.c)
 *     ACPIDeviceCompletePhase3Off @ 0x1C002B300 (ACPIDeviceCompletePhase3Off.c)
 *     ACPIDeviceCompleteOscReevalPhase @ 0x1C004F4D0 (ACPIDeviceCompleteOscReevalPhase.c)
 *     ACPIDeviceCompletePhase3Reset @ 0x1C004F560 (ACPIDeviceCompletePhase3Reset.c)
 *     ACPIDevicePowerProcessPhase5SystemSubPhase6 @ 0x1C0051080 (ACPIDevicePowerProcessPhase5SystemSubPhase6.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0008120 (ACPIPowerScheduleDpc.c)
 */

void __fastcall ACPIDeviceCompletePhase3Common(volatile signed __int32 *a1, signed __int32 a2)
{
  KIRQL v2; // bl

  _InterlockedCompareExchange(a1, a2, 1);
  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v2);
}
