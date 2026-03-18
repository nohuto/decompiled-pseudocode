/*
 * XREFs of imp_VfWdfMemoryCreatePreallocated @ 0x1C00B5F50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, void *, unsigned __int64, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfMemoryCreatePreallocated)(
           DriverGlobals,
           Attributes,
           Buffer,
           BufferSize,
           Memory);
}
