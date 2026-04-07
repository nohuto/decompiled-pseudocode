/*
 * XREFs of ?Initialize@CDesktopThumbnailCVIVisual@@MEAAJXZ @ 0x1800B2B90
 * Callers:
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x1800B2188 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::Initialize(CDesktopThumbnailCVIVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 >= 0 )
    *((_BYTE *)this + 344) = 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x2D9u);
  return v3;
}
