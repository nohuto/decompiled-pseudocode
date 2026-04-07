/*
 * XREFs of ?Initialize@CThumbnailVisual@@MEAAJXZ @ 0x18003A990
 * Callers:
 *     ?Create@CThumbnailVisual@@SAJPEAPEAV1@@Z @ 0x18003A9B4 (-Create@CThumbnailVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CThumbnailVisual::Initialize(CThumbnailVisual *this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = CVisual::Initialize(this);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v1, 0x33u);
  return v2;
}
