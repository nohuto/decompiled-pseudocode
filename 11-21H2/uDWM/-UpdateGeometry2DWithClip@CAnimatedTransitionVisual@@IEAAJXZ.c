/*
 * XREFs of ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009F984
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180018690 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180018180 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180018390 (-Create@CDrawTileImageInstruction@@SAJPEAVCBaseImageProxy@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800376C0 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800973A4 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCRectangleGeometryProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DWithClip(CAnimatedTransitionVisual *this)
{
  CBaseObject *v2; // rbx
  int v3; // r14d
  int v4; // r15d
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  int v8; // eax
  CBaseObject *v10; // [rsp+30h] [rbp-50h] BYREF
  struct CDrawTileImageInstruction *v11; // [rsp+38h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  RECT rcSrc2; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT rcDst; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v11 = 0LL;
  v2 = 0LL;
  v10 = 0LL;
  rc.left = 0;
  rc.top = 0;
  rc.right = *((_DWORD *)this + 238);
  rc.bottom = *((_DWORD *)this + 239);
  v3 = RoundToNearestInt((float)((float)*((int *)this + 214) + *((float *)this + 188)) - (float)*((int *)this + 206));
  v4 = RoundToNearestInt((float)((float)*((int *)this + 215) + *((float *)this + 189)) - (float)*((int *)this + 207));
  OffsetRect(&rc, v3, v4);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  v5 = CDrawTileImageInstruction::Create(
         *((struct CBaseImageProxy **)this + 73),
         &rc,
         (const struct tagPOINT *)this + 118,
         *((float *)this + 186),
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1161LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_11;
  }
  v5 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1162LL;
    goto LABEL_9;
  }
  rcSrc2 = *(RECT *)((char *)this + 824);
  OffsetRect(&rcSrc2, v3, v4);
  IntersectRect(&rcDst, (const RECT *)((char *)this + 840), &rcSrc2);
  v10 = 0LL;
  v8 = ResourceHelper::CreateRectangleGeometry(&rcDst, &v10);
  v6 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x494,
      (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v8);
    v2 = v10;
    goto LABEL_11;
  }
  v2 = v10;
  v5 = CVisualProxy::SetClip(*((CVisualProxy **)this + 3), v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 1175LL;
    goto LABEL_9;
  }
  v6 = 0;
LABEL_11:
  if ( v2 )
    CBaseObject::Release(v2);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v11);
  return v6;
}
