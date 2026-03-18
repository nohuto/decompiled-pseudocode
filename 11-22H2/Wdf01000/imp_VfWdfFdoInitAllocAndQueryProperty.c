/*
 * XREFs of imp_VfWdfFdoInitAllocAndQueryProperty @ 0x1C00B4AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfFdoInitAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDEVICE_INIT *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfFdoInitAllocAndQueryProperty)(
           DriverGlobals,
           DeviceInit,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory);
}
