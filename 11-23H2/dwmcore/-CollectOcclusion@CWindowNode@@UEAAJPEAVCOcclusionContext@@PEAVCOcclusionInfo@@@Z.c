/*
 * XREFs of ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180057090
 * Callers:
 *     <none>
 * Callees:
 *     ?IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800115F4 (-IntersectWithAlphaMargins@CWindowNode@@AEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180011C54 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x1800138C4 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x180013940 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180026C70 (-IsEmpty@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180026D30 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEAA_NA.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002731C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N@Z @ 0x18002FA94 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180030300 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003193C (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18003AC7C (-reserve_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003D200 (-CheckOcclusionRelevance@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051334 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ @ 0x1800540C0 (-EnsureEffectiveSpriteClip@CWindowNode@@AEAAJXZ.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18006CEB0 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C3A4C (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800CAFD0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800D089C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DAA70 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800DCA20 (-GetTopByReference@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180130046 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x1801312C4 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCShape@@_N@Z @ 0x1801335FE (-CollectOcclusionHelper@CWindowNode@@AEAAJPEAVCResource@@V-$TMilRect_@HUtagRECT@@UMilPointAndSiz.c)
 *     ?GetDxClipShape@CWindowNode@@AEBA?AVCShapePtr@@XZ @ 0x18013372A (-GetDxClipShape@CWindowNode@@AEBA-AVCShapePtr@@XZ.c)
 *     ?clear_region@?$vector_facade@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801B1A24 (-clear_region@-$vector_facade@V-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801E6C74 (-DrawClippedImage@COcclusionContext@@QEAAJPEAVCResource@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CWindowNode::CollectOcclusion(
        CWindowNode *this,
        struct COcclusionContext *a2,
        struct COcclusionInfo *a3,
        int a4)
{
  __int64 v5; // rdx
  CWindowNode *v7; // rdi
  int EffectiveBounds; // ebx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r15
  int (__fastcall **v17)(_QWORD *, GUID *, __int64 *); // rax
  _QWORD *v18; // r15
  unsigned int v19; // ecx
  __int64 *v20; // r13
  LONG v21; // eax
  __int64 v22; // rax
  unsigned int v23; // ecx
  int v24; // r12d
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v29; // r13
  int v30; // r12d
  __int64 v31; // rbx
  int v32; // ecx
  float left; // xmm8_4
  float top; // xmm6_4
  float right; // xmm9_4
  float bottom; // xmm7_4
  int v37; // eax
  CMILMatrix *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  LONG v42; // xmm8_4
  LONG v43; // xmm6_4
  struct tagRECT v44; // xmm0
  LONG v45; // xmm7_4
  float v46; // xmm10_4
  LONG v47; // xmm9_4
  float v48; // xmm11_4
  float v49; // xmm12_4
  char *v50; // rax
  struct tagRECT *TopByReference; // rax
  bool v53; // cc
  float v54; // xmm1_4
  __int128 v55; // xmm0
  LONG v56; // xmm1_4
  float v57; // xmm5_4
  LONG v58; // xmm2_4
  float v59; // xmm6_4
  LONG v60; // xmm3_4
  float v61; // xmm4_4
  struct tagRECT v62; // xmm0
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // r13
  char *v66; // r8
  __int64 v67; // rcx
  int v68; // eax
  unsigned int v69; // r13d
  int v70; // r12d
  __int64 v71; // rbx
  CWindowNode *v72; // r9
  int v73; // eax
  unsigned int v74; // ecx
  int CurrentRenderingRealization; // eax
  CShape **DxClipShape; // rax
  __int64 *v77; // rax
  int v78; // ebx
  __int64 *v79; // rax
  char *v80; // rcx
  unsigned int v81; // r13d
  int v82; // r12d
  __int64 v83; // rbx
  char *v84; // r9
  unsigned int v85; // ecx
  __m128 v86; // xmm2
  __m128 v87; // xmm2
  __m128 v88; // xmm2
  __m128 v89; // xmm2
  __m128 v90; // rt1
  int v91; // r9d
  unsigned int v92; // ecx
  char *v93; // rcx
  unsigned int v94; // [rsp+20h] [rbp-E0h]
  __int64 v95; // [rsp+40h] [rbp-C0h] BYREF
  char v96; // [rsp+48h] [rbp-B8h] BYREF
  struct IBitmapRealization *v97; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT v98; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v99; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT rcDst; // [rsp+80h] [rbp-80h] BYREF
  RECT rcSrc2; // [rsp+90h] [rbp-70h] BYREF
  const struct FastRegion::Internal::CRgnData *v102[10]; // [rsp+A0h] [rbp-60h] BYREF
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v5 = *((_QWORD *)this + 32);
  v98 = 0LL;
  v97 = 0LL;
  v7 = this;
  if ( v5 )
  {
    v66 = (char *)this + 140;
    v67 = v5 + 64 + *(int *)(*(_QWORD *)(v5 + 64) + 8LL);
    v68 = (*(__int64 (__fastcall **)(__int64, struct COcclusionContext *, char *))(*(_QWORD *)v67 + 8LL))(v67, a2, v66);
    EffectiveBounds = v68;
    if ( v68 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v68, 0xF38u, 0LL);
      v94 = 958;
LABEL_151:
      v91 = EffectiveBounds;
      goto LABEL_152;
    }
  }
  EffectiveBounds = 0;
  v9 = (_QWORD *)((char *)a2 + 840);
  v10 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v10 )
  {
    this = (struct COcclusionContext *)((char *)a2 + 1208);
    while ( 1 )
    {
      v69 = *((_DWORD *)a2 + 357);
      v70 = v10 - 1;
      v71 = (unsigned int)(v10 - 1);
      *((_DWORD *)a2 + 357) = v69 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          2 * v71,
          v5,
          v69,
          a4,
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v71 + 4),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v71 + 8),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v71 + 12));
        this = (struct COcclusionContext *)((char *)a2 + 1208);
      }
      v72 = this;
      if ( !*((_BYTE *)a2 + 1204) )
        v72 = 0LL;
      v73 = CArrayBasedCoverageSet::Add((char *)a2 + 448, *v9 + 16 * v71, v69, v72);
      EffectiveBounds = v73;
      if ( v73 < 0 )
        break;
      this = (struct COcclusionContext *)((char *)a2 + 1208);
      LODWORD(v10) = v70;
      if ( !v70 )
        goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x2E8u, 0LL);
  }
LABEL_3:
  v11 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( v11 )
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)a2 + 840,
      0LL,
      v11);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, EffectiveBounds, 0x3BFu, 0LL);
    return (unsigned int)EffectiveBounds;
  }
  v12 = *((_DWORD *)a2 + 357);
  *((_DWORD *)a3 + 11) = v12;
  *((_DWORD *)a3 + 12) = v12;
  if ( *((_BYTE *)v7 + 896) )
  {
    v64 = CPtrArrayBase::operator[]((char *)v7 + 784, 0LL);
    v65 = v64;
    if ( v64 )
    {
      CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                      (CCompositionSurfaceBitmap *)(v64 + 72),
                                      &v97);
      if ( CurrentRenderingRealization >= 0 )
      {
        DxClipShape = (CShape **)CWindowNode::GetDxClipShape(v7, &v99);
        EffectiveBounds = CWindowNode::GetEffectiveBounds(v7, *DxClipShape, &v98.left, (bool *)&v96);
        CShapePtr::Release((CShapePtr *)&v99);
        if ( EffectiveBounds < 0 )
        {
          v94 = 977;
          goto LABEL_151;
        }
        v77 = (__int64 *)CWindowNode::GetDxClipShape(v7, &rcSrc2);
        v99 = v98;
        EffectiveBounds = CWindowNode::CollectOcclusionHelper(
                            (_DWORD)v7,
                            v65,
                            (unsigned int)&v99,
                            (_DWORD)a2,
                            *v77,
                            v96);
        CShapePtr::Release((CShapePtr *)&rcSrc2);
        if ( EffectiveBounds < 0 )
        {
          v94 = 983;
          goto LABEL_151;
        }
        if ( *((_BYTE *)a2 + 1205) )
        {
          CMILMatrix::SetToIdentity((CMILMatrix *)v102);
          EffectiveBounds = CWindowNode::ApplyTextureToLocalTransform(
                              (__int64)v7,
                              (__int64 *)(v65 + 72),
                              (CMILMatrix *)v102,
                              0LL);
          if ( EffectiveBounds < 0 )
          {
            v94 = 990;
            goto LABEL_151;
          }
          v78 = *((_DWORD *)v7 + 213);
          v79 = (__int64 *)CWindowNode::GetDxClipShape(v7, &v99);
          EffectiveBounds = COcclusionContext::CheckAndRecordOverlayCandidate(
                              (__int64)a2,
                              (__int64)v7,
                              *(_QWORD *)(v65 + 104),
                              (__int64)v102,
                              *v79,
                              v78);
          CShapePtr::Release((CShapePtr *)&v99);
          if ( EffectiveBounds < 0 )
          {
            v94 = 996;
            goto LABEL_151;
          }
        }
      }
    }
  }
  v13 = 0;
  EffectiveBounds = 0;
  v14 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( (_DWORD)v14 )
  {
    v80 = (char *)a2 + 1208;
    while ( 1 )
    {
      v81 = *((_DWORD *)a2 + 357);
      v82 = v14 - 1;
      v83 = (unsigned int)(v14 - 1);
      *((_DWORD *)a2 + 357) = v81 + 2;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        McTemplateU0dffffq_EventWriteTransfer(
          2 * v83,
          v5,
          v81,
          a4,
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v83 + 4),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v83 + 8),
          *(_DWORD *)(*v9 + 16LL * (unsigned int)v83 + 12));
        v80 = (char *)a2 + 1208;
      }
      v84 = v80;
      if ( !*((_BYTE *)a2 + 1204) )
        v84 = 0LL;
      EffectiveBounds = CArrayBasedCoverageSet::Add((char *)a2 + 448, *v9 + 16 * v83, v81, v84);
      if ( EffectiveBounds < 0 )
        break;
      v80 = (char *)a2 + 1208;
      LODWORD(v14) = v82;
      if ( !v82 )
        goto LABEL_134;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, EffectiveBounds, 0x2E8u, 0LL);
LABEL_134:
    v13 = 0;
  }
  v15 = (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4;
  if ( v15 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)a2 + 840,
      0LL,
      v15);
    v13 = 0;
  }
  if ( EffectiveBounds < 0 )
  {
    v94 = 1003;
    goto LABEL_151;
  }
  *((_DWORD *)a3 + 10) = *((_DWORD *)a2 + 357);
  if ( !*((_BYTE *)v7 + 895) )
    goto LABEL_66;
  v16 = *((_QWORD *)v7 + 97);
  if ( (v16 & 2) != 0 )
  {
    v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    v17 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v18;
  }
  else
  {
    v17 = (int (__fastcall **)(_QWORD *, GUID *, __int64 *))(*((_QWORD *)v7 + 97) & 1LL);
    v18 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  if ( v17 )
  {
    if ( v17 != (int (__fastcall **)(_QWORD *, GUID *, __int64 *))1 )
      v18 = (_QWORD *)v18[2];
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v18 || *((_BYTE *)v7 + 890) || (*((_BYTE *)v7 + 852) & 2) != 0 )
    goto LABEL_66;
  EffectiveBounds = CWindowNode::EnsureEffectiveSpriteClip(v7);
  if ( EffectiveBounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, EffectiveBounds, 0x3F5u, 0LL);
    goto LABEL_66;
  }
  v20 = (__int64 *)*((_QWORD *)v7 + 110);
  v98.right = *((_DWORD *)v7 + 192) - *((_DWORD *)v7 + 190);
  v21 = *((_DWORD *)v7 + 193) - *((_DWORD *)v7 + 191);
  *(_QWORD *)&v98.left = 0LL;
  v98.bottom = v21;
  if ( !v20 )
    goto LABEL_41;
  v22 = *v20;
  rcDst = 0LL;
  v24 = (*(__int64 (__fastcall **)(__int64 *, struct tagRECT *, _QWORD))(v22 + 48))(v20, &rcDst, 0LL);
  EffectiveBounds = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v24, 0x358u, 0LL);
    v91 = v24;
    v94 = 1016;
    goto LABEL_152;
  }
  LODWORD(v95) = rcDst.left;
  if ( (rcDst.left & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v86 = 0LL;
    v86.m128_f32[0] = (float)(int)*(float *)&rcDst.left - *(float *)&rcDst.left;
    v25 = (int)*(float *)&rcDst.left - _mm_cmple_ss(v86, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v95 = *(float *)&rcDst.left + 6291456.25;
    v25 = (int)((_DWORD)v95 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.left - (float)v25) & _xmm) > 0.00390625 )
    v25 = CFloatFPU::FloorSat(*(float *)&rcDst.left);
  v99.left = v25;
  LODWORD(v95) = rcDst.top;
  if ( (rcDst.top & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v87 = 0LL;
    v87.m128_f32[0] = (float)(int)*(float *)&rcDst.top - *(float *)&rcDst.top;
    v26 = (int)*(float *)&rcDst.top - _mm_cmple_ss(v87, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v95 = *(float *)&rcDst.top + 6291456.25;
    v26 = (int)((_DWORD)v95 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.top - (float)v26) & _xmm) > 0.00390625 )
    v26 = CFloatFPU::FloorSat(*(float *)&rcDst.top);
  v99.top = v26;
  LODWORD(v95) = rcDst.right;
  if ( (rcDst.right & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v88 = 0LL;
    v88.m128_f32[0] = (float)(int)*(float *)&rcDst.right - *(float *)&rcDst.right;
    v27 = (int)*(float *)&rcDst.right - _mm_cmple_ss(v88, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    *(float *)&v95 = *(float *)&rcDst.right + 6291456.25;
    v27 = (int)((_DWORD)v95 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.right - (float)v27) & _xmm) > 0.00390625 )
    v27 = CFloatFPU::CeilingSat(*(float *)&rcDst.right);
  v99.right = v27;
  LODWORD(v95) = rcDst.bottom;
  if ( (rcDst.bottom & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v89 = 0LL;
    v89.m128_f32[0] = (float)(int)*(float *)&rcDst.bottom - *(float *)&rcDst.bottom;
    v90.m128_f32[0] = FLOAT_N0_5;
    LODWORD(v95) = _mm_cmple_ss(v89, v90).m128_u32[0];
    v28 = (int)*(float *)&rcDst.bottom - v95;
  }
  else
  {
    *(float *)&v95 = *(float *)&rcDst.bottom + 6291456.25;
    v28 = (int)((_DWORD)v95 << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&rcDst.bottom - (float)v28) & _xmm) > 0.00390625 )
    v28 = CFloatFPU::CeilingSat(*(float *)&rcDst.bottom);
  v99.bottom = v28;
  TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v98.left, &v99.left);
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, __int64 *))(*v20 + 64))(v20, &v95) && (_DWORD)v95 == 1 )
LABEL_41:
    v29 = 1;
  else
    v29 = 0;
  v30 = 0;
  v31 = *((_QWORD *)v7 + 110);
  if ( *((_DWORD *)v7 + 209) || *((_DWORD *)v7 + 211) || *((_DWORD *)v7 + 210) || *((_DWORD *)v7 + 212) )
    CWindowNode::IntersectWithAlphaMargins((__int64)v7, (__int64)&v98);
  v32 = *((_DWORD *)v7 + 214);
  if ( v32 || *((_DWORD *)v7 + 216) || *((_DWORD *)v7 + 215) || *((_DWORD *)v7 + 217) )
  {
    v62 = *(struct tagRECT *)((char *)v7 + 728);
    *(_QWORD *)&rcSrc2.left = 0LL;
    rcDst = v62;
    rcDst.left = v32 + _mm_cvtsi128_si32((__m128i)v62);
    rcDst.right = v62.right - *((_DWORD *)v7 + 215);
    rcDst.top = *((_DWORD *)v7 + 216) + v62.top;
    rcDst.bottom = v62.bottom - *((_DWORD *)v7 + 217);
    rcSrc2.right = *((_DWORD *)v7 + 192) - *((_DWORD *)v7 + 190);
    rcSrc2.bottom = *((_DWORD *)v7 + 193) - *((_DWORD *)v7 + 191);
    IntersectRect(&rcDst, &rcDst, &rcSrc2);
    if ( !EqualRect(&rcDst, &rcSrc2) )
      TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v98.left, &rcDst.left);
  }
  left = (float)v98.left;
  top = (float)v98.top;
  *(float *)&v99.left = (float)v98.left;
  *(float *)&v99.top = (float)v98.top;
  right = (float)v98.right;
  bottom = (float)v98.bottom;
  *(float *)&v99.right = (float)v98.right;
  *(float *)&v99.bottom = (float)v98.bottom;
  if ( v29 )
  {
    if ( !*((_DWORD *)a2 + 358) )
    {
      if ( (*((_BYTE *)v7 + 852) & 1) != 0 )
      {
LABEL_53:
        if ( right > left && bottom > top )
        {
          v37 = *((_DWORD *)a2 + 8);
          v98 = 0LL;
          if ( v37 )
            v38 = (CMILMatrix *)(*((_QWORD *)a2 + 6) + 68LL * (unsigned int)(v37 - 1));
          else
            v38 = (CMILMatrix *)&CMILMatrix::Identity;
          CMILMatrix::Transform2DBoundsHelper<0>(v38, (struct MilRectF *)&v99);
          if ( *((_DWORD *)a2 + 36) )
          {
            TopByReference = (struct tagRECT *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                                                 (char *)a2 + 144,
                                                 v39,
                                                 v40,
                                                 v41);
            v42 = v98.left;
            v44 = *TopByReference;
            v53 = *(float *)&v98.left <= COERCE_FLOAT(*TopByReference);
            v99 = *TopByReference;
            if ( !v53 )
              v44.left = v98.left;
            v46 = *(float *)&v99.top;
            v43 = v98.top;
            v54 = *(float *)&v99.top;
            if ( *(float *)&v98.top > *(float *)&v99.top )
            {
              v46 = *(float *)&v98.top;
              v54 = *(float *)&v98.top;
            }
            v48 = *(float *)&v99.right;
            v45 = v98.right;
            if ( *(float *)&v99.right > *(float *)&v98.right )
              v48 = *(float *)&v98.right;
            v49 = *(float *)&v99.bottom;
            v47 = v98.bottom;
            if ( *(float *)&v99.bottom > *(float *)&v98.bottom )
              v49 = *(float *)&v98.bottom;
            if ( v48 <= *(float *)&v44.left || v49 <= v54 )
            {
              v46 = 0.0;
              v44.left = 0;
              v48 = 0.0;
              v49 = 0.0;
            }
          }
          else
          {
            v42 = v98.left;
            v43 = v98.top;
            v44.left = v98.left;
            v45 = v98.right;
            v46 = *(float *)&v98.top;
            v47 = v98.bottom;
            v48 = *(float *)&v98.right;
            v49 = *(float *)&v98.bottom;
          }
          if ( **((_DWORD **)a2 + 168) )
          {
            v98.left = PixelAlign(*(float *)&v44.left, 1);
            v98.top = PixelAlign(v46, 1);
            v98.right = PixelAlign(v48, 0);
            v98.bottom = PixelAlign(v49, 0);
            if ( !TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsEmpty(&v98) )
            {
              FastRegion::CRegion::CRegion((FastRegion::CRegion *)v102, &v98);
              v63 = FastRegion::CRegion::Subtract((const struct FastRegion::Internal::CRgnData **)a2 + 168, v102);
              if ( v63 < 0 )
                ModuleFailFastForHRESULT((unsigned int)v63, retaddr);
              FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v102);
            }
          }
          if ( *((_DWORD *)a2 + 44) )
          {
            v55 = *(_OWORD *)CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::GetTopByReference(
                               (char *)a2 + 176,
                               v39,
                               v40,
                               v41);
            v99 = (struct tagRECT)v55;
            if ( *(float *)&v42 > *(float *)&v55 )
              LODWORD(v55) = v42;
            v56 = v99.top;
            v57 = *(float *)&v99.top;
            if ( *(float *)&v43 > *(float *)&v99.top )
            {
              v56 = v43;
              v57 = *(float *)&v43;
            }
            v58 = v99.right;
            v59 = *(float *)&v99.right;
            if ( *(float *)&v99.right > *(float *)&v45 )
            {
              v58 = v45;
              v59 = *(float *)&v45;
            }
            v60 = v99.bottom;
            v61 = *(float *)&v99.bottom;
            if ( *(float *)&v99.bottom > *(float *)&v47 )
            {
              v60 = v47;
              v61 = *(float *)&v47;
            }
            if ( v59 <= *(float *)&v55 || v61 <= v57 )
            {
              v60 = 0;
              v58 = 0;
              v56 = 0;
              LODWORD(v55) = 0;
            }
            v98.left = v55;
            v98.top = v56;
            v98.right = v58;
            v98.bottom = v60;
          }
          else
          {
            v98.left = v42;
            v98.top = v43;
            v98.right = v45;
            v98.bottom = v47;
          }
          if ( COcclusionContext::CheckOcclusionRelevance((__int64)a2, (float *)&v98.left) )
          {
            v50 = detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::reserve_region(
                    (struct COcclusionContext *)((char *)a2 + 840),
                    (__int64)(*((_QWORD *)a2 + 106) - *((_QWORD *)a2 + 105)) >> 4,
                    1uLL);
            *(struct tagRECT *)v50 = v98;
          }
        }
        goto LABEL_64;
      }
      v95 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD *, GUID *, __int64 *))*v18)(
             v18,
             &GUID_b35f2031_4b76_4d4e_b98c_6771dfcc753c,
             &v95) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v95 + 8LL))(v95) )
      {
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95);
        goto LABEL_53;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v95);
    }
LABEL_64:
    v30 = 0;
LABEL_65:
    EffectiveBounds = v30;
    goto LABEL_66;
  }
  if ( !v31 )
    goto LABEL_65;
  v30 = COcclusionContext::DrawClippedImage((_DWORD)a2, (_DWORD)v18, (unsigned int)&v99, v31, *((_DWORD *)v7 + 213));
  EffectiveBounds = v30;
  if ( v30 >= 0 )
    goto LABEL_65;
  MilInstrumentationCheckHR_MaybeFailFast(v92, 0LL, 0, v30, 0x427u, 0LL);
  v91 = v30;
  v94 = 1021;
LABEL_152:
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v91, v94, 0LL);
LABEL_66:
  if ( v97 )
  {
    v93 = (char *)v97 + *(int *)(*((_QWORD *)v97 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v93 + 16LL))(v93);
  }
  return (unsigned int)EffectiveBounds;
}
