/*
 * XREFs of imp_VfWdfRequestGetIoQueue @ 0x1C00B6C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFQUEUE__ *__fastcall imp_VfWdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetIoQueue(DriverGlobals, Request);
}
