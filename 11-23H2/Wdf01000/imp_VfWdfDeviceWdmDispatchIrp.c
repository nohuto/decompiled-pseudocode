/*
 * XREFs of imp_VfWdfDeviceWdmDispatchIrp @ 0x1C00B42F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceWdmDispatchIrp(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _IRP *Irp,
        void *DispatchContext)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, _IRP *, void *))WdfVersion.Functions.pfnWdfDeviceWdmDispatchIrp)(
           DriverGlobals,
           Device,
           Irp,
           DispatchContext);
}
