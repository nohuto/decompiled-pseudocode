/*
 * XREFs of imp_VfWdfIoTargetAllocAndQueryTargetProperty @ 0x1C00B5870
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfIoTargetAllocAndQueryTargetProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget,
        __int64 DeviceProperty,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFIOTARGET__ *, __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfIoTargetAllocAndQueryTargetProperty)(
           DriverGlobals,
           IoTarget,
           DeviceProperty,
           PoolType,
           PropertyMemoryAttributes,
           PropertyMemory);
}
