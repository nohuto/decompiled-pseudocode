/*
 * XREFs of imp_VfWdfMemoryAssignBuffer @ 0x1C00B5E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfMemoryAssignBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        void *Buffer,
        unsigned __int64 BufferSize)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFMEMORY__ *, void *, unsigned __int64))WdfVersion.Functions.pfnWdfMemoryAssignBuffer)(
           DriverGlobals,
           Memory,
           Buffer,
           BufferSize);
}
