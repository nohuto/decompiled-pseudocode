/*
 * XREFs of imp_VfWdfDmaTransactionGetRequest @ 0x1C00B4630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

WDFREQUEST__ *__fastcall imp_VfWdfDmaTransactionGetRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  return WdfVersion.Functions.pfnWdfDmaTransactionGetRequest(DriverGlobals, DmaTransaction);
}
