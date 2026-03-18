/*
 * XREFs of imp_VfWdfDeviceClearRemovalRelationsDevices @ 0x1C00B3840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceClearRemovalRelationsDevices(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  WdfVersion.Functions.pfnWdfDeviceClearRemovalRelationsDevices(DriverGlobals, Device);
}
