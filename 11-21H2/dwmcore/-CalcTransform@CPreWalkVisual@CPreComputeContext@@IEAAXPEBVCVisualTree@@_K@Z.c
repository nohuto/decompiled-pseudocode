/*
 * XREFs of ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x18004C450
 * Callers:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18004C348 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320 (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18008F2F4 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800C6B2C (--$move@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800D5AC8 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?clear_region@?$vector_facade@PEAVIMonitorTarget@@V?$buffer_impl@PEAVIMonitorTarget@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801941BC (-clear_region@-$vector_facade@PEAVIMonitorTarget@@V-$buffer_impl@PEAVIMonitorTarget@@$01$00Vlibe.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1801F7950 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x1801FB15C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::CalcTransform(
        const struct CVisual **this,
        const struct CVisualTree *a2,
        _QWORD *a3)
{
  __int128 v3; // xmm9
  const struct CVisual *v4; // rdi
  const struct CVisualTree *v5; // r13
  const struct CVisual **v8; // rax
  bool v9; // zf
  const struct CVisual *v10; // rsi
  struct CTreeData *UnusedTreeData; // rbx
  _DWORD *v12; // rdx
  _BYTE *v13; // rbx
  _QWORD *v14; // rdx
  char v15; // al
  _BYTE *v16; // r15
  char *v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  char *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  _QWORD **v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rcx
  CTreeData *v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  _BYTE *v35; // rcx
  __int64 v36; // rdx
  _QWORD **v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rcx
  char *v40; // rdx
  _BYTE *v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rax
  detail::liberal_expansion_policy *v45; // rcx
  _QWORD *v46; // rdi
  _BYTE *v47; // rbx
  detail::liberal_expansion_policy **v48; // r8
  char *v49; // rdx
  __int64 v50; // r15
  _QWORD *v51; // r14
  unsigned __int64 v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // r9
  __int64 v55; // rcx
  detail::liberal_expansion_policy **v56; // rax
  __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r14
  __int64 v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  bool v63; // si
  struct CTreeData *TreeData; // rbx
  _DWORD *v65; // rdx
  _QWORD *v66; // rdx
  __int64 v67; // rdi
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  float v70; // xmm5_4
  float v71; // xmm2_4
  float v72; // xmm6_4
  float v73; // xmm1_4
  float v74; // xmm7_4
  float v75; // xmm8_4
  __int64 v76; // rcx
  float v77; // xmm3_4
  float v78; // xmm4_4
  float v79; // xmm2_4
  float v80; // xmm1_4
  bool v81; // r15
  char v82; // bl
  __int64 v83; // r8
  __int64 v84; // rax
  _BYTE *v85; // rcx
  __int64 v86; // rdx
  detail::liberal_expansion_policy ***v87; // rdx
  detail::liberal_expansion_policy **v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  _BYTE *v91; // rcx
  __int64 v92; // rdx
  _QWORD **v93; // rdx
  _QWORD *v94; // rax
  _QWORD *v95; // rcx
  unsigned int v96; // eax
  __int64 v97; // r10
  __int64 v98; // rcx
  _QWORD **v99; // rdx
  _QWORD *v100; // rax
  _QWORD *v101; // rdx
  __int64 v102; // rax
  __int64 v103; // rax
  _BYTE *v104; // rcx
  unsigned int v105; // r8d
  _BYTE **v106; // rbx
  CVisual **i; // rbx
  __int64 v108; // rax
  _BYTE *v109; // rcx
  __int64 v110; // r8
  _QWORD **v111; // r8
  unsigned __int64 v112; // rdi
  void *v113; // rax
  void *v114; // rcx
  unsigned __int64 v115; // rdi
  _BYTE *v116; // rax
  void *v117; // rcx
  HANDLE ProcessHeap; // rax
  int v119; // edx
  int *v120; // rcx
  __int64 v121; // rax
  int v122; // r10d
  _DWORD *v123; // r10
  __int64 v124; // rcx
  unsigned int Slot; // eax
  __int64 v126; // r10
  CVisual **j; // rdi
  __int64 v128; // r10
  struct CTreeData *v129; // rdi
  _DWORD *v130; // r10
  unsigned int v131; // eax
  __int64 v132; // r10
  CTreeData *v133; // rax
  const struct CVisual **v134; // rcx
  __int64 v135; // r10
  int v136; // r8d
  int *v137; // rdx
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v139; // r13
  CProjectedShadowCaster **v140; // r12
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v142; // r13
  CProjectedShadowReceiver **k; // r12
  struct CTreeData *v144; // [rsp+20h] [rbp-E0h]
  __int64 v145; // [rsp+28h] [rbp-D8h]
  struct CTreeData *v146; // [rsp+30h] [rbp-D0h]
  struct CTreeData *v147; // [rsp+30h] [rbp-D0h]
  __int64 v148; // [rsp+38h] [rbp-C8h]
  __int64 v149; // [rsp+40h] [rbp-C0h]
  __int128 v150; // [rsp+40h] [rbp-C0h]
  _QWORD *v151; // [rsp+60h] [rbp-A0h]
  detail::liberal_expansion_policy **v152; // [rsp+80h] [rbp-80h]
  __int128 v153; // [rsp+A0h] [rbp-60h]
  __int128 v154; // [rsp+A0h] [rbp-60h]
  int v155; // [rsp+B8h] [rbp-48h]
  __int128 v156; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v157; // [rsp+D0h] [rbp-30h]
  const struct CVisualTree *v158; // [rsp+E0h] [rbp-20h]
  _QWORD *v159; // [rsp+E8h] [rbp-18h]
  __int64 v160; // [rsp+F0h] [rbp-10h]
  __int128 v161; // [rsp+100h] [rbp+0h] BYREF
  __int64 v162; // [rsp+110h] [rbp+10h]
  __int128 v163; // [rsp+120h] [rbp+20h] BYREF
  __int64 v164; // [rsp+130h] [rbp+30h]
  _BYTE v165[24]; // [rsp+140h] [rbp+40h] BYREF
  void *v166; // [rsp+158h] [rbp+58h] BYREF
  char *v167; // [rsp+160h] [rbp+60h]
  void **v168; // [rsp+168h] [rbp+68h]
  _BYTE v169[256]; // [rsp+170h] [rbp+70h] BYREF
  void *v170; // [rsp+270h] [rbp+170h] BYREF
  detail::liberal_expansion_policy **v171; // [rsp+278h] [rbp+178h]
  char *v172; // [rsp+280h] [rbp+180h]
  _BYTE v173[256]; // [rsp+288h] [rbp+188h] BYREF
  __int64 v174; // [rsp+388h] [rbp+288h] BYREF
  __int128 v175; // [rsp+390h] [rbp+290h]

  v4 = *this;
  v166 = v169;
  v5 = a2;
  v158 = a2;
  v167 = v169;
  v168 = &v170;
  v8 = (const struct CVisual **)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
                                  &v166,
                                  0LL);
  v9 = v4 == 0LL;
  *v8 = *this;
  while ( 1 )
  {
    v10 = (const struct CVisual *)&CVisualTreeData::`vftable';
    if ( v9 )
    {
LABEL_50:
      v40 = v167;
      v41 = v166;
      v42 = (v167 - (_BYTE *)v166) >> 3;
      v175 = v3;
      v155 = v42;
      if ( (int)v42 > 0 )
      {
        v43 = (int)v42;
        LODWORD(v3) = 0;
        goto LABEL_52;
      }
      goto LABEL_145;
    }
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v5 + 184LL))(v5) )
    {
      UnusedTreeData = (const struct CVisual *)((char *)v4 + 336);
      goto LABEL_5;
    }
    v24 = *((_QWORD *)v4 + 29);
    if ( *(int *)v24 < 0 )
    {
      v25 = *(unsigned int *)(v24 + 4);
      v26 = (_BYTE *)(v24 + 8);
      v27 = 0LL;
      if ( (_DWORD)v25 )
      {
        while ( *v26 != 1 )
        {
          v27 = (unsigned int)(v27 + 1);
          ++v26;
          if ( (unsigned int)v27 >= (unsigned int)v25 )
            goto LABEL_154;
        }
      }
      else
      {
LABEL_154:
        if ( (unsigned int)v27 >= (unsigned int)v25 )
        {
          v28 = 0LL;
          goto LABEL_33;
        }
      }
      v28 = (_QWORD **)(v24 + v25 + 15 + 8 * v27 - (((_BYTE)v25 + 15) & 7));
LABEL_33:
      v29 = *v28;
      if ( *v28 )
      {
        v30 = (_QWORD *)*v29;
        if ( (_QWORD *)*v29 != v29 )
        {
          while ( 1 )
          {
            UnusedTreeData = (struct CTreeData *)(v30 - 48);
            if ( (const struct CVisualTree *)v30[4] == v5 )
              break;
            v30 = (_QWORD *)*v30;
            if ( v30 == v29 )
              goto LABEL_37;
          }
LABEL_5:
          if ( UnusedTreeData )
            goto LABEL_6;
        }
      }
    }
LABEL_37:
    UnusedTreeData = CVisual::GetUnusedTreeData(v4);
    if ( UnusedTreeData )
    {
      v123 = (_DWORD *)*((_QWORD *)v4 + 29);
      if ( (*v123 & 0x8000000) != 0 )
      {
        v124 = *((_QWORD *)v4 + 29);
        *v123 &= ~0x8000000u;
        Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v124, 5LL);
        if ( Slot < *(_DWORD *)(v126 + 4) )
          *(_BYTE *)(Slot + v126 + 8) = 0;
      }
    }
    else
    {
      v31 = (CTreeData *)operator new(0x1A8uLL);
      UnusedTreeData = v31;
      if ( v31 )
      {
        CTreeData::CTreeData(v31);
        *v32 = &CVisualTreeData::`vftable';
        v32[52] = 0LL;
      }
      else
      {
        UnusedTreeData = 0LL;
      }
    }
    (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
      UnusedTreeData,
      v5,
      v4);
LABEL_6:
    if ( *((_QWORD *)UnusedTreeData + 34) >= (unsigned __int64)a3 )
      goto LABEL_50;
    v10 = 0LL;
    if ( v4 == *((const struct CVisual **)v5 + 8) )
    {
LABEL_15:
      v15 = 0;
      goto LABEL_16;
    }
    v12 = (_DWORD *)*((_QWORD *)v4 + 29);
    if ( (*v12 & 0x1000000) == 0 )
    {
      v13 = 0LL;
      goto LABEL_10;
    }
    v103 = (unsigned int)v12[1];
    v104 = v12 + 2;
    v105 = 0;
    if ( (_DWORD)v103 )
    {
      while ( *v104 != 8 )
      {
        ++v105;
        ++v104;
        if ( v105 >= (unsigned int)v103 )
          goto LABEL_190;
      }
LABEL_164:
      v106 = (_BYTE **)((char *)v12 + v103 + 8LL * v105 - (((_BYTE)v103 + 15) & 7) + 15);
      goto LABEL_165;
    }
LABEL_190:
    if ( v105 < (unsigned int)v103 )
      goto LABEL_164;
    v106 = 0LL;
LABEL_165:
    v13 = *v106;
    if ( v13 )
      v10 = (const struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 184LL))(*(_QWORD *)v13);
LABEL_10:
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v5 + 184LL))(v5) )
    {
      v14 = (_QWORD *)((char *)v4 + 336);
      goto LABEL_12;
    }
    v33 = *((_QWORD *)v4 + 29);
    if ( *(int *)v33 >= 0 )
      goto LABEL_214;
    v34 = *(unsigned int *)(v33 + 4);
    v35 = (_BYTE *)(v33 + 8);
    v36 = 0LL;
    if ( (_DWORD)v34 )
    {
      while ( *v35 != 1 )
      {
        v36 = (unsigned int)(v36 + 1);
        ++v35;
        if ( (unsigned int)v36 >= (unsigned int)v34 )
          goto LABEL_157;
      }
LABEL_44:
      v37 = (_QWORD **)(v34 + 15 + v33 + 8 * v36 - (((_BYTE)v34 + 15) & 7));
      goto LABEL_45;
    }
LABEL_157:
    if ( (unsigned int)v36 < (unsigned int)v34 )
      goto LABEL_44;
    v37 = 0LL;
LABEL_45:
    v38 = *v37;
    if ( !*v37 || (v39 = (_QWORD *)*v38, (_QWORD *)*v38 == v38) )
    {
LABEL_214:
      v10 = 0LL;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v14 = v39 - 48;
      if ( (const struct CVisualTree *)v39[4] == v5 )
        break;
      v39 = (_QWORD *)*v39;
      if ( v39 == v38 )
        goto LABEL_214;
    }
LABEL_12:
    if ( !v14 || v14[35] == *(_QWORD *)(*(_QWORD *)(v14[36] + 16LL) + 496LL) )
      goto LABEL_214;
LABEL_14:
    if ( !v13 || !v13[8] )
      goto LABEL_15;
    v15 = 1;
LABEL_16:
    if ( !v10 )
      goto LABEL_17;
    if ( !v15 )
    {
      if ( !CVisualTree::IsAncestorInSameSpace(v5, v4, v10) )
      {
LABEL_221:
        CVisual::InvalidateTransformParent(v4, v5);
        v10 = 0LL;
LABEL_17:
        if ( v4 != *((const struct CVisual **)v5 + 8) )
          v10 = (const struct CVisual *)*((_QWORD *)v4 + 11);
        if ( !v10 )
          goto LABEL_28;
      }
LABEL_20:
      v16 = v166;
      v17 = v167;
      goto LABEL_21;
    }
    if ( !(unsigned __int8)CVisualTree::_IsInTree(v5, v10, 0LL) )
      goto LABEL_221;
    v16 = v166;
    v17 = v167;
    for ( i = (CVisual **)v166; i != (CVisual **)v167; ++i )
    {
      if ( *i == v10 )
      {
        if ( i == (CVisual **)v167 )
          break;
        for ( j = i; j != (CVisual **)v17; ++j )
        {
          CVisual::InvalidateTransformParent(*j, v5);
          v17 = v167;
        }
        detail::vector_facade<IMonitorTarget *,detail::buffer_impl<IMonitorTarget *,2,1,detail::liberal_expansion_policy>>::clear_region(
          &v166,
          ((char *)i - (_BYTE *)v166) >> 3,
          (v17 - 8 - (char *)i) >> 3);
        goto LABEL_20;
      }
    }
LABEL_21:
    v18 = (__int64)v168;
    v19 = (v17 - v16) >> 3;
    if ( !(((char *)v168 - v17) >> 3) )
      break;
LABEL_22:
    v20 = (v17 - v16) >> 3;
    v21 = v20 - v19;
    v151 = &v16[8 * v20];
    if ( !v151 )
      goto LABEL_232;
    v22 = ((v17 - v16) >> 3) - v19;
    if ( v21 > 1 )
      v22 = 1LL;
    v18 = 8 * v22;
    v23 = &v17[-v18];
    if ( v17 != &v17[-v18] )
    {
      v128 = 1LL;
      do
      {
        v17 -= 8;
        if ( !v128 )
          goto LABEL_232;
        if ( --v128 )
          goto LABEL_232;
        v18 = *(_QWORD *)v17;
        *v151 = *(_QWORD *)v17;
      }
      while ( v17 != v23 );
      v17 = v167;
    }
    if ( v21 > 1 )
    {
      *(_QWORD *)&v154 = v16;
      *((_QWORD *)&v154 + 1) = v20;
      if ( v20 && (!v16 || v20 < 0) )
        goto LABEL_232;
      v161 = v154;
      v162 = v20;
      std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
        &v163,
        &v16[8 * v19],
        &v16[8 * v20 - 8],
        &v161,
        v144,
        v145,
        v146);
      v17 = v167;
    }
    v167 = v17 + 8;
    *(_QWORD *)&v16[8 * v19] = v10;
LABEL_28:
    v4 = v10;
    v9 = v10 == 0LL;
  }
  if ( v19 + 1 >= v19 )
  {
    v112 = detail::liberal_expansion_policy::expand(
             (detail::liberal_expansion_policy *)(((char *)v168 - v16) >> 3),
             ((char *)v168 - v16) >> 3,
             v19 + 1);
    *(_QWORD *)&v150 = operator new(saturated_mul(v112, 8uLL));
    *((_QWORD *)&v150 + 1) = v19;
    v156 = v150;
    v157 = 0LL;
    std::move<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
      &v163,
      v166,
      v167,
      &v156);
    v113 = v166;
    v9 = v166 == v169;
    v166 = (void *)v150;
    v114 = 0LL;
    if ( !v9 )
      v114 = v113;
    DefaultHeap::Free(v114);
    v16 = v166;
    v17 = (char *)v166 + 8 * v19;
    v167 = v17;
    v168 = (void **)((char *)v166 + 8 * v112);
    goto LABEL_22;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_232:
  _o__invalid_parameter_noinfo_noreturn(v18);
  __debugbreak();
LABEL_233:
  while ( 2 )
  {
    v147 = CVisual::GetUnusedTreeData((CVisual *)a3);
    v129 = v147;
    if ( v147 )
    {
      v130 = (_DWORD *)a3[29];
      if ( (*v130 & 0x8000000) != 0 )
      {
        *v130 &= ~0x8000000u;
        v131 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v130, 5LL);
        if ( v131 < *(_DWORD *)(v132 + 4) )
          *(_BYTE *)(v131 + v132 + 8) = 0;
      }
    }
    else
    {
      v133 = (CTreeData *)operator new(0x1A8uLL);
      v147 = v133;
      v129 = v133;
      if ( v133 )
      {
        CTreeData::CTreeData(v133);
        *v134 = v10;
        v134[52] = 0LL;
      }
      else
      {
        v129 = 0LL;
        v147 = 0LL;
      }
    }
    (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, _QWORD *))(*(_QWORD *)v129 + 8LL))(
      v129,
      v5,
      a3);
LABEL_55:
    v47 = v173;
    v170 = v173;
    v48 = (detail::liberal_expansion_policy **)v173;
    v171 = (detail::liberal_expansion_policy **)v173;
    v49 = (char *)&v174;
    v172 = (char *)&v174;
    v50 = 0LL;
    if ( g_pComposition )
      v50 = *((_QWORD *)g_pComposition + 62);
    v51 = a3;
    if ( a3 )
    {
      while ( v51[41] != v50 )
      {
        v52 = ((char *)v48 - v47) >> 3;
        if ( !((v49 - (char *)v48) >> 3) )
        {
          if ( v52 + 1 < v52 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_262:
            _o__invalid_parameter_noinfo_noreturn(v45);
            __debugbreak();
            JUMPOUT(0x1801334F9LL);
          }
          v115 = detail::liberal_expansion_policy::expand(v45, (v49 - v47) >> 3, v52 + 1);
          *(_QWORD *)&v153 = operator new(saturated_mul(v115, 8uLL));
          *((_QWORD *)&v153 + 1) = v52;
          v161 = v153;
          v162 = 0LL;
          std::move<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
            v165,
            v170,
            v171,
            &v161);
          v116 = v170;
          v117 = 0LL;
          v170 = (void *)v153;
          if ( v116 != v173 )
            v117 = v116;
          DefaultHeap::Free(v117);
          v47 = v170;
          v48 = (detail::liberal_expansion_policy **)((char *)v170 + 8 * v52);
          v171 = v48;
          v172 = (char *)v170 + 8 * v115;
        }
        v53 = ((char *)v48 - v47) >> 3;
        v54 = v53 - v52;
        v152 = (detail::liberal_expansion_policy **)&v47[8 * v53];
        if ( !v152 )
          goto LABEL_262;
        v55 = (((char *)v48 - v47) >> 3) - v52;
        if ( v54 > 1 )
          v55 = 1LL;
        v45 = (detail::liberal_expansion_policy *)(8 * v55);
        v56 = (detail::liberal_expansion_policy **)((char *)v48 - (char *)v45);
        if ( v48 != (detail::liberal_expansion_policy **)((char *)v48 - (char *)v45) )
        {
          v135 = 1LL;
          do
          {
            --v48;
            if ( !v135 )
              goto LABEL_262;
            if ( --v135 )
              goto LABEL_262;
            v45 = *v48;
            *v152 = *v48;
          }
          while ( v48 != v56 );
          v48 = v171;
        }
        if ( v54 > 1 )
        {
          *(_QWORD *)&v156 = v47;
          *((_QWORD *)&v156 + 1) = v53;
          if ( v53 && (!v47 || v53 < 0) )
            goto LABEL_262;
          v157 = v53;
          v163 = v156;
          v164 = v53;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v165,
            &v47[8 * v52],
            &v47[8 * v53 - 8],
            &v163,
            v144,
            v145,
            v147);
          v48 = v171;
        }
        v171 = v48 + 1;
        *(_QWORD *)&v47[8 * v52] = v51;
        v51 = (_QWORD *)v51[11];
        v48 = v171;
        v47 = v170;
        if ( !v51 )
          break;
        v49 = v172;
      }
    }
    v57 = ((char *)v48 - v47) >> 3;
    v58 = (int)v57;
    if ( (int)v57 <= 0 )
      goto LABEL_75;
    while ( 2 )
    {
      v59 = 0LL;
      v60 = *(_QWORD *)&v47[8 * v58 - 8];
      if ( g_pComposition )
        v59 = *((_QWORD *)g_pComposition + 62);
      if ( *(_QWORD *)(v60 + 328) != v59 )
      {
        v61 = *(_QWORD *)(v60 + 88);
        if ( !v61 || (*(_BYTE *)(v61 + 96) & 1) != 0 )
        {
          v70 = *(float *)(v60 + 124);
          v71 = *(float *)&v3;
          v72 = *(float *)(v60 + 128);
          v73 = *(float *)&v3;
          v74 = *(float *)(v60 + 140);
          v75 = *(float *)(v60 + 144);
          if ( v61 )
          {
            v71 = *(float *)(v61 + 140);
            v73 = *(float *)(v61 + 144);
          }
          v76 = *(_QWORD *)(v60 + 224);
          if ( (*(_DWORD *)(v76 + 4) & 0x10000000) != 0 )
          {
            v136 = *(_DWORD *)(v76 + 12);
            v137 = (int *)(v76 + 12);
            if ( (v136 & 0x7F000000) != 0x4000000 )
            {
              do
              {
                v137 = (int *)((char *)v137 + (v136 & 0xFFFFFF) + 4);
                v136 = *v137;
              }
              while ( (*v137 & 0x7F000000) != 0x4000000 );
            }
            v149 = *(_QWORD *)(v137 + 1);
          }
          else
          {
            v149 = 0LL;
          }
          v77 = (float)(*(float *)&v149 * v71) + *(float *)(v60 + 112);
          v78 = (float)(*((float *)&v149 + 1) * v73) + *(float *)(v60 + 116);
          *(float *)(v60 + 124) = v77;
          *(float *)(v60 + 128) = v78;
          if ( (*(_DWORD *)(v76 + 4) & 0x20000000) != 0 )
          {
            v119 = *(_DWORD *)(v76 + 12);
            v120 = (int *)(v76 + 12);
            if ( (v119 & 0x7F000000) != 0x3000000 )
            {
              do
              {
                v120 = (int *)((char *)v120 + (v119 & 0xFFFFFF) + 4);
                v119 = *v120;
              }
              while ( (*v120 & 0x7F000000) != 0x3000000 );
            }
            v148 = *(_QWORD *)(v120 + 1);
          }
          else
          {
            v148 = 0LL;
          }
          v79 = (float)(v71 * *(float *)&v148) + *(float *)(v60 + 132);
          v80 = (float)(v73 * *((float *)&v148 + 1)) + *(float *)(v60 + 136);
          *(float *)(v60 + 140) = v79;
          *(float *)(v60 + 144) = v80;
          if ( *(float *)&v3 > v79 )
          {
            *(_DWORD *)(v60 + 140) = 0;
            v79 = *(float *)&v3;
          }
          if ( *(float *)&v3 > v80 )
          {
            *(_DWORD *)(v60 + 144) = 0;
            v80 = *(float *)&v3;
          }
          v81 = v70 != v77 || v72 != v78;
          if ( v74 == v79 && v75 == v80 )
          {
            v82 = 0;
          }
          else
          {
            v121 = *(_QWORD *)(v60 + 248);
            v82 = 1;
            if ( v121 && *(_BYTE *)(v121 + 136) )
              CVisual::OnClipChanged((CVisual *)v60);
            CVisual::ClearContentTreeDataCaches((CVisual *)v60);
            v122 = **(_DWORD **)(v60 + 232);
            if ( (v122 & 0x40000) != 0 )
            {
              ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v60);
              v139 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
              v140 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
              if ( *(CProjectedShadowCaster ***)ProjectedShadowCasters != v139 )
              {
                do
                  CProjectedShadowCaster::InvalidateMaskContent(*v140++);
                while ( v140 != v139 );
                v122 = **(_DWORD **)(v60 + 232);
              }
            }
            if ( (v122 & 0x20000) != 0 )
            {
              ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(v60);
              v142 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
              for ( k = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers; k != v142; ++k )
                CProjectedShadowReceiver::InvalidateMaskContent(*k);
            }
          }
          if ( v81 )
          {
            CVisual::OnOuterTransformChanged((CVisual *)v60);
          }
          else if ( !v82 )
          {
LABEL_116:
            *(_QWORD *)(v60 + 328) = v59;
            v47 = v170;
            goto LABEL_73;
          }
          *(_BYTE *)(v60 + 96) |= 1u;
          goto LABEL_116;
        }
      }
LABEL_73:
      if ( --v58 > 0 )
        continue;
      break;
    }
    v48 = v171;
    v5 = v158;
    a3 = v159;
LABEL_75:
    v62 = ((char *)v48 - v47) >> 3;
    if ( v62 )
      v171 = &v48[-v62];
    v170 = 0LL;
    if ( v47 == v173 )
      v47 = 0LL;
    if ( v47 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v47);
    }
    v63 = 0;
    TreeData = 0LL;
    if ( a3 == *((_QWORD **)v5 + 8) )
      goto LABEL_142;
    v65 = (_DWORD *)a3[29];
    if ( (*v65 & 0x1000000) == 0 )
      goto LABEL_83;
    v108 = (unsigned int)v65[1];
    v109 = v65 + 2;
    v110 = 0LL;
    if ( (_DWORD)v108 )
    {
      while ( *v109 != 8 )
      {
        v110 = (unsigned int)(v110 + 1);
        ++v109;
        if ( (unsigned int)v110 >= (unsigned int)v108 )
          goto LABEL_193;
      }
LABEL_175:
      v111 = (_QWORD **)((char *)v65 + 8 * v110 - (((_BYTE)v108 + 15) & 7) + v108 + 15);
    }
    else
    {
LABEL_193:
      if ( (unsigned int)v110 < (unsigned int)v108 )
        goto LABEL_175;
      v111 = 0LL;
    }
    if ( *v111 )
      TreeData = (struct CTreeData *)(*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD **, _QWORD))(*(_QWORD *)**v111 + 184LL))(
                                       **v111,
                                       v65,
                                       v111,
                                       0LL);
LABEL_83:
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v5 + 184LL))(v5) )
    {
      v66 = a3 + 42;
      goto LABEL_85;
    }
    v89 = a3[29];
    if ( *(int *)v89 >= 0 )
      goto LABEL_266;
    v90 = *(unsigned int *)(v89 + 4);
    v91 = (_BYTE *)(v89 + 8);
    v92 = 0LL;
    if ( (_DWORD)v90 )
    {
      while ( *v91 != 1 )
      {
        v92 = (unsigned int)(v92 + 1);
        ++v91;
        if ( (unsigned int)v92 >= (unsigned int)v90 )
          goto LABEL_160;
      }
LABEL_129:
      v93 = (_QWORD **)(v89 + v90 + 15 + 8 * v92 - (((_BYTE)v90 + 15) & 7));
    }
    else
    {
LABEL_160:
      if ( (unsigned int)v92 < (unsigned int)v90 )
        goto LABEL_129;
      v93 = 0LL;
    }
    v94 = *v93;
    if ( !*v93 )
      goto LABEL_266;
    v95 = (_QWORD *)*v94;
    if ( (_QWORD *)*v94 == v94 )
      goto LABEL_266;
    while ( 1 )
    {
      v66 = v95 - 48;
      if ( (const struct CVisualTree *)v95[4] == v5 )
        break;
      v95 = (_QWORD *)*v95;
      if ( v95 == v94 )
        goto LABEL_88;
    }
LABEL_85:
    if ( v66 && v66[35] != *(_QWORD *)(*(_QWORD *)(v66[36] + 16LL) + 496LL) && TreeData )
    {
      TreeData = CVisual::FindTreeData(TreeData, v5);
      v63 = 1;
    }
    else
    {
LABEL_266:
    {
LABEL_88:
      v67 = a3[11];
      TreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v5 + 184LL))(v5) )
      {
        TreeData = (struct CTreeData *)(v67 + 336);
      }
      else if ( **(int **)(v67 + 232) < 0 )
      {
        v96 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v67 + 232), 1LL);
        v98 = *(unsigned int *)(v97 + 4);
        v99 = v96 >= (unsigned int)v98 ? 0LL : (_QWORD **)(v98 + 15 + v97 + 8LL * v96 - (((_BYTE)v98 + 15) & 7));
        v100 = *v99;
        if ( *v99 )
        {
          v101 = (_QWORD *)*v100;
          if ( (_QWORD *)*v100 != v100 )
          {
            while ( (const struct CVisualTree *)v101[4] != v5 )
            {
              v101 = (_QWORD *)*v101;
              if ( v101 == v100 )
                goto LABEL_90;
            }
            TreeData = (struct CTreeData *)(v101 - 48);
          }
        }
      }
    }
    }
LABEL_90:
    if ( !TreeData )
    {
LABEL_142:
      v68 = 0LL;
      if ( g_pComposition )
        v68 = *((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v68 = *((_QWORD *)TreeData + 34);
    }
    v69 = *((_QWORD *)v147 + 34);
    if ( v69 < v68 )
    {
      CVisual::UpdateWorldTransform((CVisual *)a3, v5, v147, v63, TreeData);
      v69 = *((_QWORD *)v147 + 34);
    }
    if ( v69 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v147 + 36) + 16LL) + 496LL) )
    {
      CVisual::PropagateFlags((__int64)a3, 5u);
      *((_BYTE *)v147 + 186) = 1;
    }
    --v155;
    v43 = v160;
    v41 = v166;
    if ( v160 > 0 )
    {
      v10 = (const struct CVisual *)&CVisualTreeData::`vftable';
LABEL_52:
      a3 = *(_QWORD **)&v41[8 * v43 - 8];
      v160 = v43 - 1;
      v44 = *(_QWORD *)v5;
      v159 = a3;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(v44 + 184))(v5) )
      {
        v46 = a3 + 42;
        v147 = (struct CTreeData *)(a3 + 42);
        goto LABEL_54;
      }
      v83 = a3[29];
      if ( *(int *)v83 >= 0 )
        continue;
      v84 = *(unsigned int *)(v83 + 4);
      v85 = (_BYTE *)(v83 + 8);
      v86 = 0LL;
      if ( (_DWORD)v84 )
      {
        while ( *v85 != 1 )
        {
          v86 = (unsigned int)(v86 + 1);
          ++v85;
          if ( (unsigned int)v86 >= (unsigned int)v84 )
            goto LABEL_151;
        }
LABEL_120:
        v87 = (detail::liberal_expansion_policy ***)(v84 + 15 + v83 + 8 * v86 - (((_BYTE)v84 + 15) & 7));
      }
      else
      {
LABEL_151:
        if ( (unsigned int)v86 < (unsigned int)v84 )
          goto LABEL_120;
        v87 = 0LL;
      }
      v88 = *v87;
      if ( !*v87 )
        continue;
      v45 = *v88;
      if ( *v88 == (detail::liberal_expansion_policy *)v88 )
        continue;
      while ( 1 )
      {
        v46 = (_QWORD *)((char *)v45 - 384);
        v147 = (detail::liberal_expansion_policy *)((char *)v45 - 384);
        if ( *((const struct CVisualTree **)v45 + 4) == v5 )
          break;
        v45 = *(detail::liberal_expansion_policy **)v45;
        if ( v45 == (detail::liberal_expansion_policy *)v88 )
          goto LABEL_233;
      }
LABEL_54:
      if ( !v46 )
        continue;
      goto LABEL_55;
    }
    break;
  }
  v40 = v167;
LABEL_145:
  v102 = (v40 - v41) >> 3;
  if ( v102 )
    v167 = &v40[-8 * v102];
  v166 = 0LL;
  if ( v41 == v169 )
    v41 = 0LL;
  DefaultHeap::Free(v41);
}
