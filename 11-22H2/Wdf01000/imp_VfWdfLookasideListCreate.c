/*
 * XREFs of imp_VfWdfLookasideListCreate @ 0x1C00B5E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfLookasideListCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *LookasideAttributes,
        unsigned __int64 BufferSize,
        __int64 PoolType,
        _WDF_OBJECT_ATTRIBUTES *MemoryAttributes,
        unsigned int PoolTag,
        WDFLOOKASIDE__ **Lookaside)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, _WDF_OBJECT_ATTRIBUTES *, unsigned __int64, __int64, _WDF_OBJECT_ATTRIBUTES *, unsigned int, WDFLOOKASIDE__ **))WdfVersion.Functions.pfnWdfLookasideListCreate)(
           DriverGlobals,
           LookasideAttributes,
           BufferSize,
           PoolType,
           MemoryAttributes,
           PoolTag,
           Lookaside);
}
