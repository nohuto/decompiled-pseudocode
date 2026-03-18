/*
 * XREFs of imp_VfWdfIoQueueGetDevice @ 0x1C00B5140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoQueueGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFQUEUE__ *Queue)
{
  return WdfVersion.Functions.pfnWdfIoQueueGetDevice(DriverGlobals, Queue);
}
