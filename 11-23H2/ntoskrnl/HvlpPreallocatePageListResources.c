/*
 * XREFs of HvlpPreallocatePageListResources @ 0x1409418E0
 * Callers:
 *     PopPreallocateHibernateMemory @ 0x1408010C4 (PopPreallocateHibernateMemory.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     MmAllocateIndependentPagesEx @ 0x14086C47C (MmAllocateIndependentPagesEx.c)
 */

__int64 HvlpPreallocatePageListResources()
{
  unsigned int v0; // ebx
  void *IndependentPages; // rax

  v0 = 0;
  if ( !HvlpFallbackScratchPage )
  {
    IndependentPages = (void *)MmAllocateIndependentPagesEx(0x1000uLL, -1, 0LL, 0);
    HvlpFallbackScratchPage = IndependentPages;
    if ( IndependentPages )
      memset(IndependentPages, 0, 0x1000uLL);
    else
      return (unsigned int)-1073741670;
  }
  return v0;
}
