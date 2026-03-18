/*
 * XREFs of ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x18008F470
 * Callers:
 *     ?UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z @ 0x1800A55E0 (-UpdatePreWalkVisuals@CPreComputeContext@@IEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180048C04 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x180048DDC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180048E38 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004D320 (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180088480 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180089BBC (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18008C294 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008F210 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x18008F2F4 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$move@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVICompositionSurfaceInfoListener@@@stdext@@V?$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@0@0V12@@Z @ 0x1800C6B2C (--$move@V-$move_iterator@PEAPEAVICompositionSurfaceInfoListener@@@std@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800E129C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800E4C88 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1800E9540 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180191CC0 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180194114 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x180201868 (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235858 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::UpdateTransformChildBounds(
        CVisual **this,
        const struct CVisualTree *a2)
{
  const struct CVisualTree *v3; // r12
  CVisual *v4; // rbx
  __int128 *Bounds; // rax
  _BYTE *v6; // rcx
  _BYTE *v7; // rax
  __int64 v8; // rsi
  CVisual *v9; // rbx
  _DWORD *v10; // r8
  __int64 v11; // rdi
  struct _LIST_ENTRY *v12; // rdx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  CVisual *v17; // r13
  struct CTreeData *v18; // rax
  detail::liberal_expansion_policy *v19; // rcx
  _BYTE *v20; // rbx
  detail::liberal_expansion_policy **v21; // r8
  char *v22; // rdx
  __int64 v23; // r15
  CVisual *v24; // r14
  unsigned __int64 v25; // rsi
  __int64 v26; // r9
  unsigned __int64 v27; // rdx
  __int64 v28; // rcx
  detail::liberal_expansion_policy **v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 **TreeData; // rbx
  char v36; // si
  _DWORD *v37; // r8
  CVisual *v38; // rbx
  struct _LIST_ENTRY *v39; // rdx
  CVisual *v40; // rdi
  __int64 *v41; // rax
  unsigned __int64 v42; // rdx
  __int64 v43; // rdx
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *v45; // rcx
  struct _LIST_ENTRY *v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  unsigned __int64 v48; // rdi
  void *v49; // rbx
  _BYTE *v50; // rax
  void *v51; // rcx
  __int64 v52; // rcx
  _BYTE *v53; // rdx
  unsigned int v54; // eax
  _QWORD **v55; // rcx
  _QWORD *v56; // rcx
  __int64 v57; // rcx
  _BYTE *v58; // rdx
  unsigned int v59; // eax
  _QWORD **v60; // rcx
  _QWORD *v61; // rcx
  __int64 v62; // r11
  __int64 v63; // r10
  float v64; // xmm2_4
  float v65; // xmm3_4
  float v66; // xmm7_4
  float v67; // xmm6_4
  float v68; // xmm1_4
  float v69; // xmm4_4
  float v70; // xmm5_4
  float v71; // xmm1_4
  float v72; // xmm0_4
  bool v73; // r13
  char v74; // r12
  __int64 v75; // rax
  int v76; // r10d
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v78; // r15
  CProjectedShadowCaster **v79; // rbx
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v81; // r15
  CProjectedShadowReceiver **i; // rbx
  struct CTreeData *v83; // [rsp+20h] [rbp-E0h]
  __int64 v84; // [rsp+28h] [rbp-D8h]
  __int64 v85; // [rsp+30h] [rbp-D0h]
  int v86; // [rsp+38h] [rbp-C8h]
  CVisual *v88; // [rsp+48h] [rbp-B8h]
  struct CTreeData *v89; // [rsp+50h] [rbp-B0h]
  __int64 v90; // [rsp+58h] [rbp-A8h]
  struct D2D_VECTOR_3F v92; // [rsp+68h] [rbp-98h] BYREF
  __int128 v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+88h] [rbp-78h]
  __int128 v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+A0h] [rbp-60h]
  __int128 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+C0h] [rbp-40h]
  __int128 v99; // [rsp+D0h] [rbp-30h]
  __int64 v100; // [rsp+E0h] [rbp-20h]
  __int128 v101; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v102; // [rsp+100h] [rbp+0h]
  __int128 v103; // [rsp+110h] [rbp+10h] BYREF
  __int64 v104; // [rsp+120h] [rbp+20h]
  _BYTE v105[24]; // [rsp+130h] [rbp+30h] BYREF
  void *v106; // [rsp+148h] [rbp+48h]
  detail::liberal_expansion_policy **v107; // [rsp+150h] [rbp+50h]
  char *v108; // [rsp+158h] [rbp+58h]
  _BYTE v109[256]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE *v110; // [rsp+260h] [rbp+160h] BYREF
  _BYTE *v111; // [rsp+268h] [rbp+168h]
  __int64 *v112; // [rsp+270h] [rbp+170h]
  _BYTE v113[256]; // [rsp+278h] [rbp+178h] BYREF
  __int64 v114; // [rsp+378h] [rbp+278h] BYREF

  v3 = a2;
  if ( !CVisual::GetTransformParent(*this, a2, 0LL) )
    return;
  v4 = *this;
  if ( (*((_BYTE *)v4 + 96) & 1) != 0 )
    return;
  Bounds = CVisual::GetBounds((__int64)v4, (__int64)v3);
  if ( (unsigned __int8)TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(Bounds) )
    return;
  v6 = v113;
  v7 = v113;
  v110 = v113;
  v111 = v113;
  v112 = &v114;
  v8 = 0LL;
  v9 = (CVisual *)*((_QWORD *)v4 + 11);
  if ( v9 )
  {
    while ( 1 )
    {
      *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
                   (detail::liberal_expansion_policy *)&v110,
                   (v7 - v6) >> 3) = v9;
      if ( v9 == *((CVisual **)v3 + 8) )
      {
LABEL_21:
        v7 = v111;
        v6 = v110;
        goto LABEL_22;
      }
      v10 = (_DWORD *)*((_QWORD *)v9 + 29);
      v11 = 0LL;
      if ( (*v10 & 0x1000000) != 0 )
        break;
LABEL_8:
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
      {
        v12 = (struct _LIST_ENTRY *)((char *)v9 + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v9);
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_13:
          v9 = (CVisual *)*((_QWORD *)v9 + 11);
          goto LABEL_14;
        }
        while ( 1 )
        {
          v12 = Flink - 24;
          if ( (const struct CVisualTree *)Flink[2].Flink == v3 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_13;
        }
      }
      if ( !v12 || v12[17].Blink == v12[18].Flink[1].Flink[31].Flink || !v11 )
        goto LABEL_13;
      v9 = (CVisual *)v11;
LABEL_14:
      if ( !v9 )
        goto LABEL_21;
      v7 = v111;
      v6 = v110;
    }
    v52 = (unsigned int)v10[1];
    v53 = v10 + 2;
    v54 = 0;
    if ( (_DWORD)v52 )
    {
      while ( *v53 != 8 )
      {
        ++v54;
        ++v53;
        if ( v54 >= (unsigned int)v52 )
          goto LABEL_100;
      }
    }
    else
    {
LABEL_100:
      if ( v54 >= (unsigned int)v52 )
      {
        v55 = 0LL;
LABEL_90:
        v56 = *v55;
        if ( v56 )
          v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v56 + 184LL))(*v56);
        goto LABEL_8;
      }
    }
    v55 = (_QWORD **)((char *)v10 + 8LL * v54 - (((_BYTE)v52 + 15) & 7) + v52 + 15);
    goto LABEL_90;
  }
LABEL_22:
  v15 = (v7 - v6) >> 3;
  v86 = v15;
  if ( (int)v15 <= 0 )
    goto LABEL_65;
  v16 = (int)v15;
  while ( 2 )
  {
    v17 = *(CVisual **)&v6[8 * v16 - 8];
    v90 = v16 - 1;
    v88 = v17;
    v18 = CVisual::EnsureTreeData(v17, v3);
    v19 = g_pComposition;
    v20 = v109;
    v89 = v18;
    v21 = (detail::liberal_expansion_policy **)v109;
    v106 = v109;
    v22 = (char *)&v110;
    v107 = (detail::liberal_expansion_policy **)v109;
    v23 = 0LL;
    v108 = (char *)&v110;
    if ( g_pComposition )
      v23 = *((_QWORD *)g_pComposition + 62);
    v24 = v17;
    if ( v17 )
    {
      while ( *((_QWORD *)v24 + 41) != v23 )
      {
        v25 = ((char *)v21 - v20) >> 3;
        if ( !((v22 - (char *)v21) >> 3) )
        {
          if ( v25 + 1 < v25 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_145:
            _o__invalid_parameter_noinfo_noreturn(v19);
            __debugbreak();
            JUMPOUT(0x180147643LL);
          }
          v48 = detail::liberal_expansion_policy::expand(v19, (v22 - v20) >> 3, v25 + 1);
          *(_QWORD *)&v93 = operator new(saturated_mul(v48, 8uLL));
          v49 = (void *)v93;
          *((_QWORD *)&v93 + 1) = v25;
          v94 = 0LL;
          v101 = v93;
          v102 = 0LL;
          std::move<std::move_iterator<ICompositionSurfaceInfoListener * *>,stdext::checked_array_iterator<ICompositionSurfaceInfoListener * *>>(
            v105,
            v106,
            v107,
            &v101);
          v50 = v106;
          v51 = 0LL;
          v106 = v49;
          if ( v50 != v109 )
            v51 = v50;
          DefaultHeap::Free(v51);
          v20 = v106;
          v21 = (detail::liberal_expansion_policy **)((char *)v106 + 8 * v25);
          v108 = (char *)v106 + 8 * v48;
          v107 = v21;
        }
        *((_QWORD *)&v95 + 1) = 1LL;
        v26 = ((char *)v21 - v20) >> 3;
        v27 = v26 - v25;
        *(_QWORD *)&v95 = &v20[8 * v26];
        if ( !(_QWORD)v95 )
          goto LABEL_145;
        v96 = 1LL;
        v28 = (((char *)v21 - v20) >> 3) - v25;
        if ( v27 > 1 )
          v28 = 1LL;
        v97 = v95;
        v98 = 1LL;
        v19 = (detail::liberal_expansion_policy *)(8 * v28);
        v29 = (detail::liberal_expansion_policy **)((char *)v21 - (char *)v19);
        if ( v21 != (detail::liberal_expansion_policy **)((char *)v21 - (char *)v19) )
        {
          v62 = v97;
          v63 = v98;
          do
          {
            --v21;
            if ( !v62 )
              goto LABEL_145;
            if ( !v63 )
              goto LABEL_145;
            if ( (unsigned __int64)--v63 >= *((_QWORD *)&v97 + 1) )
              goto LABEL_145;
            v19 = *v21;
            *(_QWORD *)(v62 + 8 * v63) = *v21;
          }
          while ( v21 != v29 );
          v21 = v107;
        }
        if ( v27 > 1 )
        {
          *(_QWORD *)&v99 = v20;
          *((_QWORD *)&v99 + 1) = v26;
          if ( v26 && (!v20 || v26 < 0) )
            goto LABEL_145;
          v100 = v26;
          v103 = v99;
          v104 = v26;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v105,
            &v20[8 * v25],
            &v20[8 * v26 - 8],
            &v103,
            v83,
            v84,
            v85);
          v21 = v107;
        }
        v107 = v21 + 1;
        *(_QWORD *)&v20[8 * v25] = v24;
        v24 = (CVisual *)*((_QWORD *)v24 + 11);
        v21 = v107;
        v20 = v106;
        if ( !v24 )
          break;
        v22 = v108;
      }
      v8 = 0LL;
    }
    v30 = ((char *)v21 - v20) >> 3;
    v31 = (int)v30;
    if ( (int)v30 <= 0 )
      goto LABEL_45;
    do
    {
      v32 = *(_QWORD *)&v20[8 * v31 - 8];
      if ( g_pComposition )
        v8 = *((_QWORD *)g_pComposition + 62);
      if ( *(_QWORD *)(v32 + 328) != v8 )
      {
        v33 = *(_QWORD *)(v32 + 88);
        if ( v33 )
        {
          if ( (*(_BYTE *)(v33 + 96) & 1) == 0 )
            goto LABEL_43;
          v64 = *(float *)(v33 + 140);
          v65 = *(float *)(v33 + 144);
        }
        else
        {
          v64 = 0.0;
          v65 = 0.0;
        }
        v66 = *(float *)(v32 + 144);
        v67 = *(float *)(v32 + 140);
        CVisual::GetRelativeOffsetInternal(*(CVisual **)&v20[8 * v31 - 8], &v92);
        v68 = (float)(v92.x * v64) + *(float *)(v32 + 112);
        *(float *)(v32 + 128) = (float)(v92.y * v65) + *(float *)(v32 + 116);
        *(float *)(v32 + 124) = v68;
        CVisual::GetRelativeLayoutSizeInternal((CVisual *)v32);
        v71 = (float)(*(float *)&v85 * v64) + *(float *)(v32 + 132);
        v72 = (float)(*((float *)&v85 + 1) * v65) + *(float *)(v32 + 136);
        *(float *)(v32 + 140) = v71;
        *(float *)(v32 + 144) = v72;
        if ( v71 < 0.0 )
        {
          *(_DWORD *)(v32 + 140) = 0;
          v71 = 0.0;
        }
        if ( v72 < 0.0 )
        {
          *(_DWORD *)(v32 + 144) = 0;
          v72 = 0.0;
        }
        v73 = v69 != *(float *)(v32 + 124) || v70 != *(float *)(v32 + 128);
        if ( v67 == v71 && v66 == v72 )
        {
          v74 = 0;
        }
        else
        {
          v75 = *(_QWORD *)(v32 + 248);
          v74 = 1;
          if ( v75 && *(_BYTE *)(v75 + 136) )
            CVisual::OnClipChanged((CVisual *)v32);
          CVisual::ClearContentTreeDataCaches((CVisual *)v32);
          v76 = **(_DWORD **)(v32 + 232);
          if ( (v76 & 0x40000) != 0 )
          {
            ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v32);
            v78 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
            v79 = *(CProjectedShadowCaster ***)ProjectedShadowCasters;
            if ( *(CProjectedShadowCaster ***)ProjectedShadowCasters != v78 )
            {
              do
                CProjectedShadowCaster::InvalidateMaskContent(*v79++);
              while ( v79 != v78 );
              v76 = **(_DWORD **)(v32 + 232);
            }
          }
          if ( (v76 & 0x20000) != 0 )
          {
            ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers(v32);
            v81 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
            for ( i = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers; i != v81; ++i )
              CProjectedShadowReceiver::InvalidateMaskContent(*i);
          }
        }
        if ( v73 )
        {
          CVisual::OnOuterTransformChanged((CVisual *)v32);
        }
        else if ( !v74 )
        {
LABEL_143:
          *(_QWORD *)(v32 + 328) = v8;
          v20 = v106;
          goto LABEL_43;
        }
        *(_BYTE *)(v32 + 96) |= 1u;
        goto LABEL_143;
      }
LABEL_43:
      --v31;
      v8 = 0LL;
    }
    while ( v31 > 0 );
    v21 = v107;
    v3 = a2;
    v17 = v88;
LABEL_45:
    v34 = ((char *)v21 - v20) >> 3;
    if ( v34 )
      v107 = &v21[-v34];
    v106 = 0LL;
    if ( v20 == v109 )
      v20 = 0LL;
    DefaultHeap::Free(v20);
    TreeData = 0LL;
    v36 = 0;
    if ( v17 == *((CVisual **)v3 + 8) )
      goto LABEL_83;
    v37 = (_DWORD *)*((_QWORD *)v17 + 29);
    v38 = 0LL;
    if ( (*v37 & 0x1000000) == 0 )
      goto LABEL_51;
    v57 = (unsigned int)v37[1];
    v58 = v37 + 2;
    v59 = 0;
    if ( (_DWORD)v57 )
    {
      while ( *v58 != 8 )
      {
        ++v59;
        ++v58;
        if ( v59 >= (unsigned int)v57 )
          goto LABEL_103;
      }
LABEL_94:
      v60 = (_QWORD **)((char *)v37 + v57 + 8LL * v59 - (((_BYTE)v57 + 15) & 7) + 15);
    }
    else
    {
LABEL_103:
      if ( v59 < (unsigned int)v57 )
        goto LABEL_94;
      v60 = 0LL;
    }
    v61 = *v60;
    if ( v61 )
      v38 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v61 + 184LL))(*v61);
LABEL_51:
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
    {
      v39 = (struct _LIST_ENTRY *)((char *)v17 + 336);
      goto LABEL_53;
    }
    v44 = CVisual::GetTreeDataListHead(v17);
    if ( !v44 )
      goto LABEL_149;
    v45 = v44->Flink;
    if ( v44->Flink == v44 )
      goto LABEL_149;
    while ( 1 )
    {
      v39 = v45 - 24;
      if ( (const struct CVisualTree *)v45[2].Flink == v3 )
        break;
      v45 = v45->Flink;
      if ( v45 == v44 )
        goto LABEL_56;
    }
LABEL_53:
    if ( v39 && v39[17].Blink != v39[18].Flink[1].Flink[31].Flink && v38 )
    {
      TreeData = CVisual::FindTreeData(v38, v3);
      v36 = 1;
    }
    else
    {
LABEL_149:
    {
LABEL_56:
      v40 = (CVisual *)*((_QWORD *)v17 + 11);
      TreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
      {
        TreeData = (__int64 **)((char *)v40 + 336);
      }
      else
      {
        v46 = CVisual::GetTreeDataListHead(v40);
        if ( v46 )
        {
          v47 = v46->Flink;
          if ( v46->Flink != v46 )
          {
            while ( (const struct CVisualTree *)v47[2].Flink != v3 )
            {
              v47 = v47->Flink;
              if ( v47 == v46 )
                goto LABEL_58;
            }
            TreeData = (__int64 **)&v47[-24];
          }
        }
      }
    }
    }
LABEL_58:
    if ( !TreeData )
    {
LABEL_83:
      v41 = 0LL;
      if ( g_pComposition )
        v41 = (__int64 *)*((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v41 = TreeData[34];
    }
    v42 = *((_QWORD *)v89 + 34);
    if ( v42 < (unsigned __int64)v41 )
    {
      CVisual::UpdateWorldTransform(v17, v3, v89, v36, (const struct CTreeData *)TreeData);
      v42 = *((_QWORD *)v89 + 34);
    }
    if ( v42 != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v89 + 36) + 16LL) + 496LL) )
    {
      v8 = 0LL;
      v16 = v90;
      v6 = v110;
      --v86;
      if ( v90 <= 0 )
        goto LABEL_64;
      continue;
    }
    break;
  }
  CVisual::PropagateFlags((__int64)*this, 1u);
  v6 = v110;
LABEL_64:
  v7 = v111;
LABEL_65:
  v43 = (v7 - v6) >> 3;
  if ( v43 )
    v111 = &v7[-8 * v43];
  v110 = 0LL;
  if ( v6 == v113 )
    v6 = 0LL;
  DefaultHeap::Free(v6);
}
