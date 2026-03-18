/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x1C000776C
 * Callers:
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C0002CC0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0006A34 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0006CE8 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C0027B30 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C004B044 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C004CC70 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPITableUnload @ 0x1C0060860 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C0007924 (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(a1, &ACPIInitPowerRequestCompletion, &Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}
