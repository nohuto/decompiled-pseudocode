/*
 * XREFs of imp_VfWdfDeviceRetrieveDeviceInterfaceString @ 0x1C00B40A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceRetrieveDeviceInterfaceString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        WDFSTRING__ *String)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, const _GUID *, const _UNICODE_STRING *, WDFSTRING__ *))WdfVersion.Functions.pfnWdfDeviceRetrieveDeviceInterfaceString)(
           DriverGlobals,
           Device,
           InterfaceClassGUID,
           ReferenceString,
           String);
}
