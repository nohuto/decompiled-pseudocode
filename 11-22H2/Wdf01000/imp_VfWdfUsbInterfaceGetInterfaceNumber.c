/*
 * XREFs of imp_VfWdfUsbInterfaceGetInterfaceNumber @ 0x1C00B7230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbInterfaceGetInterfaceNumber(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBINTERFACE__ *))WdfVersion.Functions.pfnWdfUsbInterfaceGetInterfaceNumber)(
           DriverGlobals,
           UsbInterface);
}
