/*
 * XREFs of imp_VfWdfUsbInterfaceSelectSetting @ 0x1C00B72B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbInterfaceSelectSetting(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        _WDF_OBJECT_ATTRIBUTES *PipesAttributes,
        _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *Params)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *, _WDF_OBJECT_ATTRIBUTES *, _WDF_USB_INTERFACE_SELECT_SETTING_PARAMS *))WdfVersion.Functions.pfnWdfUsbInterfaceSelectSetting)(
           DriverGlobals,
           UsbInterface,
           PipesAttributes,
           Params);
}
