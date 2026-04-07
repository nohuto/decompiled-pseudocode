/*
 * XREFs of ?AddSolidBrushInstruction@CThumbnailAnimatedVisual@@QEAAJPEAVCRectangleGeometryProxy@@KM@Z @ 0x1800E2E28
 * Callers:
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ @ 0x1800E3738 (-_AddBorderInstructions@CThumbnailVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBrushProxy@@@Z @ 0x18000E22C (--$CreateProxy@VCSolidColorLegacyMilBrushProxy@@@CCompositor@@IEAAJPEAPEAVCSolidColorLegacyMilBr.c)
 *     ?Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z @ 0x180018A08 (-Update@CSolidColorLegacyMilBrushProxy@@QEAAJNAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CThumbnailAnimatedVisual::AddSolidBrushInstruction(
        CThumbnailAnimatedVisual *this,
        struct CRectangleGeometryProxy *a2,
        int a3,
        D3DVALUE a4)
{
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // eax
  CSolidColorLegacyMilBrushProxy *v13; // [rsp+20h] [rbp-48h] BYREF
  CBaseObject *v14; // [rsp+28h] [rbp-40h] BYREF
  struct _D3DCOLORVALUE v15; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]

  v7 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  v8 = CCompositor::CreateProxy<CSolidColorLegacyMilBrushProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v13);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 237LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v15.r = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v15.g = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v15.b = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v15.a = a4;
  v8 = CSolidColorLegacyMilBrushProxy::Update(v13, 1.0, &v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 245LL;
    goto LABEL_9;
  }
  v14 = 0LL;
  v11 = CDrawGeometryInstruction::Create(v13, a2, &v14);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (int)"clientcore\\windows\\dwm\\udwm\\thumbnailtransition.cpp",
      (const char *)(unsigned int)v11);
    v7 = v14;
    goto LABEL_11;
  }
  v7 = v14;
  v8 = CRenderDataVisual::AddInstruction(this, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 248LL;
    goto LABEL_9;
  }
  v9 = 0;
LABEL_11:
  if ( v13 )
    CBaseObject::Release(v13);
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
