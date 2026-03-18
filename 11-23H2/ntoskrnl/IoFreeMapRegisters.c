/*
 * XREFs of IoFreeMapRegisters @ 0x14045B4A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

void __stdcall IoFreeMapRegisters(PDMA_ADAPTER DmaAdapter, PVOID MapRegisterBase, ULONG NumberOfMapRegisters)
{
  DmaAdapter->DmaOperations->FreeMapRegisters(DmaAdapter, MapRegisterBase, NumberOfMapRegisters);
}
