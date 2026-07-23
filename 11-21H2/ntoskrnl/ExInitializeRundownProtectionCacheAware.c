/*
 * XREFs of ExInitializeRundownProtectionCacheAware @ 0x14074D160
 * Callers:
 *     <none>
 * Callees:
 *     KeGetRecommendedSharedDataAlignment @ 0x1402D3250 (KeGetRecommendedSharedDataAlignment.c)
 */

void __stdcall ExInitializeRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware, SIZE_T RunRefSize)
{
  unsigned int v2; // esi
  ULONG RecommendedSharedDataAlignment; // r8d
  char *v4; // rdi
  int v6; // eax
  unsigned int v7; // r8d
  int v8; // edx

  v2 = RunRefSize - 24;
  RecommendedSharedDataAlignment = 8;
  v4 = (char *)RunRefCacheAware + 24;
  if ( (_DWORD)RunRefSize == 32 )
  {
    v6 = 1;
  }
  else
  {
    RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
    v6 = v2 / RecommendedSharedDataAlignment - 1;
    v4 = (char *)(~(unsigned __int64)(RecommendedSharedDataAlignment - 1) & (unsigned __int64)&v4[RecommendedSharedDataAlignment
                                                                                                - 1]);
  }
  *((_DWORD *)RunRefCacheAware + 4) = RecommendedSharedDataAlignment;
  v7 = 0;
  *(_QWORD *)RunRefCacheAware = v4;
  *((_DWORD *)RunRefCacheAware + 5) = v6;
  for ( *((_QWORD *)RunRefCacheAware + 1) = 195938833LL;
        v7 < *((_DWORD *)RunRefCacheAware + 5);
        *(_QWORD *)((unsigned int)(*((_DWORD *)RunRefCacheAware + 4) * v8) + *(_QWORD *)RunRefCacheAware) = 0LL )
  {
    v8 = v7 % *((_DWORD *)RunRefCacheAware + 5);
    ++v7;
  }
}
