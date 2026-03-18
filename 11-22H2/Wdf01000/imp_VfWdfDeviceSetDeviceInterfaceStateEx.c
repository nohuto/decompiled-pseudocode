/*
 * XREFs of imp_VfWdfDeviceSetDeviceInterfaceStateEx @ 0x1C00B4180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetDeviceInterfaceStateEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        const _GUID *InterfaceClassGUID,
        const _UNICODE_STRING *ReferenceString,
        unsigned __int8 IsInterfaceEnabled)
{
  WdfVersion.Functions.pfnWdfDeviceSetDeviceInterfaceStateEx(
    DriverGlobals,
    Device,
    InterfaceClassGUID,
    ReferenceString,
    IsInterfaceEnabled);
}
