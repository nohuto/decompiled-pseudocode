/*
 * XREFs of imp_VfWdfRegistryQueryUnicodeString @ 0x1C00B6620
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfRegistryQueryUnicodeString(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFKEY__ *Key,
        const _UNICODE_STRING *ValueName,
        unsigned __int16 *ValueByteLength,
        _UNICODE_STRING *Value)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFKEY__ *, const _UNICODE_STRING *, unsigned __int16 *, _UNICODE_STRING *))WdfVersion.Functions.pfnWdfRegistryQueryUnicodeString)(
           DriverGlobals,
           Key,
           ValueName,
           ValueByteLength,
           Value);
}
