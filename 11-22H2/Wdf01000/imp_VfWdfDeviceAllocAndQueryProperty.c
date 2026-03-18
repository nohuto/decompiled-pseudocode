/*
 * XREFs of imp_VfWdfDeviceAllocAndQueryProperty @ 0x1C00B3720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDeviceAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        __int64 DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE__ *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfDeviceAllocAndQueryProperty)(
           DriverGlobals,
           Device,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory);
}
