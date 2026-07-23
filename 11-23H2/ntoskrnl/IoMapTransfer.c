/*
 * XREFs of IoMapTransfer @ 0x140501650
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  return (PHYSICAL_ADDRESS)((__int64 (__fastcall *)(PDMA_ADAPTER, PMDL, PVOID, PVOID, PULONG, BOOLEAN))DmaAdapter->DmaOperations->MapTransfer)(
                             DmaAdapter,
                             Mdl,
                             MapRegisterBase,
                             CurrentVa,
                             Length,
                             WriteToDevice);
}
