/*
 * XREFs of imp_VfWdfUsbTargetPipeConfigContinuousReader @ 0x1C00B7730
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFUSBPIPE__ *, _WDF_USB_CONTINUOUS_READER_CONFIG *))WdfVersion.Functions.pfnWdfUsbTargetPipeConfigContinuousReader)(
           DriverGlobals,
           Pipe,
           Config);
}
