/*
 * XREFs of ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A87A8
 * Callers:
 *     ?Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A81B4 (-Validate3DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z @ 0x1800513E8 (-SetEffect@CVisualProxy@@QEAAJPEAVCResourceProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PerspectiveProjection@Matrix4x4F@D2D1@@SA?AV12@M@Z @ 0x1800A7284 (-PerspectiveProjection@Matrix4x4F@D2D1@@SA-AV12@M@Z.c)
 *     ?SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800A76DC (-SetProduct@Matrix4x4F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z @ 0x1800BFF48 (-Update@CEffectGroupProxy@@QEAAJNIPEBVCTransform3dGroupProxy@@@Z.c)
 *     ?Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z @ 0x1800CD028 (-Update@CMatrixTransform3dProxy@@QEAAJAEBU_D3DMATRIX@@@Z.c)
 *     ?Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z @ 0x1800E9D1C (-Update@CTransform3dGroupProxy@@QEAAJPEAPEAVCMatrixTransform3dProxy@@I@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800EBCA0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::_Update3DResources(CAnimatedTransitionVisual *this)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm5_4
  float v6; // xmm5_4
  const struct D2D1::Matrix4x4F *v7; // rax
  CMatrixTransform3dProxy *v8; // rcx
  int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  CTransform3dGroupProxy *v12; // rcx
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  int v16; // eax
  _D3DMATRIX v18; // [rsp+38h] [rbp-D0h] BYREF
  struct tagRECT v19; // [rsp+78h] [rbp-90h] BYREF
  __int128 v20; // [rsp+88h] [rbp-80h] BYREF
  __int128 v21; // [rsp+98h] [rbp-70h]
  __int128 v22; // [rsp+A8h] [rbp-60h]
  float v23; // [rsp+B8h] [rbp-50h]
  float v24; // [rsp+BCh] [rbp-4Ch]
  int v25; // [rsp+C0h] [rbp-48h]
  int v26; // [rsp+C4h] [rbp-44h]
  _D3DMATRIX v27; // [rsp+C8h] [rbp-40h] BYREF
  _D3DMATRIX v28; // [rsp+108h] [rbp+0h] BYREF

  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)((char *)this + 856), &v19);
  v25 = 0;
  v26 = 1065353216;
  *(_OWORD *)&v27._21 = _xmm;
  *(_OWORD *)&v27._41 = _xmm;
  v21 = _xmm;
  v2 = (float)((float)((float)v19.right - (float)v19.left) * 0.5) + (float)v19.left;
  *(_OWORD *)&v27._11 = _xmm;
  *(_OWORD *)&v27._31 = _xmm;
  v3 = (float)((float)((float)v19.bottom - (float)v19.top) * 0.5) + (float)v19.top;
  v20 = _xmm;
  v22 = _xmm;
  LODWORD(v23) = LODWORD(v2) ^ _xmm;
  LODWORD(v24) = LODWORD(v3) ^ _xmm;
  *(_OWORD *)&v18._11 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v18,
    (const struct D2D1::Matrix4x4F *)&v27,
    (const struct D2D1::Matrix4x4F *)&v20);
  *(_OWORD *)&v27._11 = *(_OWORD *)&v18._11;
  *(_OWORD *)&v27._21 = *(_OWORD *)&v18._21;
  v6 = fmaxf(v5, v4) * *((float *)this + 234);
  *(_OWORD *)&v27._31 = *(_OWORD *)&v18._31;
  *(_OWORD *)&v27._41 = *(_OWORD *)&v18._41;
  v7 = (const struct D2D1::Matrix4x4F *)D2D1::Matrix4x4F::PerspectiveProjection((__int64)&v20, v6);
  *(_OWORD *)&v18._11 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct((D2D1::Matrix4x4F *)&v18, (const struct D2D1::Matrix4x4F *)&v27, v7);
  v27 = v18;
  v25 = 0;
  v20 = _xmm;
  v22 = _xmm;
  *(_OWORD *)&v18._11 = _xmm;
  v21 = _xmm;
  *(_OWORD *)&v18._21 = _xmm;
  *(_OWORD *)&v18._31 = _xmm;
  v23 = v2;
  v24 = v3;
  v26 = 1065353216;
  *(_OWORD *)&v18._41 = _xmm;
  D2D1::Matrix4x4F::SetProduct(
    (D2D1::Matrix4x4F *)&v18,
    (const struct D2D1::Matrix4x4F *)&v27,
    (const struct D2D1::Matrix4x4F *)&v20);
  v8 = (CMatrixTransform3dProxy *)*((_QWORD *)this + 38);
  v28 = v18;
  v9 = CMatrixTransform3dProxy::Update(v8, &v28);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v12 = (CTransform3dGroupProxy *)*((_QWORD *)this + 39);
    v19 = *(struct tagRECT *)((char *)this + 296);
    v13 = CTransform3dGroupProxy::Update(v12, (struct CMatrixTransform3dProxy **)&v19, v10);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v15 = CEffectGroupProxy::Update(
              *((CEffectGroupProxy **)this + 40),
              *((float *)this + 186),
              v14,
              *((const struct CTransform3dGroupProxy **)this + 39));
      v11 = v15;
      if ( v15 >= 0 )
      {
        v16 = CVisualProxy::SetEffect(*((CVisualProxy **)this + 3), *((struct CResourceProxy **)this + 40));
        v11 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x70Bu);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x709u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x705u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x6FCu);
  }
  return v11;
}
