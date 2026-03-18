/*
 * XREFs of IoFreeAdapterChannel @ 0x14045AE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  ((void (*)(void))DmaAdapter->DmaOperations->FreeAdapterChannel)();
}
