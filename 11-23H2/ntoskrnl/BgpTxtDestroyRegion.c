/*
 * XREFs of BgpTxtDestroyRegion @ 0x140AEC904
 * Callers:
 *     BgpFwLibraryDisable @ 0x140AEC1EC (BgpFwLibraryDisable.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEE4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEF564 (BgpDisplayCharacterDestroyContext.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140386280 (BgpFwFreeMemory.c)
 *     RaspClearCache @ 0x140AED540 (RaspClearCache.c)
 *     BgpGxRectangleDestroy @ 0x140AEDA70 (BgpGxRectangleDestroy.c)
 */

void __fastcall BgpTxtDestroyRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rax

  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      BgpGxRectangleDestroy(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      BgpGxRectangleDestroy(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      v4 = TxtpTextCache;
      v5 = *(_QWORD *)TxtpTextCache;
      if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
FatalListEntryError_124:
        __fastfail(3u);
      while ( 1 )
      {
        if ( *(_QWORD **)(v5 + 8) != v4 )
          goto FatalListEntryError_124;
        TxtpTextCache = (_UNKNOWN *)v5;
        *(_QWORD *)(v5 + 8) = &TxtpTextCache;
        if ( v4 == &TxtpTextCache )
          break;
        BgpGxRectangleDestroy(v4[6]);
        BgpFwFreeMemory((__int64)v4);
        v4 = TxtpTextCache;
        if ( *((_UNKNOWN ***)TxtpTextCache + 1) != &TxtpTextCache )
          goto FatalListEntryError_124;
        v5 = *(_QWORD *)TxtpTextCache;
      }
      dword_140C043D8 = 0;
      if ( RasterizerInitialized )
        RaspClearCache();
    }
    BgpFwFreeMemory(a1);
  }
}
