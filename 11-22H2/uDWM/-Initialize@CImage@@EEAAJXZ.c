/*
 * XREFs of ?Initialize@CImage@@EEAAJXZ @ 0x180047310
 * Callers:
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CImage::Initialize(CImage *this)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CVisual::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x14u, 0LL);
  else
    *((_DWORD *)this + 74) = 1;
  return v3;
}
