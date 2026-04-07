/*
 * XREFs of ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x18009873C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180017244 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180018C60 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800198F0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18002730C (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180034D80 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180047980 (-_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180097DA4 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_GetSolidFillOpacity@CAccent@@IEAAMXZ @ 0x1800985FC (-_GetSolidFillOpacity@CAccent@@IEAAMXZ.c)
 *     ?_HasBlurBehind@CAccent@@IEAA_NXZ @ 0x180098630 (-_HasBlurBehind@CAccent@@IEAA_NXZ.c)
 */

void __fastcall CAccent::_UpdateAccentBlurBehind(CAccent *this)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx
  __m128i v5; // xmm0
  int v6; // eax
  float v7; // xmm0_4
  int v8; // eax
  struct CVisual *v9; // rbx
  int inserted; // eax
  float SolidFillOpacity; // xmm0_4
  _DWORD *v12; // rcx
  int updated; // eax
  __m128i v14; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 43) && *((_BYTE *)this + 405) )
  {
    CRenderDataVisual::ClearInstructions(this);
    CAccentBlurBehind::UpdateAccentBlurBehind(
      *((CAccentBlurBehind **)this + 43),
      (const struct tagRECT *)this + 39,
      *((_QWORD *)this + 52),
      *((HWND *)this + 51));
    v2 = 0;
    v3 = *((_DWORD *)this + 159) - *((_DWORD *)this + 157);
    v4 = *((_DWORD *)this + 158) - *((_DWORD *)this + 156);
    v14.m128i_i64[0] = 0LL;
    if ( v4 >= 0 )
      v2 = v4;
    v5 = _mm_cvtsi32_si128(v2);
    v6 = 0;
    LODWORD(v7) = _mm_cvtepi32_ps(v5).m128_u32[0];
    if ( v3 >= 0 )
      v6 = v3;
    *(float *)&v14.m128i_i32[2] = v7 + 0.0;
    *(float *)&v14.m128i_i32[3] = (float)v6 + 0.0;
    if ( CAccent::_HasBlurBehind(this)
      && (v8 = VisualCollection::InsertRelative(
                 (CAccent *)((char *)this + 32),
                 *((struct CVisual **)this + 43),
                 0LL,
                 0,
                 1),
          v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x673u);
    }
    else if ( (*((_BYTE *)this + 292) & 2) != 0 )
    {
      v9 = *(struct CVisual **)(*((_QWORD *)this + 43) + 288LL);
      inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), v9, 0LL, 0, 1);
      if ( inserted >= 0 )
      {
        SolidFillOpacity = CAccent::_GetSolidFillOpacity(this);
        updated = CAccent::_UpdateSolidFill(v12, v9, *((_DWORD *)this + 96), &v14, SolidFillOpacity);
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x67Cu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x67Bu);
      }
    }
  }
}
