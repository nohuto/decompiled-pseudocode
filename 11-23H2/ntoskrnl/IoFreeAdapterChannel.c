/*
 * XREFs of IoFreeAdapterChannel @ 0x14045B480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  ((void (*)(void))DmaAdapter->DmaOperations->FreeAdapterChannel)();
}
