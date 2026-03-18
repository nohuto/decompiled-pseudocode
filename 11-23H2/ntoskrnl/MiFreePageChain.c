/*
 * XREFs of MiFreePageChain @ 0x14046CC52
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x14026A980 (MiCompletePrivateZeroFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1406324AC (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065D6C0 (MiMakeVaRangePhysicallyContiguous.c)
 *     MiResolvePageFileFault @ 0x14066B4BC (MiResolvePageFileFault.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402E7F20 (MiReleaseFreshPage.c)
 */

unsigned __int64 __fastcall MiFreePageChain(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax

  if ( a1 )
  {
    do
    {
      v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFLL;
      MiReleaseFreshPage(a1);
      result = 0x3FFFFFFFFFLL;
      if ( v1 == 0x3FFFFFFFFFLL )
        break;
      result = 0xFFFFDE0000000000uLL;
      a1 = 48 * v1 - 0x220000000000LL;
    }
    while ( 48 * v1 != 0x220000000000LL );
  }
  return result;
}
