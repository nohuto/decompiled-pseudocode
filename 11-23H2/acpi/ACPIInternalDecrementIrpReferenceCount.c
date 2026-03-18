/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C002E548
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C00027E0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C001D6A0 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C001D820 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C001D960 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001DAB0 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0023E70 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C00285E0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0028F10 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FCA0 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BD0 (ACPIThermalGetSensorDevice.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C007BDF0 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 728), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 752), 0, 0);
  return result;
}
