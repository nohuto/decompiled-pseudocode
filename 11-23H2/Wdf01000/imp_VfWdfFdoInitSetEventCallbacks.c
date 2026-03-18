/*
 * XREFs of imp_VfWdfFdoInitSetEventCallbacks @ 0x1C00B4C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfFdoInitSetEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_FDO_EVENT_CALLBACKS *FdoEventCallbacks)
{
  WdfVersion.Functions.pfnWdfFdoInitSetEventCallbacks(DriverGlobals, DeviceInit, FdoEventCallbacks);
}
