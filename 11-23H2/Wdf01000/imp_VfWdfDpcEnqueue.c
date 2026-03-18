/*
 * XREFs of imp_VfWdfDpcEnqueue @ 0x1C00B4880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *))WdfVersion.Functions.pfnWdfDpcEnqueue)(
           DriverGlobals,
           Dpc);
}
