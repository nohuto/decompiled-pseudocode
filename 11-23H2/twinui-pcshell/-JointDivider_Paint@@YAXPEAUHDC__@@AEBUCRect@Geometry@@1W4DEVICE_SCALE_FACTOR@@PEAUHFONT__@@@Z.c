/*
 * XREFs of ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x1805E7D14
 * Callers:
 *     ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180598B50 (-_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4.c)
 *     ?HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z @ 0x1805DA850 (-HandlePaint@JointDivider@@AEAAXPEAUHDC__@@@Z.c)
 *     LambdaCustomPaintProc__lambda_96edf2fb798d729d000c76ff579fff9f__HDC_____ @ 0x1805F2800 (LambdaCustomPaintProc__lambda_96edf2fb798d729d000c76ff579fff9f__HDC_____.c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180572FEC (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z @ 0x1805DA754 (-FillRectARGB@GDIHelpers@@YAXPEAUHDC__@@PEBUtagRECT@@EK_N@Z.c)
 *     ?JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1805E7BE8 (-JointDivider_LoadGlyphFont@@YAPEAUHFONT__@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z @ 0x1805E7E44 (-RenderCenteredGlyph@GDIHelpers@@YAXPEAUHDC__@@PEAUHFONT__@@GKKAEBUCRect@Geometry@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1805E7F44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell@@@details@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHFONT__@@@Z @ 0x1805E7FC8 (-reset@-$unique_storage@U-$resource_policy@PEAUHFONT__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$inte.c)
 */

void __fastcall JointDivider_Paint(HDC hdc, RECT *a2, RECT *a3, enum DEVICE_SCALE_FACTOR a4, HDC h)
{
  RECT *v7; // rbx
  bool v9; // al
  __int64 v10; // rbp
  const struct tagRECT *v11; // r8
  struct Geometry::CRect *v12; // rdi
  struct Geometry::CRect *v13; // rbx
  HFONT GlyphFont; // rax
  __int64 Color; // rax
  __int64 v16; // r8
  struct Geometry::CRect *v17; // [rsp+30h] [rbp-28h] BYREF

  v7 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_SurfaceHubRemoveSidebars_Shell>::GetImpl'::`2'::impl,
    a2);
  v9 = IsPPIEdition();
  v10 = CImmersiveColor::GetColor(v9 ? 1178 : 312) & 0xFFFFFF;
  if ( !Geometry::operator==(v7, a3) )
    GDIHelpers::FillRectARGB(hdc, v7, v11, v10);
  GDIHelpers::FillRectARGB(hdc, a3, v11, v10);
  v12 = (struct Geometry::CRect *)h;
  v13 = 0LL;
  v17 = 0LL;
  if ( !h )
  {
    GlyphFont = JointDivider_LoadGlyphFont(a4);
    wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::reset(
      &v17,
      GlyphFont);
    v13 = v17;
    if ( !v17 )
      return;
    v12 = v17;
  }
  Color = CImmersiveColor::GetColor(0xDBu);
  v16 = 59247LL;
  if ( a3->right - a3->left <= a3->bottom - a3->top )
    LOWORD(v16) = -6268;
  GDIHelpers::RenderCenteredGlyph(hdc, (HDC)v12, (HFONT)v16, v10, Color & 0xFFFFFF, (unsigned int)a3, v17);
  if ( v13 )
    DeleteObject(v13);
}
