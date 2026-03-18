/*
 * XREFs of imp_VfWdfRegistryQueryULong @ 0x1C00B6600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned int *Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, unsigned int *))WdfVersion.Functions.pfnWdfRegistryQueryULong)(
           DriverGlobals,
           Key,
           ValueName,
           Value);
}
