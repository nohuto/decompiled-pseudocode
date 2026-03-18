/*
 * XREFs of ?GetD2DBitmap@CColorKeyBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A1CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018F24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CColorKeyBitmapRealization::GetD2DBitmap(
        CColorKeyBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  int CachedBitmap; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  CachedBitmap = CD2DBitmapCache::GetCachedBitmap((CColorKeyBitmapRealization *)((char *)this - 152), a2, a3, a4);
  v6 = CachedBitmap;
  if ( CachedBitmap < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0LL, CachedBitmap, 0x9Du);
  return v6;
}
