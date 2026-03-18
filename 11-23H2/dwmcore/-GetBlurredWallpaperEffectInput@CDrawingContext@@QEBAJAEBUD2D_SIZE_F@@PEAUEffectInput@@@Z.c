/*
 * XREFs of ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800C178C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18007AD18 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18021FE50 (-GetBrushParameters@CBlurredWallpaperBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029388 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042DDC (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180054020 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180072078 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18007A870 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x18007B588 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x18009FC70 (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x1800AA9BC (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800AAB24 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800ABE54 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x1800AD694 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BEE70 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetBlurredWallpaperSurfaceRect@CVisual@@QEBA?AUtagRECT@@XZ @ 0x1800C1D78 (-GetBlurredWallpaperSurfaceRect@CVisual@@QEBA-AUtagRECT@@XZ.c)
 *     ?GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ @ 0x1800C1DD4 (-GetBlurredWallpaperSurface@CVisual@@QEBAPEAVCVisualSurface@@XZ.c)
 *     ?GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage@@@Z @ 0x1800C1E34 (-GetExplicitRealizationSizeCVI@CVisualSurface@@QEBAJPEAUD2D_VECTOR_2F@@PEAPEAVCCachedVisualImage.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C3950 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VTest@@@details@wil@@QEAAX_NW4ReportingKi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform@@@details@wil@@QEAA_NXZ @ 0x180118954 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcore.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1801D6888 (-SetEffectInputToTransparentBlack@CDrawingContext@@AEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180213BE8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802174B8 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 */

__int64 __fastcall CDrawingContext::GetBlurredWallpaperEffectInput(
        CDrawingContext *this,
        const struct D2D_SIZE_F *a2,
        struct EffectInput *a3)
{
  const struct D2D_SIZE_F *v5; // r15
  __int64 v6; // rdx
  struct CComposition *v7; // rax
  CVisual *v8; // r12
  __int64 v9; // rax
  _QWORD *v10; // rsi
  CVisual *v11; // rbx
  __int64 v12; // r8
  int WorldTransform; // ebx
  __int64 v14; // rdx
  CVisualTree *DesktopTree; // rsi
  int v17; // eax
  unsigned int v18; // r15d
  struct CTreeData *v19; // rax
  float width; // xmm0_4
  float height; // xmm1_4
  struct tagRECT *BlurredWallpaperSurfaceRect; // rax
  float left; // xmm7_4
  float top; // xmm9_4
  float right; // xmm6_4
  float bottom; // xmm8_4
  const struct CVisualTree *v27; // rdx
  CVisualSurface *BlurredWallpaperSurface; // rax
  int ExplicitRealizationSizeCVI; // eax
  float *v30; // rax
  float v31; // xmm6_4
  LONG v32; // xmm7_4
  float v33; // xmm2_4
  float v34; // xmm6_4
  struct CCachedVisualImage *v35; // rbx
  int v36; // eax
  __int128 v37; // xmm1
  struct IBitmapResource *v38; // rdx
  __int64 *v39; // rax
  int v40; // eax
  const struct RenderTargetInfo *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // [rsp+20h] [rbp-E0h]
  __int128 v45; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v46; // [rsp+40h] [rbp-C0h]
  int v47; // [rsp+50h] [rbp-B0h]
  _DWORD v48[12]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+BCh] [rbp-44h]
  struct CCachedVisualImage *v51[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct tagRECT v52; // [rsp+E0h] [rbp-20h] BYREF
  float v53; // [rsp+F0h] [rbp-10h]
  float v54; // [rsp+F4h] [rbp-Ch]
  __int128 v55; // [rsp+F8h] [rbp-8h] BYREF
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v51[0] = (struct CCachedVisualImage *)a2;
  v5 = a2;
  EffectInput::Reset(a3);
  v7 = g_pComposition;
  *((_BYTE *)a3 + 44) = 1;
  *((_BYTE *)a3 + 100) = 1;
  *((_BYTE *)a3 + 102) = 1;
  v8 = (CVisual *)*((_QWORD *)v7 + 38);
  if ( v8 )
  {
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VTest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_VTest>::GetImpl'::`2'::impl,
      v6);
    CMILMatrix::SetToIdentity((CMILMatrix *)v48);
    v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
    v10 = (_QWORD *)*((_QWORD *)this + 1010);
    v11 = (CVisual *)v9;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v10 + 8LL) + 184LL))(*(_QWORD *)(*v10 + 8LL)) )
    {
      WorldTransform = CVisual::GetWorldTransform((__int64)v11, v10, v12, (__int64)v48);
      if ( WorldTransform < 0 )
      {
        v14 = 1690LL;
LABEL_5:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
          (const char *)(unsigned int)WorldTransform,
          v44);
        return (unsigned int)WorldTransform;
      }
    }
    else
    {
      DesktopTree = CVisual::GetDesktopTree(v11);
      if ( DesktopTree )
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ApplicationFaultDwmcoreGetWorldTransform>::GetImpl'::`2'::impl) )
        {
          v17 = CVisualTree::EnsureVisualTransform(DesktopTree, v11);
          v18 = v17;
          if ( v17 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x6A5,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
              (const char *)(unsigned int)v17,
              v44);
            return v18;
          }
          v19 = CVisual::EnsureTreeData(v11, DesktopTree);
          CVisual::EnsureWorldTransform(v11, DesktopTree, v19);
          v5 = (const struct D2D_SIZE_F *)v51[0];
        }
        WorldTransform = CVisual::GetWorldTransform(v11, DesktopTree, 3, (struct CMILMatrix *)v48, 0LL, 0LL);
        if ( WorldTransform < 0 )
        {
          v14 = 1708LL;
          goto LABEL_5;
        }
      }
      else
      {
        WorldTransform = CVisual::GetWorldTransform(
                           v11,
                           *((const struct CVisualTree **)this + 1007),
                           3,
                           (struct CMILMatrix *)v48,
                           0LL,
                           0LL);
        if ( WorldTransform < 0 )
        {
          v14 = 1713LL;
          goto LABEL_5;
        }
      }
    }
    width = v5->width;
    height = v5->height;
    v52.left = 0;
    v52.top = 0;
    *(float *)&v52.right = width + 0.0;
    *(float *)&v52.bottom = height + 0.0;
    *(_OWORD *)v51 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v48, (struct MilRectF *)&v52, (float *)v51);
    BlurredWallpaperSurfaceRect = CVisual::GetBlurredWallpaperSurfaceRect(v8, &v52);
    left = (float)BlurredWallpaperSurfaceRect->left;
    top = (float)BlurredWallpaperSurfaceRect->top;
    right = (float)BlurredWallpaperSurfaceRect->right;
    bottom = (float)BlurredWallpaperSurfaceRect->bottom;
    *(float *)v51 = left;
    *((float *)v51 + 1) = top;
    v51[1] = (struct CCachedVisualImage *)__PAIR64__(LODWORD(bottom), LODWORD(right));
    CVisual::GetDesktopTree(v8);
    CMILMatrix::SetToIdentity((CMILMatrix *)&v45);
    WorldTransform = CVisual::GetWorldTransform(v8, v27, 3, (struct CMILMatrix *)&v45, 0LL, 0LL);
    if ( WorldTransform < 0 )
    {
      v14 = 1732LL;
      goto LABEL_5;
    }
    if ( !CMILMatrix::IsIdentity<1>((__int64)&v45) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v45, (struct MilRectF *)v51, (float *)v51);
      bottom = *((float *)&v51[1] + 1);
      right = *(float *)&v51[1];
      top = *((float *)v51 + 1);
      left = *(float *)v51;
    }
    BlurredWallpaperSurface = CVisual::GetBlurredWallpaperSurface(v8);
    v51[0] = 0LL;
    ExplicitRealizationSizeCVI = CVisualSurface::GetExplicitRealizationSizeCVI(
                                   BlurredWallpaperSurface,
                                   (struct D2D_VECTOR_2F *)&v52,
                                   v51);
    WorldTransform = ExplicitRealizationSizeCVI;
    if ( ExplicitRealizationSizeCVI < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D3,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
        (const char *)(unsigned int)ExplicitRealizationSizeCVI,
        v44);
      wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v51);
      return (unsigned int)WorldTransform;
    }
    *(_QWORD *)&v45 = *(_QWORD *)v48;
    *((_QWORD *)&v45 + 1) = *(_QWORD *)&v48[3];
    *(_QWORD *)&v46 = __PAIR64__(v48[7], v48[5]);
    *((_QWORD *)&v46 + 1) = v49;
    v47 = v50;
    v56 = LODWORD(left) ^ _xmm;
    v57 = LODWORD(top) ^ _xmm;
    v55 = *(_OWORD *)&_xmm;
    v30 = Matrix3x3::operator*((float *)&v45, (float *)v48, (float *)&v55);
    v52.right = 0;
    v31 = right - left;
    v32 = v52.left;
    v33 = *(float *)&v52.left / v31;
    v34 = *(float *)&v52.top;
    v52.top = 0;
    *(float *)&v52.left = v33 / *(float *)&v52.left;
    *(float *)&v52.bottom = (float)(v34 / (float)(bottom - top)) / v34;
    v53 = 0.0 - (float)(*(float *)&v52.left * 0.0);
    v54 = 0.0 - (float)(*(float *)&v52.bottom * 0.0);
    Matrix3x3::operator*(v30, (float *)&v45, (float *)&v52.left);
    *(_QWORD *)((char *)a3 + 84) = 0LL;
    *((_DWORD *)a3 + 23) = v32;
    *((float *)a3 + 24) = v34;
    v35 = v51[0];
    v36 = v47;
    v37 = v46;
    *((_OWORD *)a3 + 3) = v45;
    *((_OWORD *)a3 + 4) = v37;
    *((_DWORD *)a3 + 20) = v36;
    if ( v35 )
      v38 = (struct CCachedVisualImage *)((char *)v35 + *(int *)(*((_QWORD *)v35 + 8) + 8LL) + 64);
    else
      v38 = 0LL;
    v39 = (__int64 *)CDrawListBitmap::CDrawListBitmap((CDrawListBitmap *)&v55, v38);
    CDrawListBitmap::operator=((__int64 *)a3, v39);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55 + 8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v55);
    v40 = *((_DWORD *)a3 + 10) | 0x800;
    *((_DWORD *)a3 + 10) = v40;
    if ( *((_QWORD *)this + 26) )
      *((_DWORD *)a3 + 10) = v40 | 0x100;
    if ( g_LockAndReadBlurredWallpaperBackdropTexture )
    {
      *(_QWORD *)&v52.left = 0LL;
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v52);
      v41 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 40LL))((char *)this + 24);
      if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v35, v41, (struct IRenderTargetBitmap **)&v52) >= 0 )
      {
        v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v52.left + 64LL))(*(_QWORD *)&v52.left);
        v43 = *(int *)(*(_QWORD *)(v42 + 8) + 16LL) + v42 + 8;
        (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v43 + 24LL))(v43, (char *)this + 24);
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v52);
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)v51);
  }
  else
  {
    WorldTransform = CDrawingContext::SetEffectInputToTransparentBlack(this, v5, a3);
    if ( WorldTransform < 0 )
    {
      v14 = 1784LL;
      goto LABEL_5;
    }
    *((_DWORD *)a3 + 10) |= 0x800u;
  }
  return 0LL;
}
