/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800E4668
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180009670 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E4F7C (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x180037CF0 (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180039150 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CRectangleGeometryProxy *a2,
        int a3,
        D3DVALUE a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  struct CBaseLegacyMilBrushProxy *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  CBaseObject *v13; // rbx
  int v14; // eax
  int v15; // esi
  CBaseObject *v17; // [rsp+20h] [rbp-40h] BYREF
  CBaseObject *v18; // [rsp+28h] [rbp-38h] BYREF
  struct _D3DCOLORVALUE v19; // [rsp+30h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v17 = 0LL;
  v18 = 0LL;
  v7 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
         &v18);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 237LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v7);
LABEL_10:
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v17);
    return v8;
  }
  v19.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v19.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v19.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v19.a = a4;
  v10 = v18;
  v7 = CSolidColorLegacyMilBrushProxy::Update(v18, 1.0, &v19);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 245LL;
    goto LABEL_5;
  }
  v17 = 0LL;
  v7 = CDrawGeometryInstruction::Create(v10, a2, &v17);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 247LL;
    goto LABEL_5;
  }
  v13 = v17;
  v14 = CRenderDataVisual::AddInstruction(this, v17, v11, v12);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v14);
    v8 = v15;
    goto LABEL_10;
  }
  if ( v10 )
    CBaseObject::Release(v10);
  if ( v13 )
    CBaseObject::Release(v13);
  return 0LL;
}
