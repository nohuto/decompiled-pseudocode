/*
 * XREFs of imp_VfWdfDeviceSetAlignmentRequirement @ 0x1C00B40F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDeviceSetAlignmentRequirement(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 AlignmentRequirement)
{
  WdfVersion.Functions.pfnWdfDeviceSetAlignmentRequirement(DriverGlobals, Device, AlignmentRequirement);
}
