/*
 * XREFs of ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A90B8
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18001C3E0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPEAV1@@Z @ 0x18001BEDC (-Create@CDrawGeometryInstruction@@SAJPEAVCBaseLegacyMilBrushProxy@@PEAVCBaseGeometryProxy@@PEAPE.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F610 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18002E490 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180038438 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800434D8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z @ 0x180052644 (-SetRectangle@CRectangleGeometryProxy@@QEAAJMMMMMMMMMMMM_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x1800A7204 (-GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimatedTransitionVisual::_ValidateDCompVisual(CAnimatedTransitionVisual *this)
{
  int v2; // eax
  LONG v3; // r8d
  struct tagPOINT **v4; // rax
  struct tagPOINT *v5; // rcx
  unsigned int v6; // edi
  struct CBaseLegacyMilBrushProxy *BrushNoRef; // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CDrawGeometryInstruction *v14; // [rsp+80h] [rbp+8h] BYREF
  struct tagPOINT v15; // [rsp+88h] [rbp+10h] BYREF

  v14 = 0LL;
  v2 = *((_DWORD *)this + 24);
  if ( (v2 & 0x1000) == 0 && (v2 & 0x2000) == 0 && (v2 & 0x20) == 0 )
    goto LABEL_9;
  if ( *((_BYTE *)this + 975) )
  {
    v15.x = *((_DWORD *)this + 214);
    v3 = *((_DWORD *)this + 215);
    v15.y = v3;
    v4 = *(struct tagPOINT ***)(*((_QWORD *)this + 91) + 48LL);
    v5 = *v4;
    if ( (*v4)[15].x != v15.x || v5[15].y != v3 )
      CVisual::SetOffset(v5, &v15);
    goto LABEL_8;
  }
  if ( (v2 & 0x2000) != 0 )
    CRenderDataVisual::ClearInstructions(*((CRenderDataVisual **)this + 91));
  if ( *(_DWORD *)(*((_QWORD *)this + 91) + 280LL) )
    goto LABEL_8;
  CRectangleGeometryProxy::SetRectangle(
    *((CRectangleGeometryProxy **)this + 89),
    (float)*((int *)this + 214),
    (float)*((int *)this + 215),
    (float)*((int *)this + 216));
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  BrushNoRef = CAnimatedTransitionVisual::GetBrushNoRef(this);
  v9 = CDrawGeometryInstruction::Create(BrushNoRef, *((struct CBaseGeometryProxy **)this + 89), &v14);
  v6 = v9;
  if ( v9 < 0 )
  {
    v12 = 1420LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_10;
  }
  v9 = CRenderDataVisual::AddInstruction(*((CRenderDataVisual **)this + 91), v14, v10, v11);
  v6 = v9;
  if ( v9 < 0 )
  {
    v12 = 1421LL;
    goto LABEL_18;
  }
LABEL_8:
  *((_DWORD *)this + 24) &= 0xFFFFCFDF;
LABEL_9:
  v6 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
  return v6;
}
