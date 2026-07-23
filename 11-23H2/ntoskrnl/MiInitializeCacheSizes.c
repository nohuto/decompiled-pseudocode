/*
 * XREFs of MiInitializeCacheSizes @ 0x140B6EF9C
 * Callers:
 *     MiInitializeColors @ 0x140B6EF18 (MiInitializeColors.c)
 * Callees:
 *     MiInitializeLargePageColorSizes @ 0x1403AE590 (MiInitializeLargePageColorSizes.c)
 */

__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned int SecondLevelCacheAssociativity; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  int v4; // r8d
  unsigned int v5; // eax
  int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  _PROCESSOR_CACHE_TYPE Type; // eax
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140C65AD8 = SecondLevelCacheSize;
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
    if ( qword_140C6F6D0 < 0x80000 )
      SecondLevelCacheSize = qword_140C6F6D0 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140C65AFC = SecondLevelCacheSize;
  v3 = SecondLevelCacheSize >> 4;
  dword_140C65AF8 = SecondLevelCacheSize - 1;
  dword_140C65B88 = SecondLevelCacheSize >> 4;
  v4 = SecondLevelCacheSize & 0xF;
  if ( v4 )
    dword_140C65B88 = v3 + 1;
  v5 = v3 + 1;
  if ( !v4 )
    v5 = v3;
  if ( _BitScanReverse((unsigned int *)&v7, v5) )
    v5 = 1 << v7;
  dword_140C65B88 = v5;
  MiInitializeLargePageColorSizes();
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 )
      {
        Type = Cache->Type;
        if ( Type == CacheData || Type == CacheUnified )
          dword_140C65ADC = Cache->Size;
      }
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140C65ADC < 0x4000 )
    dword_140C65ADC = 0x4000;
  dword_140C65B0C = 256;
  return result;
}
