/*
 * XREFs of imp_VfWdfPdoInitAssignDeviceID @ 0x1C00B6240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfPdoInitAssignDeviceID(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceID)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfPdoInitAssignDeviceID)(
           DriverGlobals,
           DeviceInit,
           DeviceID);
}
