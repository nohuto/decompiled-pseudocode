/*
 * XREFs of ?_UpdateAcrylicBlurBehind@CAccent@@IEAAJXZ @ 0x18004C7B0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000CD38 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z @ 0x1800552C8 (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@_NPEBN@Z.c)
 */

__int64 __fastcall CAccent::_UpdateAcrylicBlurBehind(CAccentAcrylicBlurBehind **this)
{
  unsigned int v1; // edi
  struct CVisual *v4; // rdx
  CBaseObject *v5; // rcx
  int updated; // eax
  struct CVisual *v7; // rdx
  CAccentAcrylicBlurBehind **v8; // rcx
  int inserted; // eax
  int v10; // eax

  v1 = 0;
  if ( this[44] && *((_BYTE *)this + 405) )
  {
    CRenderDataVisual::ClearInstructions((CRenderDataVisual *)this);
    v4 = this[41];
    if ( v4 )
    {
      VisualCollection::Remove((VisualCollection *)(this + 4), v4);
      v5 = this[41];
      if ( v5 )
      {
        CBaseObject::Release(v5);
        this[41] = 0LL;
      }
    }
    *((_OWORD *)this[44] + 22) = *((_OWORD *)this + 39);
    updated = CAccentAcrylicBlurBehind::UpdateAcrylicBlurBehind(
                this[44],
                (const struct ACCENT_POLICY *)(this + 36),
                1,
                0LL);
    v1 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x693u);
    }
    else
    {
      v7 = this[44];
      v8 = (CAccentAcrylicBlurBehind **)*((_QWORD *)v7 + 3);
      if ( v8 != this )
      {
        if ( v8 )
        {
          v10 = VisualCollection::Remove((VisualCollection *)(v8 + 4), v7);
          v1 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x69Bu);
            return v1;
          }
          v7 = this[44];
        }
        inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), v7, 0LL, 0, 1);
        v1 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x69Du);
      }
    }
  }
  return v1;
}
