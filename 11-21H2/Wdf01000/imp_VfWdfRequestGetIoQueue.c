/*
 * XREFs of imp_VfWdfRequestGetIoQueue @ 0x1C00C3C80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

WDFQUEUE__ *__fastcall imp_VfWdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetIoQueue(DriverGlobals, Request);
}
