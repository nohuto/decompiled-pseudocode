/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A7D48
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18001C3E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FF20 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x18001A784 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180045468 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18005252C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18009EDE0 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x1800A7204 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  const RECT *v2; // r14
  int v3; // r10d
  int v4; // edx
  int v5; // eax
  struct CBaseGeometryProxy **v6; // rsi
  int v7; // r9d
  int v8; // r8d
  int RectangleGeometry; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ebx
  int v16; // eax
  struct CBaseGeometryProxy *v17; // rbx
  int v18; // eax
  int v19; // edi
  struct CDrawGeometryInstruction *v21; // [rsp+30h] [rbp-40h] BYREF
  struct CBaseGeometryProxy *v22; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v22 = 0LL;
  v21 = 0LL;
  v2 = (const RECT *)((char *)this + 840);
  v3 = *((_DWORD *)this + 211);
  v4 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v5 = *((_DWORD *)this + 213) - v3;
  rc = *(struct tagRECT *)((char *)this + 856);
  v6 = (struct CBaseGeometryProxy **)((char *)this + 712);
  v7 = 0;
  if ( v5 >= 0 )
    v7 = v5;
  v8 = 0;
  if ( v4 >= 0 )
    v8 = v4;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        v2->left,
                        v3,
                        v8,
                        v7,
                        (struct CRectangleGeometryProxy **)this + 89);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v11 = 1106LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)RectangleGeometry);
LABEL_16:
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
    wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(&v22);
    return v10;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  RectangleGeometry = CDrawGeometryInstruction::Create(BrushNoRef, *v6, &v21);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v11 = 1112LL;
    goto LABEL_9;
  }
  RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v21, v13, v14);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v11 = 1114LL;
    goto LABEL_9;
  }
  v15 = RoundToNearestInt(*((float *)this + 189));
  v16 = RoundToNearestInt(*((float *)this + 188));
  OffsetRect(&rc, v16, v15);
  IntersectRect(&rcDst, v2, &rc);
  v22 = 0LL;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(&rcDst, &v22);
  v10 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v11 = 1120LL;
    goto LABEL_9;
  }
  v17 = v22;
  v18 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v22);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x463,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v18);
    v10 = v19;
    goto LABEL_16;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v21);
  if ( v17 )
    CBaseObject::Release(v17);
  return 0LL;
}
