/*
 * XREFs of imp_VfWdfMemoryGetBuffer @ 0x1C00C2F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall imp_VfWdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  return WdfVersion.Functions.pfnWdfMemoryGetBuffer(DriverGlobals, Memory, BufferSize);
}
