/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005BF70
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005B960 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18000CEFC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x18000CF88 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800110F4 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180014174 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x180014728 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x180016518 (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002D318 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180039DD4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180053F2C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800579A0 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18005A37C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180066330 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180074570 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18008E8AC (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BDBD0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BEE70 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C543C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z @ 0x1800C54B0 (-AddMultipleAndSet@-$DynArray@UtagRECT@@$0A@@@QEAAJPEFBUtagRECT@@I@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800CC774 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x1800CD9B8 (-PrependTranslate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IsPassiveUpdateMode@CVisual@@QEBA_NXZ @ 0x1800D02F0 (-IsPassiveUpdateMode@CVisual@@QEBA_NXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800D0498 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFE94 (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800DFEC8 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ceilf_0 @ 0x18011B56C (ceilf_0.c)
 *     floorf_0 @ 0x18011B5A8 (floorf_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0dffffq_EventWriteTransfer @ 0x180130046 (McTemplateU0dffffq_EventWriteTransfer.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801D5A9C (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18026FA2C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // eax
  unsigned int v4; // r15d
  const struct CVisualTree *v5; // r14
  __int64 v6; // rdi
  __int64 v8; // rax
  struct _LIST_ENTRY *v9; // r12
  __int64 *v10; // rsi
  __int64 *v11; // r13
  __int64 v12; // r14
  __int64 k; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  __int64 v17; // rsi
  int v18; // eax
  unsigned int v19; // ecx
  CMILMatrix *v20; // r9
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // r8
  int v28; // ecx
  __int64 v29; // rax
  float *v30; // rdx
  int v31; // ecx
  unsigned int v32; // eax
  float v33; // xmm6_4
  __int64 v34; // rax
  float v35; // xmm1_4
  float v36; // xmm0_4
  int *v38; // r8
  int v39; // edx
  unsigned int v40; // r13d
  int v41; // edx
  _QWORD *v42; // rcx
  _BYTE *LightAtNoRef; // rax
  int v44; // eax
  unsigned int v45; // ecx
  int v46; // eax
  int *v47; // r14
  int *v48; // rax
  __int64 **v49; // r12
  __int64 *v50; // rcx
  __int64 v51; // r13
  int v52; // eax
  __int128 v53; // xmm0
  __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rax
  float v57; // xmm2_4
  unsigned __int64 v58; // rcx
  unsigned int v59; // ecx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  char v65; // al
  char v66; // cl
  char v67; // cl
  char v68; // cl
  char v69; // cl
  bool v70; // dl
  bool v71; // cl
  char v72; // dl
  char v73; // al
  struct MilRectF *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rax
  float v77; // xmm0_4
  float v78; // xmm0_4
  float v79; // xmm0_4
  int v80; // eax
  int v81; // esi
  _QWORD *v82; // r10
  _QWORD *v83; // r11
  int *v84; // rsi
  char v85; // r12
  struct _LIST_ENTRY *v86; // rsi
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v89; // rax
  struct _LIST_ENTRY *v90; // rdx
  char v91; // cl
  int v92; // eax
  int v93; // eax
  int v94; // eax
  int v95; // eax
  __int128 v96; // xmm0
  __int128 v97; // xmm1
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  int v100; // edx
  __int64 v101; // r14
  __int64 v102; // rcx
  __int64 v103; // rax
  float v104; // xmm1_4
  float v105; // xmm6_4
  float v106; // xmm7_4
  float v107; // xmm8_4
  __int64 v108; // rax
  unsigned int v109; // r8d
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  _BYTE *v113; // rax
  __int64 m; // rdx
  _QWORD *v115; // rdx
  _QWORD *v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // r8
  __int64 v119; // rax
  _BYTE *v120; // rcx
  __int64 j; // rdx
  _QWORD **v122; // rdx
  _QWORD *v123; // rcx
  _QWORD *v124; // rax
  float v125; // edx
  float *v126; // rcx
  char *v127; // rdx
  struct _LIST_ENTRY *v128; // r8
  __int64 v129; // r8
  __int64 v130; // rax
  int v131; // eax
  unsigned int v132; // ecx
  const struct tagRECT *v133; // rax
  int v134; // eax
  struct CEffect *EffectInternal; // r13
  __int64 v136; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v139; // r12
  __int64 v140; // rcx
  bool v141; // zf
  __int64 v142; // r12
  int v143; // eax
  unsigned int v144; // ecx
  int v145; // r14d
  unsigned int v146; // ecx
  unsigned int v147; // ecx
  unsigned int v148; // ecx
  __int128 v149; // xmm0
  __int128 v150; // xmm4
  float v151; // xmm1_4
  float v152; // xmm2_4
  float v153; // xmm3_4
  __int128 v154; // xmm0
  __int128 v155; // xmm4
  float v156; // xmm6_4
  float v157; // xmm7_4
  float v158; // xmm1_4
  __int128 *v159; // rax
  unsigned int v160; // ecx
  int v161; // [rsp+48h] [rbp-C0h]
  float v162; // [rsp+48h] [rbp-C0h]
  int v163; // [rsp+48h] [rbp-C0h]
  int v164[2]; // [rsp+50h] [rbp-B8h] BYREF
  int *v165; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v166; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v167; // [rsp+78h] [rbp-90h]
  __int128 v168; // [rsp+88h] [rbp-80h]
  __int128 v169; // [rsp+98h] [rbp-70h]
  int v170; // [rsp+A8h] [rbp-60h]
  char v171[64]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v172; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v173; // [rsp+108h] [rbp+0h] BYREF
  __int128 v174; // [rsp+118h] [rbp+10h] BYREF
  __int128 v175; // [rsp+128h] [rbp+20h] BYREF
  float v176; // [rsp+138h] [rbp+30h]
  __int128 v177; // [rsp+140h] [rbp+38h] BYREF
  __int64 v178; // [rsp+150h] [rbp+48h]
  __int128 v179; // [rsp+158h] [rbp+50h] BYREF
  __int128 v180; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v181[3]; // [rsp+178h] [rbp+70h] BYREF
  void *retaddr; // [rsp+230h] [rbp+128h]

  v3 = *((_DWORD *)this + 358);
  v4 = 0;
  *a3 = 1;
  v5 = a2;
  v6 = *((_QWORD *)this + 9);
  v164[0] = v3;
  v8 = *((_QWORD *)this + 177);
  *(_QWORD *)&v172 = a2;
  if ( !v8 )
  {
LABEL_2:
    v9 = (struct _LIST_ENTRY *)&CBackdropVisualImageKey::sc_NoBVIKey;
    goto LABEL_3;
  }
  v82 = *(_QWORD **)(v8 + 1960);
  v83 = *(_QWORD **)(v8 + 1968);
  v84 = (int *)*((_QWORD *)this + 2);
  v165 = v84;
  if ( v82 == v83 )
  {
LABEL_112:
    v85 = 0;
  }
  else
  {
    while ( 1 )
    {
      if ( v6 == *v82 )
      {
        v116 = (_QWORD *)v82[1];
        if ( (((v82[2] - (_QWORD)v116) ^ (*((_QWORD *)v84 + 1) - *(_QWORD *)v84)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_111:
      v82 += 8;
      if ( v82 == v83 )
        goto LABEL_112;
    }
    v117 = *(_QWORD *)v84 - (_QWORD)v116;
    while ( (_QWORD *)((char *)v116 + v117) != *((_QWORD **)v84 + 1) )
    {
      if ( *(_QWORD *)((char *)v116 + v117) != *v116 || *(_QWORD *)((char *)v116 + v117 + 8) != v116[1] )
        goto LABEL_111;
      v116 += 2;
    }
    v85 = 1;
  }
  v86 = *(struct _LIST_ENTRY **)(*((_QWORD *)v84 + 1) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v86->Flink[11].Blink)(v86) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v6 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
    if ( !TreeDataListHead )
      goto LABEL_118;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_118;
    while ( 1 )
    {
      p_Blink = &Flink[-23].Blink;
      if ( Flink[2].Flink == v86 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_118;
    }
  }
  if ( p_Blink )
  {
    for ( i = p_Blink[21]; i != p_Blink[22]; i = (struct _LIST_ENTRY *)((char *)i + 8) )
    {
      v127 = *(char **)v165;
      v128 = i->Flink[112].Flink;
      if ( ((((char *)i->Flink[112].Blink - (char *)v128) ^ (*((_QWORD *)v165 + 1) - *(_QWORD *)v165)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v129 = (char *)v128 - v127;
        while ( &v127[v129] != (char *)i->Flink[112].Blink )
        {
          if ( *(_QWORD *)&v127[v129] != *(_QWORD *)v127 || *(_QWORD *)&v127[v129 + 8] != *((_QWORD *)v127 + 1) )
            goto LABEL_225;
          v127 += 16;
        }
        i->Flink[124].Flink = p_Blink[33][1].Flink[31].Flink;
        v89 = i->Flink;
        goto LABEL_119;
      }
LABEL_225:
      ;
    }
  }
LABEL_118:
  v89 = 0LL;
LABEL_119:
  v90 = (struct _LIST_ENTRY *)*((_QWORD *)this + 177);
  if ( v89 == v90 )
    goto LABEL_190;
  v91 = *((_BYTE *)this + 1424);
  if ( !v91 && !v85 )
    goto LABEL_190;
  if ( !v91 && v85 )
    *((_BYTE *)this + 1424) = 1;
  if ( !v90 )
    goto LABEL_2;
  v9 = v90 + 118;
LABEL_3:
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v5 + 184LL))(v5) )
  {
    v10 = (__int64 *)(v6 + 336);
  }
  else
  {
    v118 = *(_QWORD *)(v6 + 232);
    if ( *(int *)v118 >= 0 )
      goto LABEL_190;
    v119 = *(unsigned int *)(v118 + 4);
    v120 = (_BYTE *)(v118 + 8);
    for ( j = 0LL; (unsigned int)j < (unsigned int)v119; ++v120 )
    {
      if ( *v120 == 1 )
        break;
      j = (unsigned int)(j + 1);
    }
    v122 = (unsigned int)j >= (unsigned int)v119
         ? 0LL
         : (_QWORD **)(v119 + 15 + v118 + 8 * j - (((_BYTE)v119 + 15) & 7));
    v123 = *v122;
    if ( !*v122 )
      goto LABEL_190;
    v124 = (_QWORD *)*v123;
    if ( (_QWORD *)*v123 == v123 )
      goto LABEL_190;
    while ( 1 )
    {
      v10 = v124 - 45;
      if ( (const struct CVisualTree *)v124[4] == v5 )
        break;
      v124 = (_QWORD *)*v124;
      if ( v124 == v123 )
        goto LABEL_190;
    }
  }
  if ( !v10 )
  {
LABEL_190:
    v16 = v164[0];
    goto LABEL_38;
  }
  v11 = v10 + 25;
  v12 = 0LL;
  for ( k = v10[25]; k != v10[26]; k += 8LL )
  {
    v14 = *(_QWORD *)k;
    if ( *(struct _LIST_ENTRY **)(*(_QWORD *)k + 8LL) == v9->Flink && *(struct _LIST_ENTRY **)(v14 + 16) == v9->Blink )
    {
      v12 = *(_QWORD *)k;
      if ( v14 )
        *(_BYTE *)(v14 + 25) = 10;
      break;
    }
  }
  v15 = *(_QWORD *)(*(_QWORD *)(v10[33] + 16) + 496LL);
  if ( v10[30] != v15 )
  {
    v10[30] = v15;
    v139 = *v11;
    while ( v139 != v10[26] )
    {
      v140 = *(_QWORD *)v139;
      if ( *(_QWORD *)(*(_QWORD *)v139 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
        && *(_QWORD *)(v140 + 16) == qword_1803E9F48
        || (v141 = *(_BYTE *)(v140 + 25) == 1, --*(_BYTE *)(v140 + 25), !v141) )
      {
        v139 += 8LL;
      }
      else
      {
        v142 = (v139 - *v11) >> 3;
        detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
          v10 + 25,
          v142,
          1LL);
        v139 = *v11 + 8 * v142;
      }
    }
  }
  if ( !v12
    || ((*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 8LL))(v12, *((unsigned int *)this + 357)),
        *((_BYTE *)g_pComposition + 1274))
    && CVisual::HasProtectedContent((CVisual *)v6) )
  {
    v5 = (const struct CVisualTree *)v172;
    goto LABEL_190;
  }
  v16 = v164[0];
  v17 = v12;
  if ( !v164[0] )
  {
    *((_QWORD *)this + 149) = v6;
    v18 = (*(__int64 (__fastcall **)(__int64, COcclusionContext *, __int64))(*(_QWORD *)v6 + 232LL))(v6, this, v12);
    v21 = v18;
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2B6u, 0LL);
      *((_QWORD *)this + 149) = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v148, 0LL, 0, v21, 0x21Au, 0LL);
      v5 = (const struct CVisualTree *)v172;
      *((_BYTE *)this + 1206) = 0;
      goto LABEL_40;
    }
    v17 = v12;
    v22 = (__int64)(*((_QWORD *)this + 106) - *((_QWORD *)this + 105)) >> 4;
    if ( (_DWORD)v22 )
    {
      while ( 1 )
      {
        v100 = *((_DWORD *)this + 357);
        v163 = v22 - 1;
        v164[0] = v100;
        v101 = (unsigned int)(v22 - 1);
        *((_DWORD *)this + 357) = v100 + 2;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          McTemplateU0dffffq_EventWriteTransfer(
            2 * v101,
            v100,
            v100,
            (_DWORD)v20,
            *(_DWORD *)(*((_QWORD *)this + 105) + 16 * v101 + 4),
            *(_DWORD *)(*((_QWORD *)this + 105) + 16 * v101 + 8),
            *(_DWORD *)(*((_QWORD *)this + 105) + 16 * v101 + 12));
          v100 = v164[0];
        }
        v102 = 16 * v101;
        if ( *((_BYTE *)this + 1204) )
          v20 = (COcclusionContext *)((char *)this + 1208);
        else
          v20 = 0LL;
        v103 = *((_QWORD *)this + 105);
        LODWORD(v175) = v100;
        v174 = 0LL;
        v104 = *(float *)(v102 + v103);
        v105 = *(float *)(v102 + v103 + 4);
        v106 = *(float *)(v102 + v103 + 8);
        v107 = *(float *)(v102 + v103 + 12);
        *(_QWORD *)((char *)&v175 + 4) = __PAIR64__(LODWORD(v105), LODWORD(v104));
        *((float *)&v175 + 3) = v106;
        v176 = v107;
        if ( v20 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(v20, (struct MilRectF *)((char *)&v175 + 4));
          LODWORD(v104) = v174;
          v107 = *((float *)&v174 + 3);
          v106 = *((float *)&v174 + 2);
          v105 = *((float *)&v174 + 1);
        }
        if ( COERCE_FLOAT(LODWORD(v104) & _xmm) < 8388608.0 )
          v104 = (float)(int)ceilf_0(v104);
        *(float *)&v174 = v104;
        if ( COERCE_FLOAT(LODWORD(v105) & _xmm) < 8388608.0 )
          v105 = (float)(int)ceilf_0(v105);
        *((float *)&v174 + 1) = v105;
        if ( COERCE_FLOAT(LODWORD(v106) & _xmm) < 8388608.0 )
          v106 = (float)(int)floorf_0(v106);
        *((float *)&v174 + 2) = v106;
        if ( COERCE_FLOAT(LODWORD(v107) & _xmm) < 8388608.0 )
          v107 = (float)(int)floorf_0(v107);
        v108 = *((unsigned int *)this + 118);
        *((float *)&v174 + 3) = v107;
        v109 = v108 + 1;
        if ( (int)v108 + 1 < (unsigned int)v108 )
          break;
        if ( v109 > *((_DWORD *)this + 117) )
        {
          v143 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 448, 36LL, 1LL, &v174);
          v145 = v143;
          if ( v143 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v143, 0xC0u, 0LL);
            goto LABEL_238;
          }
        }
        else
        {
          v110 = *((_QWORD *)this + 56);
          v111 = 9 * v108;
          *(_OWORD *)(v110 + 4 * v111) = v174;
          *(_OWORD *)(v110 + 4 * v111 + 16) = v175;
          *(float *)(v110 + 4 * v111 + 32) = v176;
          *((_DWORD *)this + 118) = v109;
        }
        LODWORD(v22) = v163;
        if ( !v163 )
          goto LABEL_18;
      }
      v145 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v102, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_238:
      MilInstrumentationCheckHR_MaybeFailFast(v146, 0LL, 0, v145, 0x25u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v147, 0LL, 0, v145, 0x2E8u, 0LL);
    }
LABEL_18:
    v23 = (__int64)(*((_QWORD *)this + 106) - *((_QWORD *)this + 105)) >> 4;
    if ( v23 )
      *((_QWORD *)this + 106) -= 16 * v23;
    *((_QWORD *)this + 149) = 0LL;
  }
  if ( (*(_BYTE *)(v17 + 24) & 1) == 0 )
  {
LABEL_28:
    if ( (*(_BYTE *)(v17 + 24) & 4) != 0 )
    {
      v46 = *((_DWORD *)this + 8);
      if ( v46 )
        *((_DWORD *)this + 8) = v46 - 1;
    }
    if ( (*(_BYTE *)(v17 + 24) & 2) != 0 )
    {
      v92 = *((_DWORD *)this + 360);
      if ( v92 )
        *((_DWORD *)this + 360) = v92 - 1;
      v93 = *((_DWORD *)this + 36);
      if ( v93 )
        *((_DWORD *)this + 36) = v93 - 1;
      v94 = *((_DWORD *)this + 44);
      if ( v94 )
        *((_DWORD *)this + 44) = v94 - 1;
    }
    if ( (*(_BYTE *)(v17 + 24) & 8) != 0 )
    {
      v95 = *((_DWORD *)this + 376);
      if ( v95 )
        *((_DWORD *)this + 376) = v95 - 1;
    }
    if ( !v16
      && ((unsigned int)((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 280)) >> 4)
       || (unsigned int)((__int64)(*(_QWORD *)(v6 + 312) - *(_QWORD *)(v6 + 304)) >> 4)) )
    {
      v38 = v164;
      v164[0] = 0;
      v165 = v164;
      v164[1] = 1;
      while ( 2 )
      {
        v39 = *v38;
        v40 = 0;
        v161 = *v38;
        while ( v40 < (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, v39) )
        {
          LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v42, v40, v41);
          if ( LightAtNoRef[170] )
          {
            v5 = (const struct CVisualTree *)v172;
            if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)LightAtNoRef + 240LL))(
                   LightAtNoRef,
                   v172,
                   v6) )
            {
              v44 = CLightStack::Pop((COcclusionContext *)((char *)this + 208));
              if ( v44 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x69u, 0LL);
                goto LABEL_33;
              }
            }
          }
          v39 = v161;
          ++v40;
        }
        v38 = v165 + 1;
        v165 = v38;
        if ( v38 != (int *)&v165 )
          continue;
        break;
      }
    }
    v5 = (const struct CVisualTree *)v172;
LABEL_33:
    v27 = *(_DWORD **)(v6 + 232);
    if ( (*v27 & 0x2000000) != 0 )
      goto LABEL_164;
    v28 = *(_DWORD *)(*(_QWORD *)(v6 + 224) + 4LL);
    if ( (v28 & 0x2000000) != 0 || (v28 & 0x4000000) != 0 )
      goto LABEL_164;
    if ( (*v27 & 0x400000) != 0 )
    {
      v112 = (unsigned int)v27[1];
      v113 = v27 + 2;
      for ( m = 0LL; (unsigned int)m < (unsigned int)v112; ++v113 )
      {
        if ( *v113 == 10 )
          break;
        m = (unsigned int)(m + 1);
      }
      v115 = (unsigned int)m >= (unsigned int)v112
           ? 0LL
           : (_QWORD *)((char *)v27 + 8 * m - (((_BYTE)v112 + 15) & 7) + v112 + 15);
      if ( *v115 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v115 + 56LL))(*v115, 61LL) )
        goto LABEL_164;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 93LL)
      && (*(_QWORD *)(v6 + 712) || *(_QWORD *)(v6 + 704)) )
    {
LABEL_164:
      --*((_DWORD *)this + 359);
    }
    goto LABEL_38;
  }
  v24 = *((_DWORD *)this + 368);
  if ( !v24
    || !*(_DWORD *)(*((_QWORD *)this + 186) + 4LL * (unsigned int)(v24 - 1))
    || (v25 = *((_DWORD *)this + 376)) == 0
    || !*(_BYTE *)((unsigned int)(v25 - 1) + *((_QWORD *)this + 190)) )
  {
LABEL_26:
    v26 = *((_DWORD *)this + 368);
    if ( v26 )
      *((_DWORD *)this + 368) = v26 - 1;
    goto LABEL_28;
  }
  v130 = *(_QWORD *)v6;
  v180 = 0LL;
  v131 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v130 + 224))(v6, &v180);
  v4 = v131;
  if ( v131 >= 0 )
  {
    v179 = *(_OWORD *)COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v179);
    v133 = (const struct tagRECT *)PixelAlign((int *)&v173, (float *)&v179);
    v134 = CRegion::TryAddRectangle((COcclusionContext *)((char *)this + 1344), v133);
    if ( v134 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v134, retaddr);
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, v131, 0x22Cu, 0LL);
  v5 = (const struct CVisualTree *)v172;
LABEL_38:
  *((_BYTE *)this + 1206) = 0;
  if ( v16 )
    --*((_DWORD *)this + 358);
LABEL_40:
  if ( !*((_BYTE *)this + 1205)
    || *((_DWORD *)this + 358)
    || (*(_BYTE *)(v6 + 102) & 2) != 0
    || (*(_DWORD *)(v6 + 96) & 0x100) == 0 )
  {
    goto LABEL_60;
  }
  v29 = *((_QWORD *)v5 + 8);
  if ( v6 == v29 )
  {
    if ( v29 )
      v30 = (float *)((char *)v5 + 72);
    else
      v30 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v30 = (float *)(v6 + 148);
  }
  v31 = (v30[5] <= v30[4]) + 1;
  if ( v30[2] > *v30 )
    v31 = v30[5] <= v30[4];
  v32 = v31 + 1;
  if ( v30[3] > v30[1] )
    v32 = v31;
  if ( v32 > 1 )
    goto LABEL_60;
  v33 = *(float *)&FLOAT_1_0;
  if ( (**(_DWORD **)(v6 + 232) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)v6);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           58LL) )
    {
      v33 = *((float *)EffectInternal + 20);
    }
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(fminf(1.0, fmaxf(v33, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_60;
  if ( v6 == *((_QWORD *)v5 + 8) )
  {
    v36 = *(float *)&FLOAT_1_0;
  }
  else
  {
    v34 = *(_QWORD *)(v6 + 224);
    if ( (*(_DWORD *)(v34 + 4) & 0x8000000) != 0 )
    {
      v125 = *(float *)(v34 + 12);
      v126 = (float *)(v34 + 12);
      if ( (LODWORD(v125) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v126 = (float *)((char *)v126 + (LODWORD(v125) & 0xFFFFFF) + 4);
          v125 = *v126;
        }
        while ( (*(_DWORD *)v126 & 0x7F000000) != 0x5000000 );
      }
      v35 = v126[1];
    }
    else
    {
      v35 = *(float *)&FLOAT_1_0;
    }
    v36 = fminf(1.0, fmaxf(v35, 0.0));
  }
  if ( COERCE_FLOAT(LODWORD(v36) & _xmm) < 0.0000011920929
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 256LL))(v6) && !v16 )
  {
    goto LABEL_60;
  }
  v47 = (int *)*((_QWORD *)this + 193);
  v48 = &v47[2 * *((_QWORD *)this + 192)];
  v165 = v48;
  if ( v47 == v48 )
    goto LABEL_60;
  while ( 1 )
  {
    v49 = *(__int64 ***)v47;
    if ( !*(_BYTE *)(*(_QWORD *)v47 + 11302LL) )
      goto LABEL_107;
    v50 = *v49;
    v164[0] = 0;
    v172 = 0LL;
    v51 = (*(__int64 (__fastcall **)(__int64 *))(*v50 + 160))(v50) + 48;
    v52 = *((_DWORD *)this + 36);
    v53 = v52
        ? *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v52 - 1))
        : TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v172 = v53;
    v173 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v51, (struct MilRectF *)&v172);
    v54 = *v49;
    v55 = **v49;
    v172 = v173;
    v56 = (*(__int64 (__fastcall **)(__int64 *))(v55 + 160))(v54);
    v57 = (float)(int)HIDWORD(*(_QWORD *)(v56 + 20));
    v58 = _mm_srli_si128(*(__m128i *)(v56 + 20), 8).m128i_u64[0];
    *(float *)&v179 = (float)(int)*(_OWORD *)(v56 + 20);
    *((float *)&v179 + 1) = v57;
    *((float *)&v179 + 2) = (float)(int)v58;
    *((float *)&v179 + 3) = (float)SHIDWORD(v58);
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v172, &v179);
    if ( *((float *)&v172 + 2) > *(float *)&v172 && *((float *)&v172 + 3) > *((float *)&v172 + 1) )
      break;
LABEL_105:
    v81 = v164[0];
    if ( v164[0] < 0 )
      goto LABEL_284;
    v48 = v165;
LABEL_107:
    v47 += 2;
    if ( v47 == v48 )
      goto LABEL_60;
  }
  v61 = *((_DWORD *)this + 8);
  v170 = 0;
  v173 = 0LL;
  if ( v61 )
  {
    v62 = (unsigned int)(v61 - 1);
    v63 = *((_QWORD *)this + 6);
    v64 = 68 * v62;
    v166 = *(_OWORD *)(68 * v62 + v63);
    v167 = *(_OWORD *)(68 * v62 + v63 + 16);
    v168 = *(_OWORD *)(68 * v62 + v63 + 32);
    v169 = *(_OWORD *)(68 * v62 + v63 + 48);
    v170 = *(_DWORD *)(68 * v62 + v63 + 64);
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)&v166);
  }
  v65 = v170;
  v66 = (char)((_BYTE)v170 << 6) >> 6;
  if ( !v66 )
  {
    v67 = (char)(16 * BYTE1(v170)) >> 6;
    if ( v67 )
    {
      if ( v67 != 1 )
        goto LABEL_92;
    }
    else
    {
      if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(&v166, 0LL)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v168 - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v168 + 1) - 0.0) & _xmm) >= 0.000081380211 )
      {
        BYTE1(v170) |= 0xCu;
        v65 = v170;
        goto LABEL_92;
      }
      BYTE1(v170) = BYTE1(v170) & 0xF3 | 4;
      v65 = v170;
    }
    v68 = (char)(16 * v65) >> 6;
    if ( v68 )
    {
      if ( v68 != 1 )
        goto LABEL_92;
    }
    else
    {
      LOBYTE(v64) = 1;
      if ( !(unsigned __int8)CMILMatrix::IsAffine<1>(&v166, v64)
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v166 + 2) - 0.0) & _xmm) >= 0.000081380211
        || COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v167 + 2) - 0.0) & _xmm) >= 0.000081380211 )
      {
        v65 = v170 | 0xC;
        goto LABEL_92;
      }
      v65 = v170 & 0xF3 | 4;
      LOBYTE(v170) = v65;
    }
    v69 = (char)(4 * v65) >> 6;
    if ( v69 )
    {
      v70 = v69 == 1;
    }
    else
    {
      v70 = CMILMatrix::IsTranslateAndScaleIgnoreZ<1>((__int64)&v166)
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v166 - 1.0) & _xmm) < 0.000081380211
         && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v167 + 1) - 1.0) & _xmm) < 0.000081380211;
      v65 = (v170 ^ (-16 - 32 * v70)) & 0x30 ^ v170;
    }
    if ( v70
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v168 + 2) - 1.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v169 - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v169 + 1) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v169 + 2) - 0.0) & _xmm) < 0.000081380211 )
    {
      v71 = 1;
      v72 = 1;
      goto LABEL_93;
    }
LABEL_92:
    v71 = 0;
    v72 = 3;
LABEL_93:
    LOBYTE(v170) = v72 | v65 & 0xFC;
    goto LABEL_94;
  }
  v71 = v66 == 1;
LABEL_94:
  if ( v71 )
  {
    v96 = *(_OWORD *)v51;
    v97 = *(_OWORD *)(v51 + 16);
    v170 = *(_DWORD *)(v51 + 64);
    v166 = v96;
    v98 = *(_OWORD *)(v51 + 32);
    v167 = v97;
    v99 = *(_OWORD *)(v51 + 48);
    v168 = v98;
LABEL_138:
    v169 = v99;
    goto LABEL_97;
  }
  v73 = (char)(*(_BYTE *)(v51 + 64) << 6) >> 6;
  if ( !v73 )
  {
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v51)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v51 + 48) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v51 + 52) - 0.0) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v51 + 56) - 0.0) & _xmm) < 0.000081380211 )
    {
      *(_BYTE *)(v51 + 64) &= ~2u;
      *(_BYTE *)(v51 + 64) |= 1u;
      goto LABEL_97;
    }
    *(_BYTE *)(v51 + 64) |= 3u;
    goto LABEL_271;
  }
  if ( v73 != 1 )
  {
LABEL_271:
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(v51) )
    {
      CMILMatrix::Translate((CMILMatrix *)&v166, *(float *)(v51 + 48), *(float *)(v51 + 52), *(float *)(v51 + 56));
      goto LABEL_97;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslate<1>(&v166) )
    {
      v149 = *(_OWORD *)v51;
      v150 = *(_OWORD *)(v51 + 16);
      v170 = *(_DWORD *)(v51 + 64);
      v151 = *(float *)&v169;
      v152 = *((float *)&v169 + 1);
      v153 = *((float *)&v169 + 2);
      v166 = v149;
      v154 = *(_OWORD *)(v51 + 32);
      v167 = v150;
      v155 = *(_OWORD *)(v51 + 48);
      v168 = v154;
      v169 = v155;
      CMILMatrix::PrependTranslate((CMILMatrix *)&v166, v151, v152, v153);
      goto LABEL_97;
    }
    if ( (unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v51) )
    {
      CMILMatrix::Scale((CMILMatrix *)&v166, *(float *)v51, *(float *)(v51 + 20), *(float *)(v51 + 40));
      CMILMatrix::Translate((CMILMatrix *)&v166, *(float *)(v51 + 48), *(float *)(v51 + 52), *(float *)(v51 + 56));
      goto LABEL_97;
    }
    if ( (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(&v166)
      && (unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(v51) )
    {
      v156 = *((float *)&v168 + 2);
      v157 = *((float *)&v169 + 2);
      v181[0] = v166;
      v181[1] = v167;
      v181[2] = v169;
      *(_QWORD *)&v177 = *(_QWORD *)v51;
      *((_QWORD *)&v177 + 1) = *(_QWORD *)(v51 + 16);
      v178 = *(_QWORD *)(v51 + 48);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v174,
        (const struct D2D1::Matrix3x2F *)v181,
        (const struct D2D1::Matrix3x2F *)&v177);
      CMILMatrix::Set2DAffineMatrix(
        (CMILMatrix *)&v166,
        *(float *)&v174,
        *((float *)&v174 + 1),
        *((float *)&v174 + 2),
        *((float *)&v174 + 3),
        *(float *)&v175,
        *((float *)&v175 + 1));
      v158 = (float)(*(float *)(v51 + 40) * v157) + *(float *)(v51 + 56);
      *((float *)&v168 + 2) = *(float *)(v51 + 40) * v156;
      *((float *)&v169 + 2) = v158;
      goto LABEL_97;
    }
    v159 = (__int128 *)Windows::Foundation::Numerics::operator*(v171, &v166, v51);
    v166 = *v159;
    v167 = v159[1];
    v168 = v159[2];
    v99 = v159[3];
    v170 = 0;
    goto LABEL_138;
  }
LABEL_97:
  v74 = (struct MilRectF *)(v6 + 148);
  if ( *(float *)(v6 + 168) == 0.0 && *(float *)(v6 + 164) == 0.0 )
  {
    v75 = *((_QWORD *)this + 1);
    v76 = *(_QWORD *)(v75 + 64);
    if ( v6 == v76 )
    {
      v74 = (struct MilRectF *)(v75 + 72);
      if ( !v76 )
        v74 = (struct MilRectF *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    }
    CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)&v166, v74);
  }
  else
  {
    v136 = *((_QWORD *)this + 1);
    v178 = 0LL;
    v177 = 0LL;
    CVisual::GetBounds(v6, v136);
    CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)&v166);
    v173 = v177;
  }
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v173, &v172);
  if ( *((float *)&v173 + 2) <= *(float *)&v173 || *((float *)&v173 + 3) <= *((float *)&v173 + 1) )
    goto LABEL_105;
  v77 = *(float *)&v173 + 6291456.25;
  LODWORD(v180) = (int)(LODWORD(v77) << 10) >> 11;
  v78 = *((float *)&v173 + 1) + 6291456.25;
  DWORD1(v180) = (int)(LODWORD(v78) << 10) >> 11;
  v79 = *((float *)&v173 + 2) + 6291456.25;
  DWORD2(v180) = (int)(LODWORD(v79) << 10) >> 11;
  v162 = *((float *)&v173 + 3) + 6291456.25;
  HIDWORD(v180) = (int)(LODWORD(v162) << 10) >> 11;
  v80 = DynArray<tagRECT,0>::AddMultipleAndSet(v49 + 1406, &v180);
  v164[0] = v80;
  if ( v80 >= 0 )
  {
    if ( *((_BYTE *)v49 + 11311) && !CVisual::IsPassiveUpdateMode((CVisual *)v6) )
      *((_BYTE *)v49 + 11311) = 0;
    goto LABEL_105;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v80, 0x601u, 0LL);
  v81 = v164[0];
  MilInstrumentationCheckHR_MaybeFailFast(v160, 0LL, 0, v164[0], 0x1AEu, 0LL);
LABEL_284:
  MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v81, 0x158u, 0LL);
LABEL_60:
  *((_DWORD *)this + 357) += 2;
  return v4;
}
