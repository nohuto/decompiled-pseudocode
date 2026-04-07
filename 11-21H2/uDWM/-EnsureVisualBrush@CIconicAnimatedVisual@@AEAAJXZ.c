/*
 * XREFs of ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800BE1C4
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x1800BE8B0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001A2C0 (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800BE0D8 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureVisualBrush(CIconicAnimatedVisual *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int Brush; // eax
  __int64 v6; // [rsp+20h] [rbp-28h]

  v2 = CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( !*((_QWORD *)this + 39) )
    {
      Brush = CSecondaryWindowRepresentation::GetBrush(
                *((_QWORD *)this + 37),
                (__int64)this + 336,
                (volatile signed __int32 **)this + 40,
                (CBaseObject **)this + 41,
                v6,
                (CBaseObject **)this + 42,
                (CBaseObject **)this + 43,
                (CBaseObject **)this + 39);
      v3 = Brush;
      if ( Brush < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Brush, 0x6Fu);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x63u);
  }
  return v3;
}
