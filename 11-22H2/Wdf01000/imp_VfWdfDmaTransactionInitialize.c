/*
 * XREFs of imp_VfWdfDmaTransactionInitialize @ 0x1C00B4670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall imp_VfWdfDmaTransactionInitialize(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        __int64 DmaDirection,
        _MDL *Mdl,
        void *VirtualAddress,
        unsigned __int64 Length)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDMATRANSACTION__ *, unsigned __int8 (__fastcall *)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *), __int64, _MDL *, void *, unsigned __int64))WdfVersion.Functions.pfnWdfDmaTransactionInitialize)(
           DriverGlobals,
           DmaTransaction,
           EvtProgramDmaFunction,
           DmaDirection,
           Mdl,
           VirtualAddress,
           Length);
}
