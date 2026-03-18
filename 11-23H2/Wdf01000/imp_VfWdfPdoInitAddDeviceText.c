/*
 * XREFs of imp_VfWdfPdoInitAddDeviceText @ 0x1C00B6190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfPdoInitAddDeviceText(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _UNICODE_STRING *DeviceDescription,
        const _UNICODE_STRING *DeviceLocation,
        unsigned int LocaleId)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, const _UNICODE_STRING *, const _UNICODE_STRING *, unsigned int))WdfVersion.Functions.pfnWdfPdoInitAddDeviceText)(
           DriverGlobals,
           DeviceInit,
           DeviceDescription,
           DeviceLocation,
           LocaleId);
}
