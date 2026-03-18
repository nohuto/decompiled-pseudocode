/*
 * XREFs of imp_VfWdfDeviceEnqueueRequest @ 0x1C00B3980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceEnqueueRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfDeviceEnqueueRequest)(
           DriverGlobals,
           Device,
           Request);
}
