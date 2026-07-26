/*
 * XREFs of ?ndisFreeMappingAddress@@YAXPEAX@Z @ 0x1C0037704
 * Callers:
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FCF0 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeMappingAddress(void *a1)
{
  MmFreeMappingAddress(a1, 0x6C53444Eu);
}
