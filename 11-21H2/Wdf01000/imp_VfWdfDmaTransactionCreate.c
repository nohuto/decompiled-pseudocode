/*
 * XREFs of imp_VfWdfDmaTransactionCreate @ 0x1C00C1510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMAENABLER__ *DmaEnabler,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFDMATRANSACTION__ **DmaTransaction)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMAENABLER__ *, _WDF_OBJECT_ATTRIBUTES *, WDFDMATRANSACTION__ **))WdfVersion.Functions.pfnWdfDmaTransactionCreate)(
           DriverGlobals,
           DmaEnabler,
           Attributes,
           DmaTransaction);
}
