/*
 * XREFs of imp_VfWdfDmaTransactionSetDeviceAddressOffset @ 0x1C00B4760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall imp_VfWdfDmaTransactionSetDeviceAddressOffset(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        __int64 Offset)
{
  WdfVersion.Functions.pfnWdfDmaTransactionSetDeviceAddressOffset(DriverGlobals, DmaTransaction, Offset);
}
