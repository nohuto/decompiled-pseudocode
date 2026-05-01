/*
 * XREFs of ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18052CF9C
 * Callers:
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0C84 (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x180521EA8 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     ??$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@AEBUtagSIZE@@_J@Z @ 0x180537A50 (--$LambdaCustomPaintProc@V_lambda_96edf2fb798d729d000c76ff579fff9f_@@PEAUHDC__@@@@YAXPEAUHDC__@@.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1802384AC (--1-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integral.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x180311C94 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804B84AC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x180521DAC (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18052CE70 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x18052D0D0 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052D1D0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHFONT__@@@Z @ 0x18052D254 (-reset@-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$inte.c)
 */

void __fastcall JointDivider_Paint(HDC hdc, RECT *a2, RECT *a3, enum DEVICE_SCALE_FACTOR a4, HDC h)
{
  RECT *v5; // rbx
  bool v9; // al
  __int64 v10; // rsi
  const struct tagRECT *v11; // r8
  HDC v12; // rdi
  HFONT GlyphFont; // rax
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  void *v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::GetImpl'::`2'::impl,
    a2);
  v9 = IsPPIEdition();
  v10 = CImmersiveColor::GetColor(v9 ? 1178 : 312) & 0xFFFFFF;
  if ( !Geometry::operator==(v5, a3) )
    GDIHelpers::FillRectARGB(hdc, v5, v11, v10);
  GDIHelpers::FillRectARGB(hdc, a3, v11, v10);
  v18[0] = 0LL;
  v12 = h;
  if ( h
    || (GlyphFont = JointDivider_LoadGlyphFont(a4),
        wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::reset(
          v18,
          GlyphFont),
        (v12 = (HDC)v18[0]) != 0LL) )
  {
    v14 = CImmersiveColor::GetColor(0xDBu) & 0xFFFFFF;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
      1u,
      v15,
      v16);
    v17 = 59247LL;
    if ( a3->right - a3->left <= a3->bottom - a3->top )
      LOWORD(v17) = -6268;
    GDIHelpers::RenderCenteredGlyph(
      hdc,
      v12,
      (HFONT)v17,
      v10,
      v14,
      (unsigned int)a3,
      (const struct Geometry::CRect *)v18[0]);
  }
  wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>(v18);
}
