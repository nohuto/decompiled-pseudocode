/*
 * XREFs of ?Initialize@CImage@@EEAAJXZ @ 0x180039180
 * Callers:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x1800391BC (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x180038D40 (-Initialize@CVisual@@MEAAJXZ.c)
 */

__int64 __fastcall CImage::Initialize(CImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x14u);
  else
    *((_DWORD *)this + 74) = 1;
  return v3;
}
