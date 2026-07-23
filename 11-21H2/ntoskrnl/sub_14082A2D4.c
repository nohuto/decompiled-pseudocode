/*
 * XREFs of sub_14082A2D4 @ 0x14082A2D4
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140B03C68 @ 0x140B03C68 (sub_140B03C68.c)
 * Callees:
 *     MmFreeContiguousMemorySpecifyCache @ 0x140213380 (MmFreeContiguousMemorySpecifyCache.c)
 *     sub_14025E060 @ 0x14025E060 (sub_14025E060.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_14054560C @ 0x14054560C (sub_14054560C.c)
 *     sub_14054CA0C @ 0x14054CA0C (sub_14054CA0C.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_1409312DC @ 0x1409312DC (sub_1409312DC.c)
 */

__int64 __fastcall sub_14082A2D4(_SLIST_HEADER *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  void *v4; // rdi
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  SIZE_T v8; // rdx
  MEMORY_CACHING_TYPE v9; // r8d
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  PHYSICAL_ADDRESS *v12; // rbp

  if ( !byte_140D0688B )
    return 0LL;
  v3 = 2LL;
  if ( (dword_140D0688C & 2) == 0 || (result = sub_1409312DC(), (int)result >= 0) )
  {
    v4 = 0LL;
    v5 = 0LL;
    if ( (dword_140D0688C & 0x80000) != 0 && (dword_140D0688C & 2) == 0 )
    {
      v6 = sub_14054CA0C();
      v5 = (void *)v6;
      if ( !v6 )
        return 3221225626LL;
      a1[2160].Region = v6;
    }
    if ( (dword_140D0688C & 2) == 0 && (dword_140D0688C & 0x8000) != 0 )
    {
      v7 = sub_14054CA0C();
      v4 = (void *)v7;
      if ( !v7 )
      {
LABEL_18:
        if ( v5 )
        {
          MmFreeContiguousMemorySpecifyCache(v5, v8, v9);
          a1[2160].Region = 0LL;
        }
        if ( v4 )
        {
          MmFreeContiguousMemorySpecifyCache(v4, v8, v9);
          a1[2187].Region = 0LL;
        }
        return 3221225626LL;
      }
      a1[2187].Region = v7;
    }
    v10 = sub_14025E060((__int64)a1);
    v11 = sub_140829CBC(0x6000uLL, v10, 0LL, 0);
    v12 = (PHYSICAL_ADDRESS *)v11;
    if ( v11 )
    {
      a1[2160].Alignment = v11;
      do
      {
        v12[2] = MmGetPhysicalAddress(v12);
        v12 += 512;
        --v3;
      }
      while ( v3 );
      sub_14054560C(a1);
      return 0LL;
    }
    goto LABEL_18;
  }
  return result;
}
