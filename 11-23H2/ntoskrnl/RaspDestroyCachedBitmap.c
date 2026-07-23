/*
 * XREFs of RaspDestroyCachedBitmap @ 0x140AEDB20
 * Callers:
 *     BgpRasPrintGlyph @ 0x140385904 (BgpRasPrintGlyph.c)
 *     RaspClearCache @ 0x140AED540 (RaspClearCache.c)
 *     RaspAddCacheEntry @ 0x140AEDB60 (RaspAddCacheEntry.c)
 * Callees:
 *     RaspRectangleDestroy @ 0x140385E6C (RaspRectangleDestroy.c)
 *     RaspFreeMemory @ 0x140386264 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspDestroyCachedBitmap(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v5 = 0LL;
  RaspRectangleDestroy(v2, (__int64)&v4);
  return RaspFreeMemory(a1, &v4);
}
