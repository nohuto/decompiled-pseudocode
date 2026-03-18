/*
 * XREFs of MiFreePageChain @ 0x1403936C0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140321F70 (MiCompletePrivateZeroFault.c)
 *     MiResolvePageFileFault @ 0x1403927C4 (MiResolvePageFileFault.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x140594F80 (MiPrefetchReleasePreallocatedPages.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x1405B4BA8 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
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
