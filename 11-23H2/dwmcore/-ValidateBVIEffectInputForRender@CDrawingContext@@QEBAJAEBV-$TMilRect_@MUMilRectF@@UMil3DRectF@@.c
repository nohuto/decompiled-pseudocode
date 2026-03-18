/*
 * XREFs of ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180041B9C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800517A0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18004209C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ?GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z @ 0x180042164 (-GetBackdropVisualImage@CTreeData@@IEBAPEAVCBackdropVisualImage@@AEBVCVisualTreePath@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004582C (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?IsValid@CBackdropVisualImage@@QEBA_NXZ @ 0x180047074 (-IsValid@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18006A3E0 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DE2C (-GetClipBoundsWorld@CDrawingContext@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180080884 (-RequireClippedBounds@CBackdropVisualImage@@SA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x1800808D8 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z @ 0x1800AA9BC (-GetWorldTransform@CVisual@@QEBAJAEBVCVisualTreePath@@W4WalkReason@@PEAVCMILMatrix@@@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BEE70 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??8Matrix3x3@@QEBA_NAEBV0@@Z @ 0x1800D91E8 (--8Matrix3x3@@QEBA_NAEBV0@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800DC3B8 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x1800DC5C0 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800DF3C0 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1800E2B14 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E359C (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ @ 0x1800EDBF0 (-CanUseAsEffectInput@CBackdropVisualImage@@QEBA_NXZ.c)
 *     ?InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ @ 0x1800F49F0 (-InvalidateAllBlurCaches@CBackdropVisualImage@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802174B8 (-GetRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap.c)
 */

__int64 __fastcall CDrawingContext::ValidateBVIEffectInputForRender(__int64 a1, struct MilRectF *a2, bool *a3)
{
  bool v3; // r14
  __int64 v4; // r15
  CVisual *v7; // rax
  const struct CVisualTreePath *v8; // rsi
  struct CVisual *v9; // r13
  CTreeData *TreeData; // rax
  CBackdropVisualImage *BackdropVisualImage; // rdi
  __int64 i; // rax
  void *v13; // r14
  __int64 v14; // r8
  int WorldTransform; // eax
  unsigned int v16; // edi
  int v17; // eax
  CMILMatrix *v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm4_4
  float v22; // xmm1_4
  char v23; // al
  __int128 *v24; // rdx
  int updated; // eax
  unsigned int v26; // ebx
  CTreeData *v27; // rax
  struct CBackdropVisualImage *v28; // rdi
  struct MilRectF *v29; // r14
  __int64 v30; // r8
  __int64 v31; // rcx
  char v32; // r8
  char v33; // si
  const struct RenderTargetInfo *v34; // rax
  const char *v35; // rbx
  const char **v36; // rax
  __int64 v37; // rbx
  const char *v38; // rdx
  __int64 v39; // rax
  int v41; // eax
  __int128 v42; // xmm1
  const struct RenderTargetInfo *v43; // rax
  __int64 v44; // rbx
  const char *v45; // rdx
  __int64 v46; // rax
  const struct RenderTargetInfo *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // [rsp+20h] [rbp-E0h]
  int v51; // [rsp+20h] [rbp-E0h]
  __int64 v52; // [rsp+30h] [rbp-D0h] BYREF
  struct MilRectF *v53; // [rsp+38h] [rbp-C8h] BYREF
  void *lpMem; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v55; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v56; // [rsp+58h] [rbp-A8h]
  int v57; // [rsp+68h] [rbp-98h]
  _DWORD v58[12]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h]
  int v60; // [rsp+ACh] [rbp-54h]
  _BYTE v61[80]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v62; // [rsp+110h] [rbp+10h] BYREF
  __int128 v63; // [rsp+120h] [rbp+20h] BYREF
  __int128 v64; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v3 = 0;
  v53 = a2;
  v4 = a1 + 24;
  LOBYTE(v52) = 0;
  v7 = (CVisual *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 24) + 32LL))(a1 + 24);
  v8 = *(const struct CVisualTreePath **)(a1 + 8080);
  v9 = v7;
  TreeData = CVisual::FindTreeData(v7, *(const struct CVisualTree **)(*((_QWORD *)v8 + 1) - 8LL));
  if ( TreeData )
    BackdropVisualImage = CTreeData::GetBackdropVisualImage(TreeData, v8);
  else
    BackdropVisualImage = 0LL;
  if ( *(_QWORD *)(a1 + 200) && BackdropVisualImage && CBackdropVisualImage::CanUseAsEffectInput(BackdropVisualImage) )
  {
    if ( a3 )
    {
      v43 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
      v3 = !CBackdropVisualImage::HasValidRenderingRealization(BackdropVisualImage, v43);
      *a3 = v3;
    }
    v44 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, word_18033C470);
    v45 = "BVI-SkipValidationInNestedBackdropWalk-InvalidatedCache";
    if ( !v3 )
      v45 = "BVI-SkipValidationInNestedBackdropWalk-DidNotInvalidateCache";
    v46 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v53, v45);
    CBackdropVisualImage::LogEtwEvent(BackdropVisualImage, v46, v44);
    return 0LL;
  }
  for ( i = a1; *(_QWORD *)(i + 208); i = *(_QWORD *)(i + 208) )
    ;
  v13 = *(void **)(i + 8056);
  lpMem = *(void **)(a1 + 8056);
  CMILMatrix::SetToIdentity((CMILMatrix *)v61);
  v63 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  WorldTransform = CVisual::GetWorldTransform(v9, v8, v14, v61);
  v16 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x641,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)WorldTransform,
      v50);
    return v16;
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v61, v53);
    v17 = *(_DWORD *)(a1 + 400);
    v62 = 0LL;
    v64 = 0LL;
    if ( v17 )
      v18 = (CMILMatrix *)(*(_QWORD *)(a1 + 416) + 68LL * (unsigned int)(v17 - 1));
    else
      v18 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform2DBoundsHelper<1>(v18, v53);
    CDrawingContext::GetClipBoundsWorld(a1, &v64);
    v19 = *(float *)&v62;
    if ( *(float *)&v64 > *(float *)&v62 )
    {
      LODWORD(v62) = v64;
      v19 = *(float *)&v64;
    }
    v20 = *((float *)&v62 + 1);
    if ( *((float *)&v64 + 1) > *((float *)&v62 + 1) )
    {
      DWORD1(v62) = DWORD1(v64);
      v20 = *((float *)&v64 + 1);
    }
    v21 = *((float *)&v62 + 2);
    if ( *((float *)&v62 + 2) > *((float *)&v64 + 2) )
    {
      DWORD2(v62) = DWORD2(v64);
      v21 = *((float *)&v64 + 2);
    }
    v22 = *((float *)&v62 + 3);
    if ( *((float *)&v62 + 3) > *((float *)&v64 + 3) )
    {
      HIDWORD(v62) = HIDWORD(v64);
      v22 = *((float *)&v64 + 3);
    }
    if ( v21 <= v19 || v22 <= v20 )
      v62 = 0uLL;
    v23 = CBackdropVisualImage::RequireClippedBounds(&v63);
    v24 = &v63;
    if ( v23 )
      v24 = &v62;
    v63 = *v24;
    if ( lpMem == v13 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 184LL))(v13);
    updated = CVisual::CreateOrUpdateBVI(v9, v8, (__int64)&v52);
    v26 = updated;
    if ( updated >= 0 )
    {
      v27 = CVisual::FindTreeData(v9, *(const struct CVisualTree **)(*((_QWORD *)v8 + 1) - 8LL));
      if ( v27 )
        v28 = CTreeData::GetBackdropVisualImage(v27, v8);
      else
        v28 = 0LL;
      if ( CBackdropVisualImage::IsValid(v28) )
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v58);
        v29 = v53;
        CMILMatrix::Translate((CMILMatrix *)v58, *(float *)v53, *((float *)v53 + 1));
        CMILMatrix::Multiply((CMILMatrix *)v58, (const struct CMILMatrix *)v61);
        *(_QWORD *)&v55 = *(_QWORD *)v58;
        LOBYTE(v30) = 0;
        *((_QWORD *)&v55 + 1) = *(_QWORD *)&v58[3];
        *(_QWORD *)&v56 = __PAIR64__(v58[7], v58[5]);
        *((_QWORD *)&v56 + 1) = v59;
        v57 = v60;
        if ( !(unsigned __int8)Matrix3x3::operator==((char *)v28 + 1916, &v55, v30) )
        {
          v41 = v57;
          v42 = v56;
          *(_OWORD *)v31 = v55;
          *(_OWORD *)(v31 + 16) = v42;
          *(_DWORD *)(v31 + 32) = v41;
          CBackdropVisualImage::InvalidateAllBlurCaches(v28);
          v32 = 1;
        }
        v33 = v32 | v52;
        *((_BYTE *)v28 + 1952) = 1;
        if ( g_LockAndReadBackdropTexture )
        {
          v53 = 0LL;
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset(&v53);
          v47 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
          if ( (int)CCachedVisualImage::GetRenderTargetBitmap(v28, v47, &v53) >= 0 )
          {
            v48 = (*(__int64 (__fastcall **)(struct MilRectF *))(*(_QWORD *)v53 + 64LL))(v53);
            v49 = *(int *)(*(_QWORD *)(v48 + 8) + 16LL) + v48 + 8;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v49 + 24LL))(v49, v4);
          }
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v53);
        }
      }
      else
      {
        v33 = v52;
        v29 = v53;
      }
      if ( a3 )
      {
        v34 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
        v33 |= !CBackdropVisualImage::HasValidRenderingRealization(v28, v34);
        *a3 = v33;
      }
      v35 = *(const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v53, (const struct CMILMatrix *)v61);
      v36 = (const char **)DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&lpMem, v29);
      v37 = DwmDbg::DbgString::DbgString(
              (DwmDbg::DbgString *)&v63,
              "rcBackdropLocal=[%s], worldTransform=[%s]",
              *v36,
              v35);
      v38 = "BVI-Validate-InvalidatedCache";
      if ( !v33 )
        v38 = "BVI-Validate-DidNotInvalidateCache";
      v39 = DwmDbg::DbgString::DbgString((DwmDbg::DbgString *)&v62, v38);
      CBackdropVisualImage::LogEtwEvent(v28, v39, v37);
      if ( lpMem )
        operator delete(lpMem);
      if ( v53 )
        operator delete(v53);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\drawingcontext.cpp",
      (const char *)(unsigned int)updated,
      v51);
    return v26;
  }
}
