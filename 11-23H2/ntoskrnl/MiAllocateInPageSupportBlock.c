/*
 * XREFs of MiAllocateInPageSupportBlock @ 0x140362FD4
 * Callers:
 *     MiGetInPageSupportBlock @ 0x1402E1574 (MiGetInPageSupportBlock.c)
 *     MiInitializePageFaultResources @ 0x140375A30 (MiInitializePageFaultResources.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 */

PVOID __fastcall MiAllocateInPageSupportBlock(int a1, unsigned int a2)
{
  return MiAllocatePool(64, a2 * ((-(__int64)(a1 != 0) & 0xFFFFFFFFFFFFF880uLL) + 2368), 0x6E496D4Du);
}
