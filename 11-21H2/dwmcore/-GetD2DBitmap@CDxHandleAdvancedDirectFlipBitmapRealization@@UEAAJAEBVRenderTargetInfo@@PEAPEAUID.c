/*
 * XREFs of ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x1802A3770
 * Callers:
 *     ?GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x18010BF50 (-GetD2DBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@A@EAAJAEBVRenderTargetInf.c)
 * Callees:
 *     ?GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018E9C (-GetD2DBitmap@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z @ 0x180018F24 (-GetCachedBitmap@CD2DBitmapCache@@QEAAJAEBVRenderTargetInfo@@PEAPEAUID2D1Bitmap1@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802A3EE8 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::GetD2DBitmap(
        __int64 (__fastcall ***this)(char *),
        const struct RenderTargetInfo *a2,
        struct ID2D1Bitmap1 **a3,
        char a4)
{
  char v8; // al
  CDxHandleAdvancedDirectFlipBitmapRealization *v9; // rcx
  int updated; // eax
  __int64 v11; // rcx
  unsigned int D2DBitmap; // ebx
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  *a3 = 0LL;
  v8 = (**(this - 14))((char *)this - 112);
  v9 = (CDxHandleAdvancedDirectFlipBitmapRealization *)(this - 64);
  if ( v8 )
  {
    updated = CDxHandleAdvancedDirectFlipBitmapRealization::UpdateDecodeBitmap(v9);
    D2DBitmap = updated;
    if ( updated < 0 )
    {
      v15 = 117;
      goto LABEL_11;
    }
    v13 = (__int64)*(this - 28);
    if ( *(_BYTE *)(v13 + 152) )
    {
      D2DBitmap = CRenderTargetBitmap::GetD2DBitmap((CRenderTargetBitmap *)(v13 + 240), a2, a3, a4);
      if ( (D2DBitmap & 0x80000000) == 0 )
        return D2DBitmap;
    }
    else
    {
      *a3 = 0LL;
      D2DBitmap = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, D2DBitmap, 0x79u);
    return D2DBitmap;
  }
  updated = CD2DBitmapCache::GetCachedBitmap(v9, a2, a3, a4);
  D2DBitmap = updated;
  if ( updated < 0 )
  {
    v15 = 113;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, updated, v15);
  }
  return D2DBitmap;
}
