/*
 * XREFs of RaspClearCache @ 0x140AED540
 * Callers:
 *     BgpTxtDestroyRegion @ 0x140AEC904 (BgpTxtDestroyRegion.c)
 *     AnFwDisplayProgressIndicator @ 0x140AED598 (AnFwDisplayProgressIndicator.c)
 *     AnFwpDisableProgressTimer @ 0x140AEF610 (AnFwpDisableProgressTimer.c)
 *     ResFwFreeContext @ 0x140AF1EE4 (ResFwFreeContext.c)
 * Callees:
 *     RaspDestroyCachedBitmap @ 0x140AEDB20 (RaspDestroyCachedBitmap.c)
 */

__int64 *RaspClearCache()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  while ( 1 )
  {
    result = (__int64 *)RaspBitmapCache;
    v1 = *(_QWORD *)RaspBitmapCache;
    if ( *(__int64 **)(RaspBitmapCache + 8) != &RaspBitmapCache || *(_QWORD *)(v1 + 8) != RaspBitmapCache )
      __fastfail(3u);
    RaspBitmapCache = *(_QWORD *)RaspBitmapCache;
    *(_QWORD *)(v1 + 8) = &RaspBitmapCache;
    if ( result == &RaspBitmapCache )
      break;
    RaspDestroyCachedBitmap(result);
  }
  dword_140C0E3B4 = 0;
  return result;
}
