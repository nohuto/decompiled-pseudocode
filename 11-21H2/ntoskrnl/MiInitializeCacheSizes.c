/*
 * XREFs of MiInitializeCacheSizes @ 0x140AF6878
 * Callers:
 *     MiInitializeColors @ 0x140AF67F0 (MiInitializeColors.c)
 * Callees:
 *     MiInitializeLargePageColorSizes @ 0x1403B7AA0 (MiInitializeLargePageColorSizes.c)
 */

__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned int v2; // ecx
  unsigned int v3; // edx
  int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140C50718 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( (_BYTE)SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_140C590D0 < 0x80000 )
      SecondLevelCacheSize = qword_140C590D0 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140C5073C = SecondLevelCacheSize;
  dword_140C50738 = SecondLevelCacheSize - 1;
  v3 = (SecondLevelCacheSize >> 4) + 1;
  if ( (SecondLevelCacheSize & 0xF) == 0 )
    v3 = SecondLevelCacheSize >> 4;
  if ( _BitScanReverse((unsigned int *)&v5, v3) )
    v3 = 1 << v5;
  dword_140C507C8 = v3;
  MiInitializeLargePageColorSizes();
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_140C5071C = Cache->Size;
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140C5071C < 0x4000 )
    dword_140C5071C = 0x4000;
  dword_140C5074C = 256;
  return result;
}
