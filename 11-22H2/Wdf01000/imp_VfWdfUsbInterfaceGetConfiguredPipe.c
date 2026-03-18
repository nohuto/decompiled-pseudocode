/*
 * XREFs of imp_VfWdfUsbInterfaceGetConfiguredPipe @ 0x1C00B71A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFUSBPIPE__ *__fastcall imp_VfWdfUsbInterfaceGetConfiguredPipe(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBINTERFACE__ *UsbInterface,
        __int64 PipeIndex,
        _WDF_USB_PIPE_INFORMATION *PipeInfo)
{
  return WdfVersion.Functions.pfnWdfUsbInterfaceGetConfiguredPipe(DriverGlobals, UsbInterface, PipeIndex, PipeInfo);
}
