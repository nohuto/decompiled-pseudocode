/*
 * XREFs of imp_VfWdfDeviceAddDependentUsageDeviceObject @ 0x1C00B36C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceAddDependentUsageDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _DEVICE_OBJECT *DependentDevice)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _DEVICE_OBJECT *))WdfVersion.Functions.pfnWdfDeviceAddDependentUsageDeviceObject)(
           DriverGlobals,
           Device,
           DependentDevice);
}
