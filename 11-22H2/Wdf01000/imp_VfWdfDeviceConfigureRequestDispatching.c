/*
 * XREFs of imp_VfWdfDeviceConfigureRequestDispatching @ 0x1C00B3860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceConfigureRequestDispatching(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        WDFQUEUE__ *Queue,
        __int64 RequestType)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, WDFQUEUE__ *, __int64))WdfVersion.Functions.pfnWdfDeviceConfigureRequestDispatching)(
           DriverGlobals,
           Device,
           Queue,
           RequestType);
}
