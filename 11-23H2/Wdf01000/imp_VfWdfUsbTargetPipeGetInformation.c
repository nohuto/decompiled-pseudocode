/*
 * XREFs of imp_VfWdfUsbTargetPipeGetInformation @ 0x1C00B7820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfUsbTargetPipeGetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_PIPE_INFORMATION *PipeInformation)
{
  WdfVersion.Functions.pfnWdfUsbTargetPipeGetInformation(DriverGlobals, Pipe, PipeInformation);
}
