/*
 * XREFs of imp_VfWdfCxDeviceInitGetTypedContextWorker @ 0x1C00B35C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfCxDeviceInitGetTypedContextWorker(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _WDF_OBJECT_CONTEXT_TYPE_INFO *TypeInfo)
{
  return WdfVersion.Functions.pfnWdfCxDeviceInitGetTypedContextWorker(DriverGlobals, DeviceInit, TypeInfo);
}
