/*
 * XREFs of imp_VfWdfDeviceAssignMofResourceName @ 0x1C00B37A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceAssignMofResourceName(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _UNICODE_STRING *MofResourceName)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _UNICODE_STRING *))WdfVersion.Functions.pfnWdfDeviceAssignMofResourceName)(
           DriverGlobals,
           Device,
           MofResourceName);
}
