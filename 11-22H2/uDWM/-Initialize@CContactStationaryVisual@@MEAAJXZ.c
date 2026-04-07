/*
 * XREFs of ?Initialize@CContactStationaryVisual@@MEAAJXZ @ 0x1800B2BF0
 * Callers:
 *     ??$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z @ 0x1800AEA50 (--$CreateTouchVisual@VCContactStationaryVisual@@@@YAJ_KPEAPEAVCContactStationaryVisual@@@Z.c)
 * Callees:
 *     ?Initialize@CVisual@@MEAAJXZ @ 0x18001E800 (-Initialize@CVisual@@MEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180022C70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18004722C (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CContactStationaryVisual::Initialize(struct CImage **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  int inserted; // eax
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v2 = CVisual::Initialize((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CImage::Create(this + 47);
    v3 = v4;
    if ( v4 >= 0 )
    {
      inserted = VisualCollection::InsertRelative(
                   (VisualCollection *)(this + 4),
                   (unsigned __int64)this[47],
                   0LL,
                   0,
                   v7);
      v3 = inserted;
      if ( inserted >= 0 )
      {
        *((_DWORD *)this + 106) = 0;
        this[45] = 0LL;
        this[46] = 0LL;
        *((_BYTE *)this + 288) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x3Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x3Eu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x3Cu);
  }
  return v3;
}
