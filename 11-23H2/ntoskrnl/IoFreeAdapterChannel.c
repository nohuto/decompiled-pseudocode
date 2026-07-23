/*
 * XREFs of IoFreeAdapterChannel @ 0x14045B880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeAdapterChannel(PDMA_ADAPTER DmaAdapter)
{
  ((void (*)(void))DmaAdapter->DmaOperations->FreeAdapterChannel)();
}
