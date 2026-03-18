/*
 * XREFs of ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180042480
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000B880 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180011124 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x180014174 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18001B118 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180042C90 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042DDC (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180043CAC (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x180043DC0 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007F4D4 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180081DEC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x1800B432C (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800DF0A0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B2F9C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::UpdateTransformChildBounds(
        CVisual **this,
        const struct CVisualTree *a2)
{
  const struct CVisualTree *v3; // r12
  CVisual *v4; // rbx
  __int128 *Bounds; // rax
  CVisual *v6; // rbx
  _DWORD *v7; // r8
  __int64 v8; // rdi
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 v10; // rax
  CVisual *v11; // r13
  struct CTreeData *v12; // rax
  detail::liberal_expansion_policy *v13; // rcx
  struct CComposition *v14; // r11
  _BYTE *v15; // rbx
  detail::liberal_expansion_policy **v16; // r8
  char *v17; // rdx
  __int64 v18; // r15
  CVisual *v19; // r14
  unsigned __int64 v20; // rsi
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  detail::liberal_expansion_policy **v23; // r10
  __int64 v24; // rcx
  __int64 v25; // r11
  detail::liberal_expansion_policy **v26; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  bool v32; // si
  __int64 **TreeData; // rbx
  _DWORD *v34; // r8
  struct _LIST_ENTRY **v35; // rdx
  CVisual *v36; // rdi
  __int64 *v37; // rax
  __int64 v38; // rax
  void *v39; // rcx
  bool v40; // zf
  __int64 v41; // r14
  __int64 v42; // rsi
  __int64 v43; // rax
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *v45; // rcx
  struct _LIST_ENTRY *v46; // rax
  struct _LIST_ENTRY *v47; // rdx
  unsigned __int64 v48; // rdi
  char *v49; // rbx
  void *v50; // rcx
  __int64 v51; // rcx
  _BYTE *v52; // rdx
  unsigned int i; // eax
  _QWORD **v54; // rcx
  _QWORD *v55; // rcx
  __int64 v56; // rcx
  _BYTE *v57; // rdx
  unsigned int j; // eax
  _QWORD **v59; // rcx
  _QWORD *v60; // rcx
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm6_4
  float v64; // xmm7_4
  float v65; // xmm1_4
  float v66; // xmm4_4
  float v67; // xmm5_4
  float v68; // xmm1_4
  float v69; // xmm0_4
  bool v70; // r15
  char v71; // bl
  __int64 v72; // rax
  struct CTreeData *v73; // [rsp+20h] [rbp-E0h]
  __int64 v74; // [rsp+28h] [rbp-D8h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  struct CTreeData *v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  struct D2D_VECTOR_3F v80; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v81[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v82[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v83[24]; // [rsp+B0h] [rbp-50h] BYREF
  char *v84; // [rsp+C8h] [rbp-38h]
  detail::liberal_expansion_policy **v85; // [rsp+D0h] [rbp-30h]
  char *v86; // [rsp+D8h] [rbp-28h]
  _BYTE v87[256]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE *v88; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE *v89; // [rsp+1E8h] [rbp+E8h]
  __int64 *v90; // [rsp+1F0h] [rbp+F0h]
  _BYTE v91[256]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v92; // [rsp+2F8h] [rbp+1F8h] BYREF

  v3 = a2;
  if ( !CVisual::GetTransformParent(*this, a2, 0LL) )
    return;
  v4 = *this;
  if ( (*((_BYTE *)v4 + 96) & 1) != 0 )
    return;
  Bounds = CVisual::GetBounds((__int64)v4, (__int64)v3);
  if ( TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)Bounds) )
    return;
  v88 = v91;
  v89 = v91;
  v90 = &v92;
  v6 = (CVisual *)*((_QWORD *)v4 + 11);
  if ( v6 )
  {
    while ( 1 )
    {
      *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
                   &v88,
                   (v89 - v88) >> 3) = v6;
      if ( v6 == *((CVisual **)v3 + 8) )
        break;
      v7 = (_DWORD *)*((_QWORD *)v6 + 29);
      v8 = 0LL;
      if ( (*v7 & 0x1000000) != 0 )
      {
        v51 = (unsigned int)v7[1];
        v52 = v7 + 2;
        for ( i = 0; i < (unsigned int)v51; ++v52 )
        {
          if ( *v52 == 8 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v51 )
          v54 = 0LL;
        else
          v54 = (_QWORD **)((char *)v7 + 8LL * i - (((_BYTE)v51 + 15) & 7) + v51 + 15);
        v55 = *v54;
        if ( v55 )
          v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 184LL))(*v55);
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v6 + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v6);
        if ( !TreeDataListHead )
          goto LABEL_13;
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink == TreeDataListHead )
          goto LABEL_13;
        while ( 1 )
        {
          p_Blink = &Flink[-23].Blink;
          if ( (const struct CVisualTree *)Flink[2].Flink == v3 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_13;
        }
      }
      if ( p_Blink && p_Blink[32] != p_Blink[33][1].Flink[31].Flink && v8 )
      {
        v6 = (CVisual *)v8;
      }
      else
      {
LABEL_13:
        v6 = (CVisual *)*((_QWORD *)v6 + 11);
        if ( !v6 )
          break;
      }
    }
  }
  v10 = (v89 - v88) >> 3;
  if ( (int)v10 <= 0 )
    goto LABEL_53;
  v10 = (int)v10;
  while ( 2 )
  {
    v78 = v10 - 1;
    v11 = *(CVisual **)&v88[8 * v10 - 8];
    v12 = CVisual::EnsureTreeData(v11, v3);
    v14 = g_pComposition;
    v15 = v87;
    v77 = v12;
    v16 = (detail::liberal_expansion_policy **)v87;
    v84 = v87;
    v17 = (char *)&v88;
    v85 = (detail::liberal_expansion_policy **)v87;
    v18 = 0LL;
    v86 = (char *)&v88;
    if ( g_pComposition )
      v18 = *((_QWORD *)g_pComposition + 62);
    v19 = v11;
    if ( v11 )
    {
      while ( *((_QWORD *)v19 + 41) != v18 )
      {
        v20 = ((char *)v16 - v15) >> 3;
        if ( !((v17 - (char *)v16) >> 3) )
        {
          if ( v20 + 1 < v20 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_137:
            _invalid_parameter_noinfo_noreturn();
          }
          v48 = detail::liberal_expansion_policy::expand(v13, (v17 - v15) >> 3, v20 + 1);
          v49 = (char *)operator new(saturated_mul(v48, 8uLL));
          v81[0] = (__int64)v49;
          v81[1] = v20;
          v81[2] = 0LL;
          std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
            (__int64)v83,
            v84,
            (__int64)v85,
            v81);
          v50 = v84;
          v40 = v84 == v87;
          v84 = v49;
          if ( v40 )
            v50 = 0LL;
          operator delete(v50);
          v15 = v84;
          v16 = (detail::liberal_expansion_policy **)&v84[8 * v20];
          v86 = &v84[8 * v48];
          v85 = v16;
        }
        v21 = ((char *)v16 - v15) >> 3;
        v22 = v21 - v20;
        v23 = (detail::liberal_expansion_policy **)&v15[8 * v21];
        if ( !v23 )
          goto LABEL_137;
        v24 = (((char *)v16 - v15) >> 3) - v20;
        v25 = 1LL;
        if ( v22 > 1 )
          v24 = 1LL;
        v13 = (detail::liberal_expansion_policy *)(8 * v24);
        v26 = (detail::liberal_expansion_policy **)((char *)v16 - (char *)v13);
        if ( v16 != (detail::liberal_expansion_policy **)((char *)v16 - (char *)v13) )
        {
          do
          {
            --v16;
            if ( !v25 )
              goto LABEL_137;
            if ( --v25 )
              goto LABEL_137;
            v13 = *v16;
            *v23 = *v16;
          }
          while ( v16 != v26 );
          v16 = v85;
        }
        if ( v22 > 1 )
        {
          if ( v21 && (!v15 || v21 < 0) )
            goto LABEL_137;
          v82[1] = v21;
          v82[2] = v21;
          v82[0] = v15;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v83,
            &v15[8 * v20],
            &v15[8 * v21 - 8],
            v82,
            v73,
            v74,
            v75);
          v16 = v85;
        }
        v85 = v16 + 1;
        *(_QWORD *)&v15[8 * v20] = v19;
        v19 = (CVisual *)*((_QWORD *)v19 + 11);
        v16 = v85;
        v15 = v84;
        if ( !v19 )
          break;
        v17 = v86;
      }
      v14 = g_pComposition;
    }
    v29 = ((char *)v16 - v15) >> 3;
    v30 = (int)v29;
    if ( (int)v29 <= 0 )
      goto LABEL_34;
    do
    {
      v41 = *(_QWORD *)&v15[8 * v30 - 8];
      v42 = 0LL;
      if ( v14 )
        v42 = *((_QWORD *)v14 + 62);
      if ( *(_QWORD *)(v41 + 328) != v42 )
      {
        v43 = *(_QWORD *)(v41 + 88);
        if ( !v43 || (*(_BYTE *)(v43 + 96) & 1) != 0 )
        {
          v61 = 0.0;
          v62 = 0.0;
          v63 = *(float *)(v41 + 140);
          v64 = *(float *)(v41 + 144);
          if ( v43 )
          {
            v61 = *(float *)(v43 + 140);
            v62 = *(float *)(v43 + 144);
          }
          CVisual::GetRelativeOffsetInternal(*(CVisual **)&v15[8 * v30 - 8], &v80);
          v65 = (float)(v80.x * v61) + *(float *)(v41 + 112);
          *(float *)(v41 + 128) = (float)(v80.y * v62) + *(float *)(v41 + 116);
          *(float *)(v41 + 124) = v65;
          CVisual::GetRelativeLayoutSizeInternal((CVisual *)v41);
          v68 = (float)(*(float *)&v75 * v61) + *(float *)(v41 + 132);
          v69 = (float)(*((float *)&v75 + 1) * v62) + *(float *)(v41 + 136);
          *(float *)(v41 + 140) = v68;
          *(float *)(v41 + 144) = v69;
          if ( v68 < 0.0 )
          {
            *(_DWORD *)(v41 + 140) = 0;
            v68 = 0.0;
          }
          if ( v69 < 0.0 )
          {
            *(_DWORD *)(v41 + 144) = 0;
            v69 = 0.0;
          }
          v70 = v66 != *(float *)(v41 + 124) || v67 != *(float *)(v41 + 128);
          if ( v63 == v68 && v64 == v69 )
          {
            v71 = 0;
          }
          else
          {
            v72 = *(_QWORD *)(v41 + 248);
            v71 = 1;
            if ( v72 && *(_BYTE *)(v72 + 136) )
              CVisual::OnClipChanged((CVisual *)v41);
            CVisual::OnLayoutChanged((CVisual *)v41);
            v14 = g_pComposition;
          }
          if ( v70 )
          {
            CVisual::OnOuterTransformChanged((CVisual *)v41);
          }
          else if ( !v71 )
          {
LABEL_131:
            *(_QWORD *)(v41 + 328) = v42;
            v15 = v84;
            goto LABEL_63;
          }
          *(_BYTE *)(v41 + 96) |= 1u;
          goto LABEL_131;
        }
      }
LABEL_63:
      --v30;
    }
    while ( v30 > 0 );
    v3 = a2;
    v16 = v85;
LABEL_34:
    v31 = ((char *)v16 - v15) >> 3;
    if ( v31 )
      v85 = &v16[-v31];
    v84 = 0LL;
    if ( v15 == v87 )
      v15 = 0LL;
    operator delete(v15);
    v32 = 0;
    TreeData = 0LL;
    if ( v11 == *((CVisual **)v3 + 8) )
      goto LABEL_73;
    v34 = (_DWORD *)*((_QWORD *)v11 + 29);
    if ( (*v34 & 0x1000000) != 0 )
    {
      v56 = (unsigned int)v34[1];
      v57 = v34 + 2;
      for ( j = 0; j < (unsigned int)v56; ++v57 )
      {
        if ( *v57 == 8 )
          break;
        ++j;
      }
      if ( j >= (unsigned int)v56 )
        v59 = 0LL;
      else
        v59 = (_QWORD **)((char *)v34 + 8LL * j - (((_BYTE)v56 + 15) & 7) + v56 + 15);
      v60 = *v59;
      if ( v60 )
        TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v60 + 184LL))(*v60);
    }
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
    {
      v35 = (struct _LIST_ENTRY **)((char *)v11 + 336);
      goto LABEL_42;
    }
    v44 = CVisual::GetTreeDataListHead(v11);
    if ( !v44 )
      goto LABEL_140;
    v45 = v44->Flink;
    if ( v44->Flink == v44 )
      goto LABEL_140;
    while ( 1 )
    {
      v35 = &v45[-23].Blink;
      if ( (const struct CVisualTree *)v45[2].Flink == v3 )
        break;
      v45 = v45->Flink;
      if ( v45 == v44 )
        goto LABEL_45;
    }
LABEL_42:
    if ( v35 && v35[32] != v35[33][1].Flink[31].Flink && TreeData )
    {
      TreeData = CVisual::FindTreeData((CVisual *)TreeData, v3);
      v32 = 1;
    }
    else
    {
LABEL_140:
    {
LABEL_45:
      v36 = (CVisual *)*((_QWORD *)v11 + 11);
      TreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)v3 + 184LL))(v3) )
      {
        TreeData = (__int64 **)((char *)v36 + 336);
      }
      else
      {
        v46 = CVisual::GetTreeDataListHead(v36);
        if ( v46 )
        {
          v47 = v46->Flink;
          if ( v46->Flink != v46 )
          {
            while ( (const struct CVisualTree *)v47[2].Flink != v3 )
            {
              v47 = v47->Flink;
              if ( v47 == v46 )
                goto LABEL_47;
            }
            TreeData = (__int64 **)&v47[-23].Blink;
          }
        }
      }
    }
    }
LABEL_47:
    if ( !TreeData )
    {
LABEL_73:
      v37 = 0LL;
      if ( g_pComposition )
        v37 = (__int64 *)*((_QWORD *)g_pComposition + 62);
    }
    else
    {
      v37 = TreeData[31];
    }
    if ( *((_QWORD *)v77 + 31) < (unsigned __int64)v37 )
      CVisual::UpdateWorldTransform(v11, v3, v77, v32, (const struct CTreeData *)TreeData);
    if ( *((_QWORD *)v77 + 31) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v77 + 33) + 16LL) + 496LL) )
    {
      v10 = v78;
      if ( v78 <= 0 )
        goto LABEL_53;
      continue;
    }
    break;
  }
  CVisual::PropagateFlags(*this, 1LL);
LABEL_53:
  v38 = (v89 - v88) >> 3;
  if ( v38 )
    v89 -= 8 * v38;
  v39 = v88;
  v40 = v88 == v91;
  v88 = 0LL;
  if ( v40 )
    v39 = 0LL;
  operator delete(v39);
}
