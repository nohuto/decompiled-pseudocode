/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18006F200
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18001B270 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180054790 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800721A0 (-FillRectanglesWithDrawListBrush@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$de.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18007A380 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x1800A6B74 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800A6B74.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEffectStage@@IPEAVCDrawListCache@@@Z @ 0x1800A94EC (-UpdateDrawListCache@CBrushRenderingGraph@@IEAAJPEAVCDrawingContext@@PEBVCDrawListBrush@@PEAUEff.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800E90FC (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUM.c)
 *     ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D55B0 (-GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801FC508 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMilRectF@@@Z @ 0x18021E0DC (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@AEBUMi.c)
 *     ?GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18021ED10 (-GenerateDrawList@CVisualBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802296C0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180245198 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180249D20 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18026B550 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022260 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800539C0 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005503C (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800593C0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18006F8C0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJIPEAVCPrimitiveColor@@PEBU_D3DCOLORVAL.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180076214 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x18008F954 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B2404 (-Get2DScaleDimensionsWithPerspective@Matrix3x3@@QEBA_NPEAM0PEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800D0874 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800DB834 (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     sqrtf_0 @ 0x18011B62C (sqrtf_0.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z @ 0x1801FC098 (-CanUseWarpFastPath@CBrushDrawListGenerator@@AEBA_NAEBUGenerateDrawListParameters@1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3,
        __int64 a4)
{
  int v4; // r10d
  void ***v8; // rax
  void ***v9; // rcx
  void (__fastcall ***v10)(_QWORD, __int64); // r11
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r13
  __int64 *v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  int v25; // eax
  float v26; // xmm6_4
  float v27; // xmm0_4
  __int64 v28; // rax
  size_t v29; // rax
  __int64 v30; // rbx
  unsigned int v31; // r14d
  bool v32; // zf
  __int64 v33; // rcx
  unsigned int v34; // edi
  __int64 v35; // rbx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // r12d
  int v39; // r14d
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v41; // ecx
  __int64 v42; // rcx
  int v44; // eax
  int v45; // eax
  CVisual *v46; // rax
  bool HasCpuClipsInScope; // al
  __int64 v48; // rax
  int DrawListPrimitive; // eax
  unsigned int v50; // ecx
  const struct CMILMatrix *TopByReference; // rax
  __int64 v52; // r8
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  int v55; // eax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  CMILMatrix *v58; // rax
  bool CanUseWarpFastPath; // al
  unsigned int v60; // ecx
  int v61; // [rsp+38h] [rbp-D0h]
  int v62; // [rsp+3Ch] [rbp-CCh]
  __int128 v63; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v64; // [rsp+58h] [rbp-B0h]
  __int128 v65; // [rsp+68h] [rbp-A0h]
  __int128 v66; // [rsp+78h] [rbp-90h]
  int v67; // [rsp+88h] [rbp-80h]
  CBrushDrawListGenerator *v68; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-58h]
  __int128 v70; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-40h]
  __int128 v72; // [rsp+D8h] [rbp-30h]
  __int128 v73; // [rsp+E8h] [rbp-20h]
  int v74; // [rsp+F8h] [rbp-10h]
  void (__fastcall ***v75)(_QWORD, __int64); // [rsp+100h] [rbp-8h]
  char v76; // [rsp+108h] [rbp+0h]
  unsigned __int64 v77; // [rsp+110h] [rbp+8h]
  __int64 v78; // [rsp+118h] [rbp+10h]
  char v79; // [rsp+120h] [rbp+18h]
  unsigned int v80; // [rsp+128h] [rbp+20h]
  _OWORD v81[2]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v82; // [rsp+150h] [rbp+48h]
  __int64 v83; // [rsp+158h] [rbp+50h]
  struct CDrawListEntryBuilder *v84; // [rsp+160h] [rbp+58h]
  void ***v85; // [rsp+168h] [rbp+60h]
  int v86; // [rsp+170h] [rbp+68h]
  __int128 v87; // [rsp+174h] [rbp+6Ch]
  __int128 v88; // [rsp+184h] [rbp+7Ch]
  int v89; // [rsp+194h] [rbp+8Ch]
  __int128 v90; // [rsp+198h] [rbp+90h]
  __int128 v91; // [rsp+1A8h] [rbp+A0h]
  int v92; // [rsp+1B8h] [rbp+B0h]
  int v93; // [rsp+1BCh] [rbp+B4h]
  float v94; // [rsp+1C0h] [rbp+B8h] BYREF
  float v95; // [rsp+1C4h] [rbp+BCh] BYREF
  char v96; // [rsp+1C8h] [rbp+C0h]
  char v97; // [rsp+1C9h] [rbp+C1h]
  void **v98; // [rsp+1D8h] [rbp+D0h] BYREF
  _OWORD v99[4]; // [rsp+1E0h] [rbp+D8h] BYREF
  int v100; // [rsp+220h] [rbp+118h]
  struct D2D_MATRIX_3X2_F v101; // [rsp+228h] [rbp+120h] BYREF
  __int64 v102; // [rsp+240h] [rbp+138h]
  int v103; // [rsp+248h] [rbp+140h]

  v4 = 0;
  v98 = &CCommonRenderingEffectFactory::`vftable';
  LOBYTE(a4) = 0;
  v74 = 5888;
  v68 = this;
  v8 = &v98;
  v9 = (void ***)*((_QWORD *)a2 + 1);
  v10 = 0LL;
  v70 = _xmm;
  if ( v9 )
    v8 = v9;
  v71 = _xmm;
  v85 = v8;
  v97 = *((_BYTE *)a2 + 96);
  v75 = 0LL;
  v76 = 0;
  v79 = 0;
  v69 = 0LL;
  v77 = 1LL;
  v78 = 0LL;
  v72 = _xmm;
  v73 = _xmm;
  LOBYTE(v74) = 85;
  v80 = 0;
  v83 = 0LL;
  v86 = 0;
  v96 = 0;
  v84 = a3;
  if ( *((_BYTE *)a2 + 92) )
  {
    v11 = *(_QWORD *)this;
    BYTE1(v74) = 23;
    v12 = *(_QWORD *)(v11 + 904);
    if ( *(_BYTE *)(v12 - 8) )
    {
      v13 = 1;
      v14 = 0LL;
      v61 = 1;
      v15 = 0LL;
      v67 = 0;
      v16 = 0LL;
      v62 = 16;
      if ( v12 == *(_QWORD *)(v11 + 896) || !*(_QWORD *)(v12 - 176) )
      {
LABEL_7:
        if ( (_BYTE)a4 && v10 )
        {
          (**v10)(v10, 1LL);
          v13 = v61;
          v4 = 0;
        }
        v75 = 0LL;
        v76 = 0;
        v79 = 0;
        v69 = v14;
        v77 = __PAIR64__(v62, v13);
        v78 = v16;
        if ( v15 )
        {
          v70 = *(_OWORD *)v15;
          v71 = *((_OWORD *)v15 + 1);
          v72 = *((_OWORD *)v15 + 2);
          v73 = *((_OWORD *)v15 + 3);
          v74 = *((_DWORD *)v15 + 16);
        }
        else
        {
          CMILMatrix::SetToIdentity((CMILMatrix *)&v70);
        }
        goto LABEL_10;
      }
      v44 = *(_DWORD *)(v11 + 464);
      if ( v44 )
        v45 = *(_DWORD *)(*(_QWORD *)(v11 + 480) + 4LL * (unsigned int)(v44 - 1));
      else
        v45 = 0;
      if ( *(_DWORD *)(v11 + 400) == v45 )
      {
        v46 = (CVisual *)(*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)(v11 + 24) + 32LL))(
                           v11 + 24,
                           1LL,
                           v12,
                           a4);
        v15 = CVisual::FindTreeData(v46, *(const struct CVisualTree **)(v11 + 8056))[16];
LABEL_48:
        HasCpuClipsInScope = CScopedClipStack::HasCpuClipsInScope((CScopedClipStack *)(v11 + 896));
        v4 = 0;
        if ( HasCpuClipsInScope )
        {
          v48 = *(_QWORD *)(v11 + 2768);
          v13 = *(_DWORD *)(v48 - 8);
          v14 = *(_QWORD *)(v48 - 40);
          v61 = v13;
        }
        else
        {
          v13 = 1;
        }
        LOBYTE(a4) = v76;
        v10 = v75;
        v16 = *(_QWORD *)(*(_QWORD *)(v11 + 904) - 16LL);
        goto LABEL_7;
      }
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v11 + 400));
      if ( CCpuClippingData::CalcScopeTransformFromWorld(
             (const struct CMILMatrix *)(v52 - 84),
             TopByReference,
             (struct CMILMatrix *)&v63)
        && CMILMatrix::ProducesUniformZ<1>((__int64)&v63) )
      {
        if ( COERCE_FLOAT(DWORD2(v66) & _xmm) >= 0.000081380211 )
        {
          if ( !CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(v11 + 904) - 84LL) )
            goto LABEL_58;
          *(_QWORD *)&v101.m11 = v63;
          *(_QWORD *)&v101.m[1][0] = v64;
          *(_QWORD *)&v101.m[2][0] = v66;
          CMILMatrix::CMILMatrix((CMILMatrix *)v99, &v101);
          v67 = v100;
          v63 = v99[0];
          v62 = 144;
          v64 = v99[1];
          v65 = v99[2];
          v66 = v99[3];
        }
        v15 = (__int64 *)&v63;
        if ( CMILMatrix::IsInvertibleDeterminant((float)(*((float *)&v64 + 1) * *(float *)&v63) - (float)(*(float *)&v64 * *((float *)&v63 + 1))) )
          goto LABEL_48;
      }
LABEL_58:
      v4 = 0;
    }
  }
LABEL_10:
  v17 = *(_QWORD *)this;
  v67 = v4;
  v18 = *(_DWORD *)(v17 + 400);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v17 + 416);
    v21 = 68 * v19;
    v22 = *(_OWORD *)(68 * v19 + v20 + 16);
    v63 = *(_OWORD *)(68 * v19 + v20);
    v23 = *(_OWORD *)(68 * v19 + v20 + 32);
    v64 = v22;
    v24 = *(_OWORD *)(68 * v19 + v20 + 48);
    LODWORD(v20) = *(_DWORD *)(68 * v19 + v20 + 64);
    v65 = v23;
    v66 = v24;
    v67 = v20;
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)&v63);
  }
  if ( *((_BYTE *)a2 + 95) )
  {
    v93 = 1;
  }
  else
  {
    v25 = v4;
    LOBYTE(v25) = *(_DWORD *)(v17 + 336) != 0;
    v93 = v25;
  }
  LOBYTE(v21) = 1;
  if ( (unsigned __int8)CMILMatrix::IsAffine<1>(&v63, v21) )
  {
    v26 = sqrtf_0((float)(*(float *)&v63 * *(float *)&v63) + (float)(*((float *)&v63 + 1) * *((float *)&v63 + 1)));
    v27 = sqrtf_0((float)(*(float *)&v64 * *(float *)&v64) + (float)(*((float *)&v64 + 1) * *((float *)&v64 + 1)));
    v94 = v26;
    v95 = v27;
  }
  else
  {
    *(_QWORD *)&v101.m11 = v63;
    *(_QWORD *)&v101.m[1][1] = v64;
    v102 = v66;
    v101.m21 = *((FLOAT *)&v63 + 3);
    v101.dy = *((FLOAT *)&v64 + 3);
    v103 = HIDWORD(v66);
    Matrix3x3::Get2DScaleDimensionsWithPerspective(&v101, &v94, &v95, 0LL);
  }
  v28 = *((unsigned int *)this + 18);
  LODWORD(v83) = v28;
  HIDWORD(v83) = v28;
  v29 = 8 * v28;
  if ( v29 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v29 <= 0x28 )
    {
      memcpy_0(v81, (char *)this + 40, v29);
      goto LABEL_20;
    }
    v82 = 0LL;
    memset(v81, 0, sizeof(v81));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *_errno() = 22;
    }
    else
    {
      if ( v29 <= 0x28 )
        goto LABEL_20;
      *_errno() = 34;
    }
    _invalid_parameter_noinfo();
  }
LABEL_20:
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)v81 + (unsigned int)v83) = *(_QWORD *)a2;
    LODWORD(v83) = v83 + 1;
  }
  v86 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v83)) - 1);
  if ( v86 )
  {
    v53 = *(_OWORD *)((char *)a2 + 20);
    v54 = *(_OWORD *)((char *)a2 + 36);
    v89 = *((_DWORD *)a2 + 13);
    v55 = *((_DWORD *)a2 + 22);
    v87 = v53;
    v92 = v55;
    v56 = *(_OWORD *)((char *)a2 + 56);
    v88 = v54;
    v57 = *(_OWORD *)((char *)a2 + 72);
    v90 = v56;
    v91 = v57;
  }
  if ( *((_BYTE *)a2 + 94)
    || (v30 = *(_QWORD *)this, !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 568LL))
    || CCommonRegistryData::UseHWDrawListEntriesOnWARP
    || (v58 = CMatrixStack::GetTopByReference((CMatrixStack *)(v30 + 400)), !CMILMatrix::Is2DAxisAlignedPreserving(v58))
    || !*(_DWORD *)(v30 + 656) && *(_DWORD *)(v30 + 584)
    || *(_QWORD *)(v30 + 3424)
    || (CanUseWarpFastPath = CBrushDrawListGenerator::CanUseWarpFastPath(
                               this,
                               (const struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v68),
        v96 = 1,
        !CanUseWarpFastPath) )
  {
    v96 = 0;
  }
  v31 = v80;
  v32 = v80 == (_DWORD)v83;
  if ( v80 < (unsigned int)v83 )
  {
    do
    {
      v33 = *((_QWORD *)v81 + v31);
      if ( v33 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 8LL))(v33, 3LL) )
        break;
      ++v31;
    }
    while ( v31 < (unsigned int)v83 );
    v32 = v31 == (_DWORD)v83;
  }
  if ( !v32 )
  {
    v34 = v80;
    v35 = *((_QWORD *)v81 + v31);
    v80 = v31;
    v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, void *, CBrushDrawListGenerator **))(*(_QWORD *)v35 + 32LL))(
            v35,
            *(_QWORD *)v68,
            &lambda_6f49ef1c5e266dfff6ad3ca7d4dec8df_::_lambda_invoker_cdecl_,
            &v68);
    *((_QWORD *)v81 + v31) = v35;
    v38 = v36;
    v80 = v34;
    v39 = v36;
    if ( v36 >= 0 )
      goto LABEL_33;
    MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x1A6u, 0LL);
LABEL_81:
    MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v38, 0x137u, 0LL);
    goto LABEL_40;
  }
  DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                        v68,
                        (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v68);
  v38 = DrawListPrimitive;
  if ( DrawListPrimitive < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, DrawListPrimitive, 0x166u, 0LL);
    v39 = v38;
    goto LABEL_81;
  }
LABEL_33:
  v39 = 0;
  if ( *((_QWORD *)a3 + 10) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v39 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, BuiltHWPrimitiveEntry, 0x29Bu, 0LL);
    v42 = *((_QWORD *)a3 + 10);
    if ( v42 )
    {
      *((_QWORD *)a3 + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
    }
    if ( v39 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v39, 0x13Cu, 0LL);
  }
LABEL_40:
  if ( v76 && v75 )
    (**v75)(v75, 1LL);
  return (unsigned int)v39;
}
