/*
 * XREFs of ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F77C
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180018690 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18000FAB8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180018180 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001D034 (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x18009EBD4 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateBackgroundWithClip(CAnimatedTransitionVisual *this)
{
  CBaseObject *v2; // rbx
  const RECT *v3; // r15
  int v4; // r10d
  int v5; // edx
  int v6; // eax
  struct CBaseGeometryProxy **v7; // r14
  int v8; // r9d
  int v9; // r8d
  int RectangleGeometry; // eax
  unsigned int v11; // edi
  __int64 v12; // rdx
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  CBaseObject *v17; // rcx
  CBaseObject *v19; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v20; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v2 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v3 = (const RECT *)((char *)this + 840);
  v4 = *((_DWORD *)this + 211);
  v5 = *((_DWORD *)this + 212) - *((_DWORD *)this + 210);
  v6 = *((_DWORD *)this + 213) - v4;
  rc = *(struct tagRECT *)((char *)this + 856);
  v7 = (struct CBaseGeometryProxy **)((char *)this + 712);
  v8 = 0;
  if ( v6 >= 0 )
    v8 = v6;
  v9 = 0;
  if ( v5 >= 0 )
    v9 = v5;
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        v3->left,
                        v4,
                        v9,
                        v8,
                        (struct CRectangleGeometryProxy **)this + 89);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1106LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)RectangleGeometry);
    goto LABEL_17;
  }
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  RectangleGeometry = CDrawGeometryInstruction::Create(BrushNoRef, *v7, &v19);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1112LL;
    goto LABEL_15;
  }
  RectangleGeometry = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v19);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1114LL;
    goto LABEL_15;
  }
  v14 = RoundToNearestInt(*((float *)this + 189));
  v15 = RoundToNearestInt(*((float *)this + 188));
  OffsetRect(&rc, v15, v14);
  IntersectRect(&rcDst, v3, &rc);
  v20 = 0LL;
  v16 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v20);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x460,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v16);
    v2 = v20;
    goto LABEL_17;
  }
  v2 = v20;
  RectangleGeometry = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v20);
  v11 = RectangleGeometry;
  if ( RectangleGeometry < 0 )
  {
    v12 = 1123LL;
    goto LABEL_15;
  }
  v11 = 0;
LABEL_17:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    CBaseObject::Release(v17);
  }
  if ( v2 )
    CBaseObject::Release(v2);
  return v11;
}
