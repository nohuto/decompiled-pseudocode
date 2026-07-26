/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C0037574
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FD30 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
