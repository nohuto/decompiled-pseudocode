/*
 * XREFs of ?_Ensure3DRenderData@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009FD00
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009FBFC (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z @ 0x18000E0AC (-Create@CDrawBitmapInstruction@@SAJPEAVCBaseImageProxy@@PEAPEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010664 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x180015AB4 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z @ 0x18002726C (-Create@CPushTransformInstruction@@SAJPEAVCBaseTransformProxy@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180027DF8 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Update@CScaleTransformProxy@@QEAAJNNNN@Z @ 0x1800D1CC8 (-Update@CScaleTransformProxy@@QEAAJNNNN@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAnimatedTransitionVisual::_Ensure3DRenderData(CAnimatedTransitionVisual *this)
{
  float v2; // xmm3_4
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  CBaseObject *v9; // rcx
  struct CBaseImageProxy *v10; // rcx
  CBaseObject *v11; // rcx
  CBaseObject *v12; // rcx
  CBaseObject *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  CBaseObject *v16; // [rsp+50h] [rbp+20h] BYREF
  CBaseObject *v17; // [rsp+58h] [rbp+28h] BYREF
  struct CDrawBitmapInstruction *v18; // [rsp+60h] [rbp+30h] BYREF

  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  if ( !*((_DWORD *)this + 72) )
  {
    v2 = (float)*((int *)this + 239);
    v3 = FLOAT_0_1;
    if ( v2 == 0.0 )
      v4 = FLOAT_0_1;
    else
      v4 = 1.0 / v2;
    v5 = (float)*((int *)this + 238);
    if ( v5 != 0.0 )
      v3 = 1.0 / v5;
    v6 = CScaleTransformProxy::Update(*((CScaleTransformProxy **)this + 41), v3, v4, 0.0, 0.0);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1570LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_29;
    }
    v9 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      CBaseObject::Release(v9);
    }
    v6 = CPushTransformInstruction::Create(*((struct CBaseTransformProxy **)this + 41), &v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1571LL;
      goto LABEL_27;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v17);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1572LL;
      goto LABEL_27;
    }
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
    v10 = (struct CBaseImageProxy *)*((_QWORD *)this + 75);
    if ( !v10 )
      v10 = (struct CBaseImageProxy *)*((_QWORD *)this + 73);
    v6 = CDrawBitmapInstruction::Create(v10, &v18);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1576LL;
      goto LABEL_27;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v18);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1577LL;
      goto LABEL_27;
    }
    v11 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      CBaseObject::Release(v11);
    }
    v6 = CPopInstruction::Create(&v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1580LL;
      goto LABEL_27;
    }
    v6 = CRenderDataVisual::AddInstruction((CAnimatedTransitionVisual *)((char *)this + 8), v16);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 1581LL;
      goto LABEL_27;
    }
  }
  v7 = 0;
LABEL_29:
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    CBaseObject::Release(v12);
  }
  v13 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    CBaseObject::Release(v13);
  }
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v18);
  return v7;
}
