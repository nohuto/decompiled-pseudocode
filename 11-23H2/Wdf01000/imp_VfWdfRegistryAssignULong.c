/*
 * XREFs of imp_VfWdfRegistryAssignULong @ 0x1C00B6440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryAssignULong(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        __int64 Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, __int64))WdfVersion.Functions.pfnWdfRegistryAssignULong)(
           DriverGlobals,
           Key,
           ValueName,
           Value);
}
