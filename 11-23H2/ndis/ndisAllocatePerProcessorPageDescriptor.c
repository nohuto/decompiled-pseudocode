/*
 * XREFs of ndisAllocatePerProcessorPageDescriptor @ 0x1C0032568
 * Callers:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C001B418 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisInitializePerProcessorSlotAllocator@@YAXXZ @ 0x1C0162A3C (-ndisInitializePerProcessorSlotAllocator@@YAXXZ.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     ?ndisAllocateNumaStripedPages@@YAPEAXXZ @ 0x1C011FCF0 (-ndisAllocateNumaStripedPages@@YAPEAXXZ.c)
 */

__int64 ndisAllocatePerProcessorPageDescriptor()
{
  unsigned int v0; // edi
  char *NumaStripedPages; // rax
  __int64 Pool2; // rbx
  unsigned int *v3; // rdx
  __int64 result; // rax

  v0 = 0;
  if ( !KeGetCurrentIrql() )
  {
    NumaStripedPages = (char *)ndisAllocateNumaStripedPages();
    Pool2 = (__int64)NumaStripedPages;
    if ( NumaStripedPages )
    {
      memset(NumaStripedPages + 4096, 0, ndisMaxNumberOfProcessors << 12);
      goto LABEL_4;
    }
    return 0LL;
  }
  Pool2 = ExAllocatePool2(72LL, (ndisMaxNumberOfProcessors + 1) << 12, 1835091022);
  if ( !Pool2 )
    return 0LL;
LABEL_4:
  v3 = (unsigned int *)(Pool2 + 20);
  do
    *v3++ = ++v0 | 0xFE000000;
  while ( v0 < 0x1FF );
  *(_DWORD *)(Pool2 + 2064) = -16777217;
  result = Pool2;
  *(_DWORD *)(Pool2 + 16) = -33554432;
  return result;
}
