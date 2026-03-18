/*
 * XREFs of HalReadDmaCounter @ 0x140500FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

ULONG __stdcall HalReadDmaCounter(PDMA_ADAPTER DmaAdapter)
{
  return ((__int64 (*)(void))DmaAdapter->DmaOperations->ReadDmaCounter)();
}
