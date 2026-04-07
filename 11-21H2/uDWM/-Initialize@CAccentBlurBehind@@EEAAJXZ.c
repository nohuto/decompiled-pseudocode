/*
 * XREFs of ?Initialize@CAccentBlurBehind@@EEAAJXZ @ 0x180097B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x180046D3C (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CAccentBlurBehind::Initialize(struct CRenderDataVisual **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CRenderDataVisual::Create(this + 36);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x507u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x506u);
  }
  return v3;
}
