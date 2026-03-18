/*
 * XREFs of SearchFntCacheNewLink @ 0x1C0285C74
 * Callers:
 *     UmfdLoadFontFileView @ 0x1C0010120 (UmfdLoadFontFileView.c)
 *     ?PutFNTCacheCheckSum@@YAXKK@Z @ 0x1C00E2A70 (-PutFNTCacheCheckSum@@YAXKK@Z.c)
 *     EngFntCacheAllocInternal @ 0x1C028603C (EngFntCacheAllocInternal.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0x1C000D1C8 (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0x1C0285D0C (bFntCacheCreateHLink.c)
 */

__int64 __fastcall SearchFntCacheNewLink(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v3; // r8
  __int64 v4; // r11
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = qword_1C0335DA8;
  v6 = 0LL;
  SearchFNTCacheHlink(a1, &v6, *(_QWORD *)qword_1C0335DA8);
  v4 = v6;
  if ( !v6 )
  {
    if ( *(_DWORD *)(v1 + 8) < *(_DWORD *)(v3 + 16) && (unsigned int)bFntCacheCreateHLink(a1) )
    {
      v4 = *(_QWORD *)v1 + 80 * (*(unsigned int *)(v1 + 8) + 4LL);
      *(_DWORD *)v4 = a1;
      *(_DWORD *)(v4 + 4) = 0;
      *(_DWORD *)(v4 + 8) = -1;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)(v4 + 24) = 0;
      *(_DWORD *)(v4 + 12) = 0;
      ++*(_DWORD *)(v1 + 8);
    }
    else
    {
      *(_DWORD *)(v1 + 16) |= 2u;
    }
  }
  return v4;
}
