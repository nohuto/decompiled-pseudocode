/*
 * XREFs of ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D310
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18005B960 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContex.c)
 * Callees:
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x18000CEFC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ?Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x180011078 (-Push@CLightStack@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x1800110F4 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?clear_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18002D318 (-clear_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo@@.c)
 *     ?reserve_region@?$vector_facade@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@V?$buffer_impl@V?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@_K0@Z @ 0x18002E48C (-reserve_region@-$vector_facade@V-$unique_ptr@VCOcclusionInfo@@U-$default_delete@VCOcclusionInfo.c)
 *     ??R?$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z @ 0x18002E810 (--R-$default_delete@VCOcclusionInfo@@@std@@QEBAXPEAVCOcclusionInfo@@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180059ED0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180066330 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800690A0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180070318 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18008D3AC (--$Is90Or270RotationWithTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18008F7DC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800BDBD0 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800BE080 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800BED44 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x1800C4D30 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800DCA90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800F26A4 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18011B668 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasProtectedContent@CVisual@@QEBA_NXZ @ 0x1801D5A9C (-HasProtectedContent@CVisual@@QEBA_NXZ.c)
 *     ?IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z @ 0x18021CC04 (-IsOpaque@CFilterEffect@@QEAA_NPEBVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026F868 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COcclusionContext::PreSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  __int64 v3; // rdi
  bool v4; // zf
  __int64 v6; // rax
  _QWORD *v8; // r14
  __int64 v9; // r8
  __int64 *v10; // r8
  __int64 *v11; // r15
  void **j; // rax
  void *v13; // r13
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  struct _LIST_ENTRY *k; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // r15
  _BYTE *v21; // rbx
  struct CComposition *v22; // r8
  __int64 v23; // rax
  float *v24; // rdx
  char v25; // bl
  __int64 v26; // rcx
  unsigned int v27; // eax
  int v28; // eax
  int v29; // eax
  CMILMatrix *v30; // rcx
  float v31; // xmm5_4
  float v32; // xmm7_4
  float v33; // xmm8_4
  float v34; // xmm1_4
  int v35; // eax
  float v36; // xmm4_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm3_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  unsigned __int64 v43; // rdx
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  bool v48; // r14
  _DWORD *v49; // rdx
  char v50; // al
  float v51; // xmm7_4
  __int64 v52; // rax
  float v53; // xmm1_4
  _BYTE *v54; // r14
  _DWORD *v55; // r8
  __int64 v56; // rax
  __int64 **v57; // r14
  void *v58; // rbx
  unsigned int v59; // eax
  _OWORD *v60; // r13
  CVisual *v61; // r15
  __int64 v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rcx
  _QWORD *v65; // rbx
  _DWORD *v66; // rdx
  CVisual *v67; // r14
  _QWORD *v68; // rdx
  __int64 v69; // r13
  __int64 *v70; // rax
  unsigned int v71; // ecx
  __int128 v72; // xmm1
  __int128 v73; // xmm1
  _BYTE *v74; // r15
  CGeometry *v75; // rcx
  __int64 v76; // rcx
  int v77; // eax
  bool v78; // al
  unsigned int v79; // r12d
  __int64 v81; // rax
  __int64 v82; // rbx
  unsigned __int8 v83; // dl
  __int64 v84; // rax
  void *v85; // rbx
  int v86; // r8d
  __int64 v87; // rcx
  __int128 v88; // xmm1
  __int64 v89; // rdx
  int v90; // eax
  __int128 v91; // xmm0
  __int128 v92; // xmm1
  unsigned int v93; // eax
  const struct CMILMatrix *v94; // r12
  struct CMILMatrix *v95; // rax
  __int64 v96; // r8
  _BYTE *v97; // r9
  __int64 v98; // rcx
  _BYTE *v99; // r8
  unsigned int mm; // eax
  _QWORD *v101; // r8
  __int64 v102; // r15
  struct _LIST_ENTRY *v103; // rbx
  struct _LIST_ENTRY **p_Blink; // r11
  struct _LIST_ENTRY *v105; // rax
  struct _LIST_ENTRY *v106; // r11
  __int64 v107; // rax
  __int128 v108; // xmm1
  __int128 v109; // xmm0
  __int128 v110; // xmm1
  int v111; // eax
  int v112; // eax
  unsigned int v113; // ecx
  void (__fastcall ***v114)(void *, __int64); // rcx
  bool v115; // bl
  CGeometry *v116; // rcx
  int ShapeData; // eax
  unsigned int v118; // ecx
  unsigned int v119; // ecx
  int v120; // ebx
  int v121; // eax
  int v122; // eax
  __int128 v123; // xmm0
  unsigned int v124; // ecx
  __int64 v125; // rax
  void *v126; // rbx
  int v127; // r12d
  unsigned int v128; // eax
  unsigned int v129; // ecx
  unsigned int v130; // ecx
  int v131; // r12d
  int v132; // eax
  __int128 v133; // xmm0
  unsigned int v134; // ecx
  __int64 v135; // rax
  void *v136; // rbx
  int v137; // r12d
  unsigned int v138; // eax
  unsigned int v139; // ecx
  __int64 v140; // rax
  void *v141; // rbx
  int v142; // r8d
  unsigned int v143; // eax
  unsigned int v144; // ecx
  __int64 v145; // rax
  void *v146; // rbx
  unsigned int v147; // eax
  unsigned __int8 IsEqual; // al
  __int64 v149; // rdx
  _QWORD *v150; // rcx
  __int64 v151; // rax
  struct _LIST_ENTRY *Blink; // r10
  struct _LIST_ENTRY *v153; // r11
  _QWORD *v154; // rbx
  __int64 v155; // rax
  _BYTE *v156; // rcx
  __int64 n; // rdx
  _QWORD *v158; // rdx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // rax
  _BYTE *v162; // rcx
  __int64 i; // rdx
  _QWORD **v164; // rdx
  _QWORD *v165; // rax
  _QWORD *v166; // rcx
  __int64 v167; // r8
  __int64 v168; // rax
  __int64 ii; // rdx
  _QWORD *v170; // rax
  __int64 v171; // r8
  __int64 v172; // rax
  _BYTE *v173; // rcx
  __int64 kk; // rdx
  _QWORD **v175; // rdx
  _QWORD *v176; // rax
  _QWORD *v177; // rcx
  unsigned int Slot; // eax
  __int64 v179; // r10
  __int64 v180; // rcx
  _QWORD *v181; // rax
  _QWORD *v182; // rcx
  __int64 **TreeData; // rax
  int v184; // edx
  __int64 *v185; // r13
  int v186; // r12d
  unsigned int nn; // r15d
  _QWORD *v188; // rcx
  _BYTE *LightAtNoRef; // rax
  __int64 v190; // r14
  int v191; // eax
  char *v192; // rdx
  struct _LIST_ENTRY *v193; // r8
  __int64 v194; // r8
  _BYTE *v195; // rbx
  struct CEffect *v196; // rax
  struct CEffect *EffectInternal; // rbx
  __int64 v198; // rcx
  _BYTE *v199; // r9
  __int64 jj; // r8
  _QWORD **v201; // r8
  CFilterEffect *v202; // rbx
  unsigned int v203; // r14d
  int v204; // eax
  unsigned int v205; // ecx
  unsigned __int64 v206; // rcx
  void *v207; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *m; // rcx
  unsigned int v210; // r14d
  int v211; // eax
  unsigned int v212; // ecx
  unsigned __int64 v213; // rax
  void *v214; // rbx
  unsigned int v215; // r14d
  int v216; // eax
  unsigned int v217; // ecx
  unsigned __int64 v218; // rax
  void *v219; // rbx
  unsigned int v220; // r14d
  int v221; // eax
  unsigned int v222; // ecx
  unsigned __int64 v223; // rax
  void *v224; // rbx
  unsigned int v225; // r14d
  int v226; // eax
  unsigned int v227; // ecx
  unsigned __int64 v228; // rax
  void *v229; // rbx
  unsigned int v230; // r14d
  int v231; // eax
  void *v232; // rbx
  bool IsOpaque; // al
  HANDLE ProcessHeap; // rax
  __int128 v235; // xmm1
  HANDLE v236; // rax
  unsigned int v237; // ecx
  HANDLE v238; // rax
  unsigned int v239; // ecx
  HANDLE v240; // rax
  unsigned int v241; // ecx
  HANDLE v242; // rax
  int v243; // eax
  HANDLE v244; // rax
  int v245; // [rsp+20h] [rbp-E0h]
  bool v246; // [rsp+30h] [rbp-D0h]
  int v247; // [rsp+34h] [rbp-CCh]
  int v248; // [rsp+34h] [rbp-CCh]
  bool v249; // [rsp+38h] [rbp-C8h] BYREF
  char v250; // [rsp+39h] [rbp-C7h] BYREF
  bool v251; // [rsp+3Ah] [rbp-C6h] BYREF
  char v252; // [rsp+3Bh] [rbp-C5h]
  void *v253[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct CVisualTree *v254; // [rsp+50h] [rbp-B0h]
  __int64 v255; // [rsp+58h] [rbp-A8h] BYREF
  float v256; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v257; // [rsp+70h] [rbp-90h] BYREF
  __int128 v258; // [rsp+80h] [rbp-80h]
  __int128 v259; // [rsp+90h] [rbp-70h]
  __int128 v260; // [rsp+A0h] [rbp-60h]
  int v261; // [rsp+B0h] [rbp-50h]
  _BYTE v262[64]; // [rsp+C0h] [rbp-40h] BYREF
  int v263; // [rsp+100h] [rbp+0h]
  _BYTE v264[64]; // [rsp+110h] [rbp+10h] BYREF
  int v265; // [rsp+150h] [rbp+50h]
  _BYTE v266[64]; // [rsp+160h] [rbp+60h] BYREF
  int v267; // [rsp+1A0h] [rbp+A0h]
  void *v268[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v269; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v270; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v271; // [rsp+1E0h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v3 = *((_QWORD *)this + 9);
  v4 = *((_DWORD *)this + 358) == 0;
  v256 = *((float *)this + 358);
  v6 = *(_QWORD *)a2;
  v246 = v4;
  v268[0] = a3;
  v254 = a2;
  v8 = 0LL;
  v247 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v6 + 184))(a2) )
  {
    v8 = (_QWORD *)(v3 + 336);
  }
  else
  {
    v160 = *(_QWORD *)(v3 + 232);
    if ( *(int *)v160 < 0 )
    {
      v161 = *(unsigned int *)(v160 + 4);
      v162 = (_BYTE *)(v160 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v161; ++v162 )
      {
        if ( *v162 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v164 = (unsigned int)i >= (unsigned int)v161
           ? 0LL
           : (_QWORD **)(v160 + v161 + 15 + 8 * i - (((_BYTE)v161 + 15) & 7));
      v165 = *v164;
      if ( *v164 )
      {
        v166 = (_QWORD *)*v165;
        if ( (_QWORD *)*v165 != v165 )
        {
          while ( (const struct CVisualTree *)v166[4] != a2 )
          {
            v166 = (_QWORD *)*v166;
            if ( v166 == v165 )
              goto LABEL_3;
          }
          v8 = v166 - 45;
        }
      }
    }
  }
LABEL_3:
  v9 = *((_QWORD *)this + 177);
  if ( v9 )
    v10 = (__int64 *)(v9 + 1888);
  else
    v10 = (__int64 *)&CBackdropVisualImageKey::sc_NoBVIKey;
  v11 = v8 + 25;
  for ( j = (void **)v8[25]; ; ++j )
  {
    if ( j == (void **)v8[26] )
      goto LABEL_253;
    v13 = *j;
    v14 = *v10;
    v253[0] = v13;
    if ( *((_QWORD *)v13 + 1) == v14 && *((_QWORD *)v13 + 2) == v10[1] )
      break;
  }
  if ( v13 )
  {
    v15 = v8 + 33;
LABEL_11:
    *((_BYTE *)v13 + 25) = 10;
    goto LABEL_12;
  }
LABEL_253:
  v15 = v8 + 33;
  (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *))(*(_QWORD *)v8[33] + 344LL))(v8[33], &v255, v10);
  v13 = (void *)v255;
  v149 = (__int64)(v8[26] - v8[25]) >> 3;
  v253[0] = (void *)v255;
  v150 = detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::reserve_region(
           (detail::liberal_expansion_policy *)(v8 + 25),
           v149);
  v151 = v255;
  v255 = 0LL;
  *v150 = v151;
  if ( v255 )
    std::default_delete<COcclusionInfo>::operator()((__int64)v150, (__int64 (__fastcall ***)(_QWORD, __int64))v255);
  if ( v13 )
    goto LABEL_11;
LABEL_12:
  k = *(struct _LIST_ENTRY **)(*v15 + 16LL);
  Flink = k[31].Flink;
  if ( (struct _LIST_ENTRY *)v8[30] != Flink )
  {
    v8[30] = Flink;
    v18 = *v11;
    while ( v18 != v8[26] )
    {
      k = *(struct _LIST_ENTRY **)v18;
      if ( *(_QWORD *)(*(_QWORD *)v18 + 8LL) == CBackdropVisualImageKey::sc_NoBVIKey
        && k[1].Flink == (struct _LIST_ENTRY *)qword_1803E9F48
        || (v4 = BYTE1(k[1].Blink) == 1, --BYTE1(k[1].Blink), !v4) )
      {
        v18 += 8LL;
      }
      else
      {
        v82 = (v18 - *v11) >> 3;
        detail::vector_facade<std::unique_ptr<COcclusionInfo>,detail::buffer_impl<std::unique_ptr<COcclusionInfo>,1,1,detail::liberal_expansion_policy>>::clear_region(
          v8 + 25,
          v82,
          1LL);
        v18 = *v11 + 8 * v82;
      }
    }
  }
  v4 = *((_QWORD *)this + 177) == 0LL;
  v19 = -1;
  v20 = *((_QWORD *)this + 10);
  *(_QWORD *)&v269 = v20;
  if ( v4 )
    goto LABEL_19;
  v102 = *((_QWORD *)this + 2);
  v103 = *(struct _LIST_ENTRY **)(*(_QWORD *)(v102 + 8) - 8LL);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v103->Flink[11].Blink)(v103) )
  {
    p_Blink = (struct _LIST_ENTRY **)(v3 + 336);
LABEL_182:
    if ( p_Blink )
    {
      for ( k = p_Blink[21]; k != p_Blink[22]; k = (struct _LIST_ENTRY *)((char *)k + 8) )
      {
        v192 = *(char **)v102;
        v193 = k->Flink[112].Flink;
        if ( (((*(_QWORD *)(v102 + 8) - *(_QWORD *)v102) ^ ((char *)k->Flink[112].Blink - (char *)v193)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        {
          v194 = (char *)v193 - v192;
          while ( &v192[v194] != (char *)k->Flink[112].Blink )
          {
            if ( *(_QWORD *)&v192[v194] != *(_QWORD *)v192 || *(_QWORD *)&v192[v194 + 8] != *((_QWORD *)v192 + 1) )
              goto LABEL_424;
            v192 += 16;
          }
          k->Flink[124].Flink = p_Blink[33][1].Flink[31].Flink;
          v105 = k->Flink;
          goto LABEL_186;
        }
LABEL_424:
        ;
      }
    }
    goto LABEL_185;
  }
  TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v3);
  if ( TreeDataListHead )
  {
    for ( m = TreeDataListHead->Flink; m != TreeDataListHead; m = m->Flink )
    {
      p_Blink = &m[-23].Blink;
      if ( m[2].Flink == v103 )
        goto LABEL_182;
    }
  }
LABEL_185:
  LODWORD(k) = 0;
  v105 = 0LL;
LABEL_186:
  v106 = (struct _LIST_ENTRY *)*((_QWORD *)this + 177);
  if ( v105 == v106 )
  {
    v195 = v268[0];
    v78 = v246;
    v79 = 0;
    *((_BYTE *)this + 1424) = 1;
    *v195 = 0;
    goto LABEL_126;
  }
  if ( !*((_BYTE *)this + 1424) )
  {
    Blink = v106[122].Blink;
    v153 = v106[123].Flink;
    if ( Blink == v153 )
    {
LABEL_262:
      v78 = v246;
      v79 = 0;
      *(_BYTE *)v268[0] = 0;
      goto LABEL_126;
    }
    v154 = (_QWORD *)*((_QWORD *)this + 2);
    while ( 1 )
    {
      if ( (struct _LIST_ENTRY *)v3 == Blink->Flink )
      {
        k = Blink->Blink;
        if ( ((((char *)Blink[1].Flink - (char *)k) ^ (v154[1] - *v154)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_261:
      Blink += 4;
      if ( Blink == v153 )
        goto LABEL_262;
    }
    v159 = *v154 - (_QWORD)k;
    while ( (struct _LIST_ENTRY *)((char *)k + v159) != (struct _LIST_ENTRY *)v154[1] )
    {
      if ( *(struct _LIST_ENTRY **)((char *)&k->Flink + v159) != k->Flink
        || *(struct _LIST_ENTRY **)((char *)&k->Blink + v159) != k->Blink )
      {
        goto LABEL_261;
      }
      ++k;
    }
  }
  v20 = v269;
  v13 = v253[0];
LABEL_19:
  if ( !v13 )
  {
    v79 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)k, 0LL, 0, -2147024882, 0x10Eu, 0LL);
    return v79;
  }
  *((_BYTE *)v13 + 24) &= 0xF0u;
  v21 = v268[0];
  v22 = g_pComposition;
  *((_DWORD *)v13 + 7) = *((_DWORD *)this + 357);
  *v21 = 1;
  if ( *((_BYTE *)v22 + 1274) )
  {
    if ( !CVisual::HasProtectedContent((CVisual *)v3) )
    {
      v22 = g_pComposition;
      goto LABEL_21;
    }
    v78 = v246;
    v79 = 0;
    *v21 = 0;
LABEL_126:
    if ( !v78 )
      ++*((_DWORD *)this + 358);
    return v79;
  }
LABEL_21:
  v23 = *((_QWORD *)v254 + 8);
  if ( v3 == v23 )
  {
    if ( v23 )
      v24 = (float *)((char *)v254 + 72);
    else
      v24 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v24 = (float *)(v3 + 148);
  }
  v25 = 0;
  LODWORD(v26) = (v24[5] <= v24[4]) + 1;
  if ( v24[2] > *v24 )
    LODWORD(v26) = v24[5] <= v24[4];
  v27 = v26 + 1;
  if ( v24[3] > v24[1] )
    v27 = v26;
  if ( v27 > 1 )
  {
LABEL_132:
    v19 = 0;
    goto LABEL_133;
  }
  v28 = *((_DWORD *)this + 368);
  if ( !v28 || (v26 = (unsigned int)(v28 - 1), (v19 = *(_DWORD *)(*((_QWORD *)this + 186) + 4 * v26)) != 0) )
  {
    v29 = *((_DWORD *)this + 8);
    v271 = 0LL;
    v270 = 0LL;
    if ( v29 )
      v30 = (CMILMatrix *)(*((_QWORD *)this + 6) + 68LL * (unsigned int)(v29 - 1));
    else
      v30 = (CMILMatrix *)&CMILMatrix::Identity;
    CMILMatrix::Transform3DBoundsHelper<1>(v30);
    v31 = *(float *)&v270;
    v32 = *((float *)&v270 + 2);
    if ( *((float *)&v270 + 2) > *(float *)&v270 )
    {
      v33 = *((float *)&v270 + 3);
      v34 = *((float *)&v270 + 1);
      if ( *((float *)&v270 + 3) > *((float *)&v270 + 1) )
      {
        v35 = *((_DWORD *)this + 36);
        if ( v35 )
        {
          v270 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v35 - 1));
          v36 = *(float *)&v270;
          if ( v31 > *(float *)&v270 )
            v36 = v31;
          v37 = *((float *)&v270 + 1);
          v38 = *((float *)&v270 + 1);
          if ( v34 > *((float *)&v270 + 1) )
          {
            v37 = v34;
            v38 = v34;
          }
          v39 = *((float *)&v270 + 2);
          v40 = *((float *)&v270 + 2);
          if ( *((float *)&v270 + 2) > v32 )
          {
            v39 = v32;
            v40 = v32;
          }
          v41 = *((float *)&v270 + 3);
          v42 = *((float *)&v270 + 3);
          if ( *((float *)&v270 + 3) > v33 )
          {
            v41 = v33;
            v42 = v33;
          }
          v33 = v42;
          if ( v40 <= v36 || v41 <= v38 )
          {
            v39 = 0.0;
            v37 = 0.0;
            v36 = 0.0;
            v33 = 0.0;
          }
          v31 = v36;
          v34 = v37;
          v32 = v39;
        }
        v43 = *((_QWORD *)this + 128);
        LODWORD(v26) = 0;
        if ( v43 )
        {
          do
          {
            if ( ((v19 >> v26) & 1) != 0 )
            {
              v44 = v31;
              if ( *((float *)this + 4 * (unsigned int)v26 + 258) > v31 )
                v44 = *((float *)this + 4 * (unsigned int)v26 + 258);
              v45 = v34;
              if ( *((float *)this + 4 * (unsigned int)v26 + 259) > v34 )
                v45 = *((float *)this + 4 * (unsigned int)v26 + 259);
              v46 = v32;
              if ( v32 > *((float *)this + 4 * (unsigned int)v26 + 260) )
                v46 = *((float *)this + 4 * (unsigned int)v26 + 260);
              v47 = v33;
              if ( v33 > *((float *)this + 4 * (unsigned int)v26 + 261) )
                v47 = *((float *)this + 4 * (unsigned int)v26 + 261);
              if ( v46 <= v44 || v47 <= v45 )
              {
                v45 = 0.0;
                v44 = 0.0;
                v46 = 0.0;
                v47 = 0.0;
              }
              if ( v46 > v44 && v47 > v45 )
                goto LABEL_60;
              v19 &= ~(1 << v26);
            }
            LODWORD(v26) = v26 + 1;
          }
          while ( (unsigned int)v26 < v43 );
        }
      }
    }
    v22 = g_pComposition;
    goto LABEL_132;
  }
LABEL_133:
  if ( *((_BYTE *)this + 1206) )
  {
LABEL_60:
    if ( v256 != 0.0 )
      goto LABEL_84;
    if ( (*(_BYTE *)(v3 + 102) & 2) != 0
      || (*(_DWORD *)(v3 + 96) & 0x100) == 0
      || (*(_BYTE *)(v3 + 101) & 0x18) != 0
      || ((*(_DWORD *)(v3 + 200) - 2) & 0xFFFFFFFD) == 0 )
    {
      goto LABEL_179;
    }
    if ( *(_DWORD *)(v3 + 108) == 1 )
      v25 = 1;
    v48 = v20 && *(_DWORD *)(v20 + 108) == 1;
    if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3) )
    {
      v49 = *(_DWORD **)(v3 + 232);
      if ( (*v49 & 0x400000) == 0 )
      {
LABEL_72:
        v50 = 0;
LABEL_73:
        if ( v25 )
        {
          if ( v48 )
          {
            if ( v50 )
              goto LABEL_179;
          }
          else if ( (unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v3 + 80)) )
          {
            goto LABEL_179;
          }
        }
        v51 = *(float *)&FLOAT_1_0;
        if ( (*v49 & 0x400000) != 0 )
        {
          EffectInternal = CVisual::GetEffectInternal((CVisual *)v3);
          if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
                 EffectInternal,
                 58LL) )
          {
            v51 = *((float *)EffectInternal + 20);
          }
        }
        if ( fminf(1.0, fmaxf(v51, 0.0)) >= 1.0 )
        {
          if ( v3 == *((_QWORD *)v254 + 8) )
            goto LABEL_490;
          v52 = *(_QWORD *)(v3 + 224);
          if ( (*(_DWORD *)(v52 + 4) & 0x8000000) != 0 )
          {
            v184 = *(_DWORD *)(v52 + 12);
            v26 = v52 + 12;
            if ( (v184 & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v26 += (v184 & 0xFFFFFF) + 4LL;
                v184 = *(_DWORD *)v26;
              }
              while ( (*(_DWORD *)v26 & 0x7F000000) != 0x5000000 );
            }
            v256 = *(float *)(v26 + 4);
            v53 = v256;
          }
          else
          {
            v53 = *(float *)&FLOAT_1_0;
          }
          if ( fminf(1.0, fmaxf(v53, 0.0)) >= 1.0 )
          {
LABEL_490:
            if ( !(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 216LL))(v3) )
            {
              if ( (**(_DWORD **)(v3 + 232) & 0x400000) == 0
                || (v202 = CVisual::GetEffectInternal((CVisual *)v3),
                    !(*(unsigned __int8 (__fastcall **)(CFilterEffect *, __int64))(*(_QWORD *)v202 + 56LL))(v202, 61LL))
                || (IsOpaque = CFilterEffect::IsOpaque(v202, (const struct CVisual *)v3)) )
              {
                if ( !(*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v254 + 184LL))(v254) )
                {
                  TreeData = CVisual::FindTreeData((CVisual *)v3, v254);
                  if ( TreeData )
                  {
                    v26 = TreeData[33][2];
                    if ( TreeData[32] != *(__int64 **)(v26 + 496) )
                      goto LABEL_84;
                    goto LABEL_179;
                  }
                }
                LODWORD(v26) = v246;
LABEL_84:
                v54 = v268[0];
                goto LABEL_85;
              }
            }
          }
        }
LABEL_179:
        v246 = 0;
        goto LABEL_84;
      }
      v196 = CVisual::GetEffectInternal((CVisual *)v3);
      if ( !(*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v196 + 56LL))(v196, 61LL) )
      {
        v49 = *(_DWORD **)(v3 + 232);
        goto LABEL_72;
      }
    }
    v49 = *(_DWORD **)(v3 + 232);
    v50 = 1;
    goto LABEL_73;
  }
  v246 = 0;
  v81 = 0LL;
  if ( v22 )
    v81 = *((_QWORD *)v22 + 62);
  v4 = v8[29] == v81;
  v54 = v268[0];
  if ( !v4 )
    *(_BYTE *)v268[0] = 0;
LABEL_85:
  v55 = *(_DWORD **)(v3 + 232);
  if ( (*v55 & 0x2000000) != 0 )
    goto LABEL_269;
  LODWORD(v26) = *(_DWORD *)(*(_QWORD *)(v3 + 224) + 4LL);
  if ( (v26 & 0x2000000) != 0 || (v26 & 0x4000000) != 0 )
    goto LABEL_269;
  if ( (*v55 & 0x400000) != 0 )
  {
    v155 = (unsigned int)v55[1];
    v156 = v55 + 2;
    for ( n = 0LL; (unsigned int)n < (unsigned int)v155; ++v156 )
    {
      if ( *v156 == 10 )
        break;
      n = (unsigned int)(n + 1);
    }
    v158 = (unsigned int)n >= (unsigned int)v155
         ? 0LL
         : (_QWORD *)((char *)v55 + v155 + 8 * n - (((_BYTE)v155 + 15) & 7) + 15);
    if ( *v158 && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v158 + 56LL))(*v158, 61LL) )
      goto LABEL_269;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 56LL))(v3, 93LL)
    && (*(_QWORD *)(v3 + 712) || *(_QWORD *)(v3 + 704)) )
  {
LABEL_269:
    ++*((_DWORD *)this + 359);
    *((_BYTE *)this + 1206) = 0;
  }
  if ( *v54 != 1 )
    goto LABEL_124;
  v56 = *((unsigned int *)this + 369);
  v57 = 0LL;
  v58 = 0LL;
  v268[0] = 0LL;
  if ( *((_DWORD *)this + 368) == (_DWORD)v56 )
  {
    v210 = 2 * v56;
    if ( (unsigned __int64)(2 * v56) > 0xFFFFFFFF )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024362, 0x64u, 0LL);
      goto LABEL_95;
    }
    if ( v210 <= 0x40 )
      v210 = 64;
    v211 = HrMalloc(4uLL, v210, v268);
    if ( v211 < 0 )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v212, 0LL, 0, v211, 0x6Bu, 0LL);
      v58 = v268[0];
      goto LABEL_95;
    }
    v213 = 4LL * *((unsigned int *)this + 368);
    if ( v213 > 0xFFFFFFFF )
    {
      v57 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(v212, 0LL, 0, -2147024362, 0x6Du, 0LL);
      v58 = v268[0];
      goto LABEL_95;
    }
    v214 = v268[0];
    memcpy_0(v268[0], *((const void **)this + 186), (unsigned int)v213);
    operator delete(*((void **)this + 186));
    *((_DWORD *)this + 369) = v210;
    v57 = 0LL;
    *((_QWORD *)this + 186) = v214;
    v58 = 0LL;
  }
  *(_DWORD *)(*((_QWORD *)this + 186) + 4LL * *((unsigned int *)this + 368)) = v19;
  v59 = *((_DWORD *)this + 374);
  if ( v59 <= ++*((_DWORD *)this + 368) )
    v59 = *((_DWORD *)this + 368);
  *((_DWORD *)this + 374) = v59;
LABEL_95:
  if ( v58 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v58);
  }
  *((_BYTE *)v13 + 24) |= 1u;
  if ( v19 || *((_BYTE *)this + 1206) )
  {
    v60 = v264;
    v61 = (CVisual *)*((_QWORD *)this + 9);
    if ( !*(_QWORD *)(v3 + 248) )
      v60 = 0LL;
    v268[0] = v60;
    v261 = 0;
    v62 = *(_QWORD *)v254;
    v265 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(v62 + 184))(v254) )
    {
      v65 = (_QWORD *)((char *)v61 + 336);
    }
    else
    {
      v167 = *((_QWORD *)v61 + 29);
      if ( *(int *)v167 >= 0 )
        goto LABEL_448;
      v168 = *(unsigned int *)(v167 + 4);
      v64 = (_QWORD *)(v167 + 8);
      for ( ii = 0LL; (unsigned int)ii < (unsigned int)v168; v64 = (_QWORD *)((char *)v64 + 1) )
      {
        if ( *(_BYTE *)v64 == 1 )
          break;
        ii = (unsigned int)(ii + 1);
      }
      if ( (unsigned int)ii >= (unsigned int)v168 )
      {
        v63 = 0LL;
      }
      else
      {
        LODWORD(v64) = v168 + 15;
        v63 = v167 + v168 + 15 + 8 * ii - (((_BYTE)v168 + 15) & 7);
      }
      v170 = *(_QWORD **)v63;
      if ( !*(_QWORD *)v63 )
        goto LABEL_448;
      v64 = (_QWORD *)*v170;
      if ( (_QWORD *)*v170 == v170 )
        goto LABEL_448;
      while ( 1 )
      {
        v65 = v64 - 45;
        if ( (struct CVisualTree *)v64[4] == v254 )
          break;
        v64 = (_QWORD *)*v64;
        if ( v64 == v170 )
          goto LABEL_448;
      }
    }
    if ( v65 )
    {
      v252 = 0;
      if ( v61 == *((CVisual **)v254 + 8) )
        goto LABEL_270;
      v66 = (_DWORD *)*((_QWORD *)v61 + 29);
      v67 = 0LL;
      if ( (*v66 & 0x1000000) != 0 )
      {
        v198 = (unsigned int)v66[1];
        v199 = v66 + 2;
        for ( jj = 0LL; (unsigned int)jj < (unsigned int)v198; ++v199 )
        {
          if ( *v199 == 8 )
            break;
          jj = (unsigned int)(jj + 1);
        }
        if ( (unsigned int)jj >= (unsigned int)v198 )
          v201 = 0LL;
        else
          v201 = (_QWORD **)((char *)v66 + v198 + 8 * jj - (((_BYTE)v198 + 15) & 7) + 15);
        if ( *v201 )
          v67 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD **, _BYTE *))(*(_QWORD *)**v201 + 184LL))(
                             **v201,
                             v66,
                             v201,
                             v199);
      }
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v254 + 184LL))(v254) )
      {
        v68 = (_QWORD *)((char *)v61 + 336);
      }
      else
      {
        v171 = *((_QWORD *)v61 + 29);
        if ( *(int *)v171 >= 0 )
          goto LABEL_110;
        v172 = *(unsigned int *)(v171 + 4);
        v173 = (_BYTE *)(v171 + 8);
        for ( kk = 0LL; (unsigned int)kk < (unsigned int)v172; ++v173 )
        {
          if ( *v173 == 1 )
            break;
          kk = (unsigned int)(kk + 1);
        }
        v175 = (unsigned int)kk >= (unsigned int)v172
             ? 0LL
             : (_QWORD **)(v172 + 15 + v171 + 8 * kk - (((_BYTE)v172 + 15) & 7));
        v176 = *v175;
        if ( !*v175 )
          goto LABEL_110;
        v177 = (_QWORD *)*v176;
        if ( (_QWORD *)*v176 == v176 )
          goto LABEL_110;
        while ( 1 )
        {
          v68 = v177 - 45;
          if ( (struct CVisualTree *)v177[4] == v254 )
            break;
          v177 = (_QWORD *)*v177;
          if ( v177 == v176 )
            goto LABEL_110;
        }
      }
      if ( v68 && v68[32] != *(_QWORD *)(*(_QWORD *)(v68[33] + 16LL) + 496LL) && v67 )
      {
        v57 = CVisual::FindTreeData(v67, v254);
        v252 = 1;
        goto LABEL_113;
      }
LABEL_110:
      v69 = *((_QWORD *)v61 + 11);
      v57 = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v254 + 184LL))(v254) )
      {
        v57 = (__int64 **)(v69 + 336);
      }
      else if ( **(int **)(v69 + 232) < 0 )
      {
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v69 + 232), 1LL);
        v180 = *(unsigned int *)(v179 + 4);
        v63 = Slot >= (unsigned int)v180 ? 0LL : v180 + 15 + v179 + 8LL * Slot - (((_BYTE)v180 + 15) & 7);
        v181 = *(_QWORD **)v63;
        if ( *(_QWORD *)v63 )
        {
          v182 = (_QWORD *)*v181;
          if ( (_QWORD *)*v181 != v181 )
          {
            while ( (struct CVisualTree *)v182[4] != v254 )
            {
              v182 = (_QWORD *)*v182;
              if ( v182 == v181 )
                goto LABEL_112;
            }
            v57 = (__int64 **)(v182 - 45);
          }
        }
      }
LABEL_112:
      v60 = v268[0];
LABEL_113:
      if ( v57 )
      {
        v70 = v57[31];
LABEL_115:
        if ( v65[31] < (unsigned __int64)v70 )
        {
          v94 = (const struct CMILMatrix *)(v57 + 36);
          v95 = (struct CMILMatrix *)v266;
          if ( !v57 )
            v94 = 0LL;
          v263 = 0;
          v4 = *((_QWORD *)v61 + 31) == 0LL;
          v267 = 0;
          if ( v4 )
            v95 = 0LL;
          CVisual::CalcTransform(v61, v254, v94, &v251, (struct CMILMatrix *)v262, v95);
          if ( v252 || !v94 )
          {
            LOBYTE(v96) = 1;
          }
          else if ( v251 )
          {
            IsEqual = CMILMatrix::IsEqualTo<0>(v94, v262);
            v96 = IsEqual;
            LOBYTE(v96) = IsEqual ^ 1;
          }
          else
          {
            LOBYTE(v96) = 0;
          }
          v97 = v266;
          if ( !*((_QWORD *)v61 + 31) )
            v97 = 0LL;
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, _BYTE *, __int64, _BYTE *))(*v65 + 48LL))(
                 v65,
                 v262,
                 v96,
                 v97) )
          {
            v63 = *((_QWORD *)v61 + 29);
            if ( (*(_DWORD *)v63 & 0x800000) != 0 )
            {
              v98 = *(unsigned int *)(v63 + 4);
              v99 = (_BYTE *)(v63 + 8);
              for ( mm = 0; mm < (unsigned int)v98; ++v99 )
              {
                if ( *v99 == 9 )
                  break;
                ++mm;
              }
              if ( mm >= (unsigned int)v98 )
                v101 = 0LL;
              else
                v101 = (_QWORD *)(v63 + v98 + 15 + 8LL * mm - (((_BYTE)v98 + 15) & 7));
              if ( *v101 )
                CVisual::NotifyMidManipulationPropertyChange(v61, (const struct CMILMatrix *)v262);
            }
          }
        }
        if ( !v65[31] )
          ModuleFailFastForHRESULT(2291674884LL, retaddr);
        v71 = *((unsigned __int8 *)v65 + 11);
        v261 = *((_DWORD *)v65 + 88);
        v72 = *((_OWORD *)v65 + 19);
        v257 = *((_OWORD *)v65 + 18);
        v258 = v72;
        v73 = *((_OWORD *)v65 + 21);
        v259 = *((_OWORD *)v65 + 20);
        v260 = v73;
        if ( v60 )
        {
          v107 = v65[34];
          if ( v107 )
          {
            v108 = *(_OWORD *)(v107 + 16);
            *v60 = *(_OWORD *)v107;
            v109 = *(_OWORD *)(v107 + 32);
            v60[1] = v108;
            v110 = *(_OWORD *)(v107 + 48);
            v111 = *(_DWORD *)(v107 + 64);
          }
          else
          {
            v111 = *((_DWORD *)v65 + 88);
            v235 = *((_OWORD *)v65 + 19);
            *v60 = *((_OWORD *)v65 + 18);
            v109 = *((_OWORD *)v65 + 20);
            v60[1] = v235;
            v110 = *((_OWORD *)v65 + 21);
          }
          v60[2] = v109;
          v60[3] = v110;
          *((_DWORD *)v60 + 16) = v111;
        }
LABEL_118:
        if ( !(_BYTE)v71 )
        {
          v74 = v253[0];
          goto LABEL_120;
        }
        if ( v246 )
        {
          if ( (char)v261 >> 6 )
          {
            v83 = (char)v261 >> 6 == 1;
          }
          else
          {
            LOBYTE(v63) = 1;
            v83 = (unsigned __int8)CMILMatrix::IsAffine<1>(&v257, v63)
               && COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)&v257 + 1) - 0.0) & _xmm) < 0.000081380211
               && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v258 - 0.0) & _xmm) < 0.000081380211;
            v71 = v83;
            LOBYTE(v71) = v261 & 0x3F | ((v83 << 7) - 64);
            LOBYTE(v261) = v71;
          }
          if ( !v83 && !(unsigned __int8)CMILMatrix::Is90Or270RotationWithTranslateAndScaleIgnoreZ<1>(&v257) )
            v246 = 0;
        }
        v84 = *((unsigned int *)this + 9);
        v85 = 0LL;
        v86 = 0;
        v248 = 0;
        v268[0] = 0LL;
        if ( *((_DWORD *)this + 8) != (_DWORD)v84 )
          goto LABEL_149;
        v203 = 2 * v84;
        if ( (unsigned __int64)(2 * v84) > 0xFFFFFFFF )
        {
          v248 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, -2147024362, 0x64u, 0LL);
          v86 = -2147024362;
        }
        else
        {
          if ( v203 <= 8 )
            v203 = 8;
          v204 = HrMalloc(0x44uLL, v203, v268);
          v248 = v204;
          if ( v204 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v205, 0LL, 0, v204, 0x6Bu, 0LL);
          }
          else
          {
            v206 = 68LL * *((unsigned int *)this + 8);
            if ( v206 <= 0xFFFFFFFF )
            {
              v207 = v268[0];
              v248 = 0;
              memcpy_0(v268[0], *((const void **)this + 6), (unsigned int)v206);
              operator delete(*((void **)this + 6));
              *((_DWORD *)this + 9) = v203;
              *((_QWORD *)this + 6) = v207;
              v86 = 0;
              v85 = 0LL;
LABEL_149:
              v87 = *((_QWORD *)this + 6);
              v88 = v258;
              v89 = 68LL * *((unsigned int *)this + 8);
              v90 = v261;
              *(_OWORD *)(v89 + v87) = v257;
              v91 = v259;
              *(_OWORD *)(v89 + v87 + 16) = v88;
              v92 = v260;
              *(_OWORD *)(v89 + v87 + 32) = v91;
              *(_OWORD *)(v89 + v87 + 48) = v92;
              *(_DWORD *)(v89 + v87 + 64) = v90;
              v93 = *((_DWORD *)this + 14);
              if ( v93 <= ++*((_DWORD *)this + 8) )
                v93 = *((_DWORD *)this + 8);
              *((_DWORD *)this + 14) = v93;
              goto LABEL_152;
            }
            v248 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v206, 0LL, 0, -2147024362, 0x6Du, 0LL);
          }
          v86 = v248;
          v85 = v268[0];
        }
LABEL_152:
        if ( v85 )
        {
          v236 = GetProcessHeap();
          HeapFree(v236, 0, v85);
          v86 = v248;
        }
        if ( v86 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0x36u, 0LL);
          v79 = v248;
          MilInstrumentationCheckHR_MaybeFailFast(v237, 0LL, 0, v248, 0x19Du, 0LL);
          return v79;
        }
        v74 = v253[0];
        v247 = v86;
        *((_BYTE *)v253[0] + 24) |= 4u;
LABEL_120:
        v75 = *(CGeometry **)(v3 + 248);
        if ( !v75 )
          goto LABEL_121;
        if ( !v246 )
        {
LABEL_207:
          v116 = *(CGeometry **)(v3 + 248);
          *(_QWORD *)&v270 = 0LL;
          BYTE8(v270) = 0;
          *(_OWORD *)v268 = 0LL;
          ShapeData = CGeometry::GetShapeData(v116, (const struct D2D_SIZE_F *)(v3 + 140), (struct CShapePtr *)&v270);
          v247 = ShapeData;
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, ShapeData, 0x56Au, 0LL);
            goto LABEL_480;
          }
          v119 = v270;
          v120 = -2003292412;
          if ( (_QWORD)v270
            && (v121 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD))(*(_QWORD *)v270 + 48LL))(v270, v268, 0LL),
                v247 = v121,
                v120 = v121,
                v121 < 0) )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0, v121, 0x140u, 0LL);
          }
          else
          {
            v247 = v120;
            if ( v120 >= 0 )
            {
              CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v264, (struct MilRectF *)v268);
              v122 = *((_DWORD *)this + 36);
              v269 = 0LL;
              if ( v122 )
                v123 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)(v122 - 1));
              else
                v123 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
              v269 = v123;
              *(_OWORD *)v253 = *(_OWORD *)v268;
              TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v269, v253);
              v125 = *((unsigned int *)this + 37);
              v126 = 0LL;
              v127 = 0;
              v247 = 0;
              v253[0] = 0LL;
              if ( *((_DWORD *)this + 36) == (_DWORD)v125 )
              {
                v215 = 2 * v125;
                if ( (unsigned __int64)(2 * v125) > 0xFFFFFFFF )
                {
                  v127 = -2147024362;
                  v247 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, -2147024362, 0x64u, 0LL);
                  goto LABEL_217;
                }
                if ( v215 <= 8 )
                  v215 = 8;
                v216 = HrMalloc(0x10uLL, v215, v253);
                v247 = v216;
                v127 = v216;
                if ( v216 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v217, 0LL, 0, v216, 0x6Bu, 0LL);
                  v126 = v253[0];
                  goto LABEL_217;
                }
                v218 = 16LL * *((unsigned int *)this + 36);
                if ( v218 > 0xFFFFFFFF )
                {
                  v127 = -2147024362;
                  v247 = -2147024362;
                  MilInstrumentationCheckHR_MaybeFailFast(v217, 0LL, 0, -2147024362, 0x6Du, 0LL);
                  v126 = v253[0];
                  goto LABEL_217;
                }
                v219 = v253[0];
                v127 = 0;
                v247 = 0;
                memcpy_0(v253[0], *((const void **)this + 20), (unsigned int)v218);
                operator delete(*((void **)this + 20));
                *((_DWORD *)this + 37) = v215;
                *((_QWORD *)this + 20) = v219;
                v126 = 0LL;
              }
              *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * *((unsigned int *)this + 36)) = v269;
              v128 = *((_DWORD *)this + 42);
              v129 = ++*((_DWORD *)this + 36);
              if ( v128 <= v129 )
                v128 = *((_DWORD *)this + 36);
              *((_DWORD *)this + 42) = v128;
LABEL_217:
              if ( v126 )
              {
                v238 = GetProcessHeap();
                HeapFree(v238, 0, v126);
              }
              if ( v127 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, v127, 0x31u, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(v239, 0LL, 0, v127, 0x570u, 0LL);
                goto LABEL_480;
              }
              if ( (_QWORD)v270 )
              {
                v247 = (*(__int64 (__fastcall **)(_QWORD, void **))(*(_QWORD *)v270 + 88LL))(v270, v268);
                v131 = v247;
                if ( v247 >= 0 )
                {
                  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v264, (struct MilRectF *)v268);
                  v132 = *((_DWORD *)this + 44);
                  v269 = 0LL;
                  if ( v132 )
                    v133 = *(_OWORD *)(*((_QWORD *)this + 24) + 16LL * (unsigned int)(v132 - 1));
                  else
                    v133 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                  v269 = v133;
                  *(_OWORD *)v253 = *(_OWORD *)v268;
                  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v269, v253);
                  v135 = *((unsigned int *)this + 45);
                  v136 = 0LL;
                  v137 = 0;
                  v247 = 0;
                  v253[0] = 0LL;
                  if ( *((_DWORD *)this + 44) == (_DWORD)v135 )
                  {
                    v220 = 2 * v135;
                    if ( (unsigned __int64)(2 * v135) > 0xFFFFFFFF )
                    {
                      v137 = -2147024362;
                      v247 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v134, 0LL, 0, -2147024362, 0x64u, 0LL);
                      goto LABEL_228;
                    }
                    if ( v220 <= 8 )
                      v220 = 8;
                    v221 = HrMalloc(0x10uLL, v220, v253);
                    v247 = v221;
                    v137 = v221;
                    if ( v221 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v222, 0LL, 0, v221, 0x6Bu, 0LL);
                      v136 = v253[0];
                      goto LABEL_228;
                    }
                    v223 = 16LL * *((unsigned int *)this + 44);
                    if ( v223 > 0xFFFFFFFF )
                    {
                      v137 = -2147024362;
                      v247 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v222, 0LL, 0, -2147024362, 0x6Du, 0LL);
                      v136 = v253[0];
                      goto LABEL_228;
                    }
                    v224 = v253[0];
                    v137 = 0;
                    v247 = 0;
                    memcpy_0(v253[0], *((const void **)this + 24), (unsigned int)v223);
                    operator delete(*((void **)this + 24));
                    *((_DWORD *)this + 45) = v220;
                    *((_QWORD *)this + 24) = v224;
                    v136 = 0LL;
                  }
                  *(_OWORD *)(*((_QWORD *)this + 24) + 16LL * *((unsigned int *)this + 44)) = v269;
                  v138 = *((_DWORD *)this + 50);
                  v139 = ++*((_DWORD *)this + 44);
                  if ( v138 <= v139 )
                    v138 = *((_DWORD *)this + 44);
                  *((_DWORD *)this + 50) = v138;
LABEL_228:
                  if ( v136 )
                  {
                    v240 = GetProcessHeap();
                    HeapFree(v240, 0, v136);
                  }
                  if ( v137 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v139, 0LL, 0, v137, 0x31u, 0LL);
                    MilInstrumentationCheckHR_MaybeFailFast(v241, 0LL, 0, v137, 0x577u, 0LL);
                    goto LABEL_480;
                  }
                  v140 = *((unsigned int *)this + 361);
                  v141 = 0LL;
                  v142 = 0;
                  v247 = 0;
                  v253[0] = 0LL;
                  if ( *((_DWORD *)this + 360) != (_DWORD)v140 )
                    goto LABEL_232;
                  v225 = 2 * v140;
                  if ( (unsigned __int64)(2 * v140) > 0xFFFFFFFF )
                  {
                    v247 = -2147024362;
                    MilInstrumentationCheckHR_MaybeFailFast(v139, 0LL, 0, -2147024362, 0x64u, 0LL);
                    v142 = -2147024362;
                  }
                  else
                  {
                    if ( v225 <= 0x40 )
                      v225 = 64;
                    v226 = HrMalloc(4uLL, v225, v253);
                    v247 = v226;
                    if ( v226 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v227, 0LL, 0, v226, 0x6Bu, 0LL);
                    }
                    else
                    {
                      v228 = 4LL * *((unsigned int *)this + 360);
                      if ( v228 <= 0xFFFFFFFF )
                      {
                        v229 = v253[0];
                        v247 = 0;
                        memcpy_0(v253[0], *((const void **)this + 182), (unsigned int)v228);
                        operator delete(*((void **)this + 182));
                        *((_DWORD *)this + 361) = v225;
                        *((_QWORD *)this + 182) = v229;
                        v142 = 0;
                        v141 = 0LL;
LABEL_232:
                        *(_DWORD *)(*((_QWORD *)this + 182) + 4LL * *((unsigned int *)this + 360)) = 0;
                        v143 = *((_DWORD *)this + 366);
                        v144 = ++*((_DWORD *)this + 360);
                        if ( v143 <= v144 )
                          v143 = *((_DWORD *)this + 360);
                        *((_DWORD *)this + 366) = v143;
                        goto LABEL_235;
                      }
                      v247 = -2147024362;
                      MilInstrumentationCheckHR_MaybeFailFast(v227, 0LL, 0, -2147024362, 0x6Du, 0LL);
                    }
                    v142 = v247;
                    v141 = v253[0];
                  }
LABEL_235:
                  if ( v141 )
                  {
                    v242 = GetProcessHeap();
                    HeapFree(v242, 0, v141);
                    v142 = v247;
                  }
                  if ( v142 >= 0 )
                    goto LABEL_238;
                  MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v142, 0x579u, 0LL);
LABEL_480:
                  v142 = v247;
LABEL_238:
                  if ( BYTE8(v270) )
                  {
                    v144 = v270;
                    if ( (_QWORD)v270 )
                    {
                      (**(void (__fastcall ***)(_QWORD, __int64))v270)(v270, 1LL);
                      v142 = v247;
                    }
                  }
                  if ( v142 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, v142, 0x1B4u, 0LL);
                    return (unsigned int)v247;
                  }
                  v74[24] |= 2u;
LABEL_121:
                  v76 = *(_QWORD *)(v3 + 256);
                  v250 = 1;
                  v249 = 0;
                  if ( !v76
                    || ((*(void (__fastcall **)(__int64, char *, bool *))(*(_QWORD *)v76 + 280LL))(v76, &v250, &v249),
                        v250) )
                  {
                    v77 = *(_DWORD *)(v3 + 104);
                    if ( (v77 & 0x10) != 0 )
                    {
                      v4 = *(_DWORD *)(v3 + 200) == 0;
                      v250 = 0;
                      v249 = !v4;
                    }
                    else
                    {
                      if ( (v77 & 4) == 0 )
                        goto LABEL_124;
                      v250 = 0;
                      v243 = v77 & 0x7C000;
                      if ( !v243 || (v249 = 1, v243 == 0x4000) )
                        v249 = 0;
                    }
                  }
                  v145 = *((unsigned int *)this + 377);
                  v146 = 0LL;
                  v253[0] = 0LL;
                  if ( *((_DWORD *)this + 376) != (_DWORD)v145 )
                    goto LABEL_245;
                  v230 = 2 * v145;
                  if ( (unsigned __int64)(2 * v145) > 0xFFFFFFFF )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v76, 0LL, 0, -2147024362, 0x64u, 0LL);
                  }
                  else
                  {
                    if ( v230 <= 0x40 )
                      v230 = 64;
                    v231 = HrMalloc(1uLL, v230, v253);
                    if ( v231 >= 0 )
                    {
                      v232 = v253[0];
                      memcpy_0(v253[0], *((const void **)this + 190), *((unsigned int *)this + 376));
                      operator delete(*((void **)this + 190));
                      *((_QWORD *)this + 190) = v232;
                      v146 = 0LL;
                      *((_DWORD *)this + 377) = v230;
LABEL_245:
                      *(_BYTE *)(*((unsigned int *)this + 376) + *((_QWORD *)this + 190)) = v249;
                      v147 = *((_DWORD *)this + 382);
                      if ( v147 <= ++*((_DWORD *)this + 376) )
                        v147 = *((_DWORD *)this + 376);
                      *((_DWORD *)this + 382) = v147;
                      goto LABEL_248;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v231, 0x6Bu, 0LL);
                    v146 = v253[0];
                  }
LABEL_248:
                  if ( v146 )
                  {
                    v244 = GetProcessHeap();
                    HeapFree(v244, 0, v146);
                  }
                  v74[24] |= 8u;
                  goto LABEL_124;
                }
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x12E,
                  (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\geometry\\Shape.h",
                  (const char *)0x88982F04LL,
                  v245);
                v131 = -2003292412;
                v247 = -2003292412;
              }
              MilInstrumentationCheckHR_MaybeFailFast(v130, 0LL, 0, v131, 0x575u, 0LL);
              goto LABEL_480;
            }
          }
          MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0, v120, 0x56Eu, 0LL);
          goto LABEL_480;
        }
        v253[0] = 0LL;
        LOBYTE(v253[1]) = 0;
        v112 = CGeometry::GetShapeData(v75, (const struct D2D_SIZE_F *)(v3 + 140), (struct CShapePtr *)v253);
        v79 = v112;
        if ( v112 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v113, 0LL, 0, v112, 0x558u, 0LL);
          v115 = v251;
          goto LABEL_200;
        }
        v114 = (void (__fastcall ***)(void *, __int64))v253[0];
        if ( v253[0] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v253[0] + 16LL))(v253[0]) )
          {
LABEL_372:
            v114 = (void (__fastcall ***)(void *, __int64))v253[0];
            goto LABEL_373;
          }
          v114 = (void (__fastcall ***)(void *, __int64))v253[0];
          if ( v253[0] )
          {
            if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v253[0] + 72LL))(v253[0]) )
            {
              v115 = 1;
LABEL_200:
              v114 = (void (__fastcall ***)(void *, __int64))v253[0];
              goto LABEL_201;
            }
            goto LABEL_372;
          }
        }
LABEL_373:
        v115 = 0;
LABEL_201:
        if ( LOBYTE(v253[1]) && v114 )
          (**v114)(v114, 1LL);
        if ( (v79 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v114, 0LL, 0, v79, 0x1AAu, 0LL);
          return v79;
        }
        if ( !v115 )
          v246 = 0;
        goto LABEL_207;
      }
LABEL_270:
      v70 = 0LL;
      if ( g_pComposition )
        v70 = (__int64 *)*((_QWORD *)g_pComposition + 62);
      goto LABEL_115;
    }
LABEL_448:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v64, 0LL, 0, -2003292412, 0x6AEu, 0LL);
    v71 = v251;
    goto LABEL_118;
  }
LABEL_124:
  v78 = v246;
  if ( v246 )
  {
    if ( (unsigned int)((__int64)(*(_QWORD *)(v3 + 288) - *(_QWORD *)(v3 + 280)) >> 4)
      || (unsigned int)((__int64)(*(_QWORD *)(v3 + 312) - *(_QWORD *)(v3 + 304)) >> 4) )
    {
      v255 = 0x100000000LL;
      v185 = &v255;
LABEL_334:
      v186 = *(_DWORD *)v185;
      for ( nn = 0; ; ++nn )
      {
        if ( nn >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v3, v186) )
        {
          v185 = (__int64 *)((char *)v185 + 4);
          if ( v185 == (__int64 *)&v256 )
            goto LABEL_131;
          goto LABEL_334;
        }
        LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v188, nn, v186);
        v190 = (__int64)LightAtNoRef;
        if ( LightAtNoRef[170] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                         + 240LL))(
                 LightAtNoRef,
                 v254,
                 v3) )
          {
            v191 = CLightStack::Push((__int64)this + 208, v190, v186);
            if ( v191 < 0 )
              break;
          }
        }
      }
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, v191, 0x4Bu, 0LL);
    }
LABEL_131:
    v78 = v246;
  }
  v79 = v247;
  if ( v247 >= 0 )
    goto LABEL_126;
  return v79;
}
