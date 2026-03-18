/*
 * XREFs of ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180042ED0
 * Callers:
 *     ?UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800422E4 (-UpdateTransform@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVIDeviceResource@@@std@@V?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVIDeviceResource@@@stdext@@V?$move_iterator@PEAPEAVIDeviceResource@@@0@0V12@@Z @ 0x180011124 (--$uninitialized_copy@V-$move_iterator@PEAPEAVIDeviceResource@@@std@@V-$checked_array_iterator@P.c)
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180014E9C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x18001FB44 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002E760 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180042C34 (--3@YAXPEAX@Z.c)
 *     ?reserve_region@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCVisual@@_K0@Z @ 0x180042C90 (-reserve_region@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expans.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180043CAC (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180043F28 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007F4D4 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180081DEC (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x180084944 (--0CTreeData@@IEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180097C78 (--2@YAPEAX_K@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800DCA90 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x1800DCF04 (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800DF0A0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801B2F9C (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 *     ?erase@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisual@@@2@V?$basic_iterator@QEAVCVisual@@@2@0@Z @ 0x1801B5EF4 (-erase@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0CA@$00Vliberal_expansion_polic.c)
 */

void __fastcall CPreComputeContext::CPreWalkVisual::CalcTransform(
        const struct CVisual **this,
        const struct CVisualTree *a2,
        unsigned __int64 a3)
{
  const struct CVisual *v3; // rdi
  __int64 v6; // r12
  int **v7; // rsi
  struct CTreeData *UnusedTreeData; // rbx
  unsigned int **v9; // r14
  const struct CVisual *v10; // rsi
  unsigned int *v11; // r8
  _BYTE *v12; // rbx
  struct _LIST_ENTRY **p_Blink; // rdx
  char v14; // al
  char *v15; // r12
  char *v16; // rdx
  unsigned __int64 v17; // r14
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  char *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // r11
  char *v23; // rax
  __int64 v24; // r8
  _BYTE *v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // r13
  detail::liberal_expansion_policy *v28; // rcx
  struct CTreeData *v29; // r14
  struct CComposition *v30; // r10
  _BYTE *v31; // rbx
  detail::liberal_expansion_policy **v32; // r8
  char *v33; // rdx
  _QWORD *v34; // rsi
  unsigned __int64 v35; // r14
  __int64 v36; // r9
  unsigned __int64 v37; // rdx
  detail::liberal_expansion_policy **v38; // r10
  __int64 v39; // rcx
  __int64 v40; // r11
  detail::liberal_expansion_policy **v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rax
  bool v48; // si
  __int64 **TreeData; // rbx
  _DWORD *v50; // r8
  struct _LIST_ENTRY **v51; // rdx
  CVisual *v52; // rdi
  __int64 *v53; // rax
  float v54; // xmm5_4
  float v55; // xmm2_4
  float v56; // xmm6_4
  float v57; // xmm1_4
  float v58; // xmm7_4
  float v59; // xmm8_4
  __int64 v60; // rcx
  int *v61; // rdx
  float v62; // xmm3_4
  float v63; // xmm4_4
  float v64; // xmm2_4
  float v65; // xmm1_4
  bool v66; // r12
  char v67; // bl
  int *v68; // r8
  __int64 v69; // rax
  _BYTE *v70; // rdx
  __int64 i; // rcx
  _QWORD **v72; // rax
  _QWORD *v73; // rax
  _QWORD *v74; // rcx
  CTreeData *v75; // rax
  detail::liberal_expansion_policy **v76; // rax
  struct _LIST_ENTRY *v77; // rax
  struct _LIST_ENTRY *v78; // rcx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v81; // rax
  struct _LIST_ENTRY *v82; // rdx
  __int64 v83; // rax
  _BYTE *v84; // rdx
  __int64 n; // rcx
  _QWORD **v86; // rcx
  _QWORD *v87; // rcx
  const struct CVisual *v88; // rcx
  const struct CVisual *v89; // rax
  __int64 v90; // rax
  _BYTE *v91; // rdx
  unsigned int j; // ecx
  _BYTE **v93; // rbx
  const struct CVisual **v94; // rbx
  char *v95; // rcx
  const struct CVisual **v96; // rax
  int m; // ecx
  unsigned __int64 v98; // rdi
  char *v99; // rbx
  void *v100; // rcx
  bool v101; // zf
  HANDLE v102; // rax
  unsigned __int64 v103; // rdi
  char *v104; // rbx
  void *v105; // rcx
  HANDLE ProcessHeap; // rax
  unsigned int v107; // eax
  unsigned int *v108; // rcx
  unsigned int Slot; // eax
  __int64 v110; // r10
  __int64 v111; // rax
  CVisual **k; // rdi
  _DWORD *v113; // r10
  __int64 v114; // rcx
  unsigned int v115; // eax
  __int64 v116; // r10
  CTreeData *v117; // rax
  int v118; // r9d
  int *v119; // r8
  struct CTreeData *v120; // [rsp+20h] [rbp-E0h]
  __int64 v121; // [rsp+28h] [rbp-D8h]
  struct CTreeData *v122; // [rsp+30h] [rbp-D0h] BYREF
  char *v123; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v124[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v125; // [rsp+60h] [rbp-A0h] BYREF
  char *v126; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v127; // [rsp+78h] [rbp-88h]
  __int64 v128; // [rsp+80h] [rbp-80h]
  _QWORD v129[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v130[24]; // [rsp+B0h] [rbp-50h] BYREF
  char *v131; // [rsp+C8h] [rbp-38h] BYREF
  char *v132; // [rsp+D0h] [rbp-30h]
  const void **v133; // [rsp+D8h] [rbp-28h]
  _BYTE v134[256]; // [rsp+E0h] [rbp-20h] BYREF
  char *v135; // [rsp+1E0h] [rbp+E0h] BYREF
  detail::liberal_expansion_policy **v136; // [rsp+1E8h] [rbp+E8h]
  char *v137; // [rsp+1F0h] [rbp+F0h]
  _BYTE v138[256]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v139; // [rsp+2F8h] [rbp+1F8h] BYREF

  v3 = *this;
  v131 = v134;
  v132 = v134;
  v133 = (const void **)&v135;
  v6 = 0LL;
  *(_QWORD *)detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::reserve_region(
               (detail::liberal_expansion_policy *)&v131,
               0LL) = *this;
  if ( v3 )
  {
    while ( 1 )
    {
      v7 = (int **)((char *)v3 + 232);
      UnusedTreeData = 0LL;
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
        break;
      v68 = *v7;
      v9 = (unsigned int **)((char *)v3 + 232);
      if ( **v7 < 0 )
      {
        v69 = (unsigned int)v68[1];
        v70 = v68 + 2;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v69; ++v70 )
        {
          if ( *v70 == 1 )
            break;
          i = (unsigned int)(i + 1);
        }
        if ( (unsigned int)i >= (unsigned int)v69 )
          v72 = 0LL;
        else
          v72 = (_QWORD **)((char *)v68 + v69 + 8 * i - (((_BYTE)v69 + 15) & 7) + 15);
        v73 = *v72;
        if ( v73 )
        {
          v74 = (_QWORD *)*v73;
          if ( (_QWORD *)*v73 != v73 )
          {
            while ( 1 )
            {
              UnusedTreeData = (struct CTreeData *)(v74 - 45);
              if ( (const struct CVisualTree *)v74[4] == a2 )
                break;
              v74 = (_QWORD *)*v74;
              if ( v74 == v73 )
                goto LABEL_108;
            }
          }
        }
LABEL_4:
        v9 = (unsigned int **)((char *)v3 + 232);
        if ( UnusedTreeData )
          goto LABEL_5;
      }
LABEL_108:
      UnusedTreeData = CVisual::GetUnusedTreeData(v3);
      if ( UnusedTreeData )
      {
        v107 = **v9;
        if ( (v107 & 0x8000000) != 0 )
        {
          v108 = *v9;
          **v9 = v107 & 0xF7FFFFFF;
          Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v108, 5LL);
          if ( Slot < *(_DWORD *)(v110 + 4) )
            *(_BYTE *)(Slot + v110 + 8) = 0;
        }
      }
      else
      {
        v75 = (CTreeData *)operator new(0x190uLL);
        UnusedTreeData = v75;
        if ( v75 )
        {
          CTreeData::CTreeData(v75);
          *((_QWORD *)UnusedTreeData + 49) = 0LL;
          *(_QWORD *)UnusedTreeData = &CVisualTreeData::`vftable';
        }
        else
        {
          UnusedTreeData = 0LL;
        }
      }
      (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, const struct CVisual *))(*(_QWORD *)UnusedTreeData + 8LL))(
        UnusedTreeData,
        a2,
        v3);
LABEL_5:
      if ( *((_QWORD *)UnusedTreeData + 31) >= a3 )
        goto LABEL_28;
      v10 = 0LL;
      if ( v3 == *((const struct CVisual **)a2 + 8) )
      {
LABEL_14:
        v14 = 0;
        goto LABEL_15;
      }
      v11 = *v9;
      if ( (**v9 & 0x1000000) != 0 )
      {
        v90 = v11[1];
        v91 = v11 + 2;
        for ( j = 0; j < (unsigned int)v90; ++v91 )
        {
          if ( *v91 == 8 )
            break;
          ++j;
        }
        if ( j >= (unsigned int)v90 )
          v93 = 0LL;
        else
          v93 = (_BYTE **)((char *)v11 + v90 + 8LL * j - (((_BYTE)v90 + 15) & 7) + 15);
        v12 = *v93;
        if ( v12 )
          v10 = (const struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v12 + 184LL))(*(_QWORD *)v12);
      }
      else
      {
        v12 = 0LL;
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        p_Blink = (struct _LIST_ENTRY **)((char *)v3 + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v3);
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_204:
          v10 = 0LL;
          goto LABEL_13;
        }
        while ( 1 )
        {
          p_Blink = &Flink[-23].Blink;
          if ( (const struct CVisualTree *)Flink[2].Flink == a2 )
            break;
          Flink = Flink->Flink;
          if ( Flink == TreeDataListHead )
            goto LABEL_204;
        }
      }
      if ( !p_Blink || p_Blink[32] == p_Blink[33][1].Flink[31].Flink )
        goto LABEL_204;
LABEL_13:
      if ( !v12 || !v12[8] )
        goto LABEL_14;
      v14 = 1;
LABEL_15:
      if ( !v10 )
        goto LABEL_16;
      if ( v14 )
      {
        v88 = v10;
        v89 = v10;
        while ( v88 != *((const struct CVisual **)a2 + 8) )
        {
          if ( !v89
            || (v89 = (const struct CVisual *)*((_QWORD *)v89 + 11)) == 0LL
            || v88 != v89 && (v89 = (const struct CVisual *)*((_QWORD *)v89 + 11), v88 != v89) )
          {
            v88 = (const struct CVisual *)*((_QWORD *)v88 + 11);
            if ( v88 )
              continue;
          }
          goto LABEL_208;
        }
        v15 = v131;
        v16 = v132;
        v94 = (const struct CVisual **)v131;
        v95 = v131;
        v96 = (const struct CVisual **)v131;
        while ( v95 != v132 && *v96 != v10 )
        {
          v94 = v96 + 1;
          v96 = v94;
          v95 = (char *)v94;
        }
        if ( v94 == (const struct CVisual **)v132 )
          goto LABEL_20;
        for ( k = v94; k != (CVisual **)v16; ++k )
        {
          CVisual::InvalidateTransformParent(*k, a2);
          v16 = v132;
        }
        v122 = (struct CTreeData *)v94;
        v123 = v16 - 8;
        detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,32,1,detail::liberal_expansion_policy>>::erase(
          &v131,
          &v125,
          &v122,
          &v123);
      }
      else if ( !CVisualTree::IsAncestorInSameSpace((const struct CVisual **)a2, (const struct CVisual **)v3, v10) )
      {
LABEL_208:
        CVisual::InvalidateTransformParent(v3, a2);
        v10 = 0LL;
LABEL_16:
        if ( v3 != *((const struct CVisual **)a2 + 8) )
          v10 = (const struct CVisual *)*((_QWORD *)v3 + 11);
        if ( !v10 )
          goto LABEL_27;
      }
      v15 = v131;
      v16 = v132;
LABEL_20:
      v17 = (v16 - v15) >> 3;
      if ( !(((char *)v133 - v16) >> 3) )
      {
        if ( v17 + 1 < v17 )
        {
          std::_Xoverflow_error("overflow");
          __debugbreak();
LABEL_218:
          _invalid_parameter_noinfo_noreturn();
        }
        v98 = detail::liberal_expansion_policy::expand(
                (detail::liberal_expansion_policy *)(((char *)v133 - v15) >> 3),
                ((char *)v133 - v15) >> 3,
                v17 + 1);
        v124[0] = (__int64)operator new(saturated_mul(v98, 8uLL));
        v124[2] = 0LL;
        v99 = (char *)v124[0];
        v124[1] = v17;
        std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
          (__int64)v129,
          v131,
          (__int64)v132,
          v124);
        v100 = v131;
        v101 = v131 == v134;
        v131 = v99;
        if ( v101 )
          v100 = 0LL;
        operator delete(v100);
        v15 = v131;
        v16 = &v131[8 * v17];
        v132 = v16;
        v133 = (const void **)&v131[8 * v98];
      }
      v18 = (v16 - v15) >> 3;
      v19 = v18 - v17;
      v20 = &v15[8 * v18];
      if ( !v20 )
        goto LABEL_218;
      v21 = ((v16 - v15) >> 3) - v17;
      v22 = 1LL;
      if ( v19 > 1 )
        v21 = 1LL;
      v23 = &v16[-8 * v21];
      if ( v16 != v23 )
      {
        do
        {
          v16 -= 8;
          if ( !v22 )
            goto LABEL_218;
          if ( --v22 )
            goto LABEL_218;
          *(_QWORD *)v20 = *(_QWORD *)v16;
        }
        while ( v16 != v23 );
        v16 = v132;
      }
      if ( v19 > 1 )
      {
        if ( v18 && (!v15 || v18 < 0) )
          goto LABEL_218;
        v127 = v18;
        v128 = v18;
        v126 = v15;
        std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
          v129,
          &v15[8 * v17],
          &v15[8 * v18 - 8],
          &v126,
          v120,
          v121,
          v122);
        v16 = v132;
      }
      v132 = v16 + 8;
      *(_QWORD *)&v15[8 * v17] = v10;
      v6 = 0LL;
LABEL_27:
      v3 = v10;
      if ( !v10 )
        goto LABEL_28;
    }
    UnusedTreeData = (const struct CVisual *)((char *)v3 + 336);
    goto LABEL_4;
  }
LABEL_28:
  v24 = (__int64)v132;
  v25 = v131;
  v26 = (v132 - v131) >> 3;
  if ( (int)v26 <= 0 )
    goto LABEL_128;
  v26 = (int)v26;
  while ( 2 )
  {
    v27 = *(_QWORD **)&v25[8 * v26 - 8];
    v125 = v26 - 1;
    if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      v29 = (struct CTreeData *)(v27 + 42);
      v122 = (struct CTreeData *)(v27 + 42);
    }
    else
    {
      v76 = (detail::liberal_expansion_policy **)CVisual::GetTreeDataListHead((CVisual *)v27);
      if ( !v76 )
        goto LABEL_219;
      v28 = *v76;
      if ( *v76 == (detail::liberal_expansion_policy *)v76 )
        goto LABEL_219;
      while ( 1 )
      {
        v29 = (detail::liberal_expansion_policy *)((char *)v28 - 360);
        v122 = (detail::liberal_expansion_policy *)((char *)v28 - 360);
        if ( *((const struct CVisualTree **)v28 + 4) == a2 )
          break;
        v28 = *(detail::liberal_expansion_policy **)v28;
        if ( v28 == (detail::liberal_expansion_policy *)v76 )
          goto LABEL_219;
      }
    }
    if ( !v29 )
    {
LABEL_219:
      v122 = CVisual::GetUnusedTreeData((CVisual *)v27);
      v29 = v122;
      if ( v122 )
      {
        v113 = (_DWORD *)v27[29];
        if ( (*v113 & 0x8000000) != 0 )
        {
          v114 = v27[29];
          *v113 &= ~0x8000000u;
          v115 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v114, 5LL);
          if ( v115 < *(_DWORD *)(v116 + 4) )
            *(_BYTE *)(v115 + v116 + 8) = 0;
        }
      }
      else
      {
        v117 = (CTreeData *)operator new(0x190uLL);
        v122 = v117;
        v29 = v117;
        if ( v117 )
        {
          CTreeData::CTreeData(v117);
          *(_QWORD *)v29 = &CVisualTreeData::`vftable';
          *((_QWORD *)v29 + 49) = 0LL;
        }
        else
        {
          v29 = 0LL;
          v122 = 0LL;
        }
      }
      (*(void (__fastcall **)(struct CTreeData *, const struct CVisualTree *, _QWORD *))(*(_QWORD *)v29 + 8LL))(
        v29,
        a2,
        v27);
    }
    v30 = g_pComposition;
    v31 = v138;
    v135 = v138;
    v32 = (detail::liberal_expansion_policy **)v138;
    v136 = (detail::liberal_expansion_policy **)v138;
    v33 = (char *)&v139;
    v137 = (char *)&v139;
    if ( g_pComposition )
      v6 = *((_QWORD *)g_pComposition + 62);
    v34 = v27;
    if ( v27 )
    {
      while ( v34[41] != v6 )
      {
        v35 = ((char *)v32 - v31) >> 3;
        if ( !((v33 - (char *)v32) >> 3) )
        {
          if ( v35 + 1 < v35 )
          {
            std::_Xoverflow_error("overflow");
            __debugbreak();
LABEL_240:
            _invalid_parameter_noinfo_noreturn();
          }
          v103 = detail::liberal_expansion_policy::expand(v28, (v33 - v31) >> 3, v35 + 1);
          v104 = (char *)operator new(saturated_mul(v103, 8uLL));
          v126 = v104;
          v127 = v35;
          v128 = 0LL;
          std::uninitialized_copy<std::move_iterator<IDeviceResource * *>,stdext::checked_array_iterator<IDeviceResource * *>>(
            (__int64)v130,
            v135,
            (__int64)v136,
            (__int64 *)&v126);
          v105 = v135;
          v101 = v135 == v138;
          v135 = v104;
          if ( v101 )
            v105 = 0LL;
          operator delete(v105);
          v31 = v135;
          v32 = (detail::liberal_expansion_policy **)&v135[8 * v35];
          v136 = v32;
          v137 = &v135[8 * v103];
        }
        v36 = ((char *)v32 - v31) >> 3;
        v37 = v36 - v35;
        v38 = (detail::liberal_expansion_policy **)&v31[8 * v36];
        if ( !v38 )
          goto LABEL_240;
        v39 = (((char *)v32 - v31) >> 3) - v35;
        v40 = 1LL;
        if ( v37 > 1 )
          v39 = 1LL;
        v28 = (detail::liberal_expansion_policy *)(8 * v39);
        v41 = (detail::liberal_expansion_policy **)((char *)v32 - (char *)v28);
        if ( v32 != (detail::liberal_expansion_policy **)((char *)v32 - (char *)v28) )
        {
          do
          {
            --v32;
            if ( !v40 )
              goto LABEL_240;
            if ( --v40 )
              goto LABEL_240;
            v28 = *v32;
            *v38 = *v32;
          }
          while ( v32 != v41 );
          v32 = v136;
        }
        if ( v37 > 1 )
        {
          if ( v36 && (!v31 || v36 < 0) )
            goto LABEL_240;
          v129[1] = v36;
          v129[2] = v36;
          v129[0] = v31;
          std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>(
            v130,
            &v31[8 * v35],
            &v31[8 * v36 - 8],
            v129,
            v120,
            v121,
            v122);
          v32 = v136;
        }
        v136 = v32 + 1;
        *(_QWORD *)&v31[8 * v35] = v34;
        v34 = (_QWORD *)v34[11];
        v32 = v136;
        v31 = v135;
        if ( !v34 )
          break;
        v33 = v137;
      }
      v29 = v122;
      v30 = g_pComposition;
    }
    v42 = ((char *)v32 - v31) >> 3;
    v43 = (int)v42;
    if ( (int)v42 <= 0 )
      goto LABEL_54;
    do
    {
      v44 = *(_QWORD *)&v31[8 * v43 - 8];
      v45 = 0LL;
      if ( v30 )
        v45 = *((_QWORD *)v30 + 62);
      if ( *(_QWORD *)(v44 + 328) != v45 )
      {
        v46 = *(_QWORD *)(v44 + 88);
        if ( !v46 || (*(_BYTE *)(v46 + 96) & 1) != 0 )
        {
          v54 = *(float *)(v44 + 124);
          v55 = 0.0;
          v56 = *(float *)(v44 + 128);
          v57 = 0.0;
          v58 = *(float *)(v44 + 140);
          v59 = *(float *)(v44 + 144);
          if ( v46 )
          {
            v55 = *(float *)(v46 + 140);
            v57 = *(float *)(v46 + 144);
          }
          v60 = *(_QWORD *)(v44 + 224);
          v61 = (int *)(v60 + 12);
          if ( (*(_DWORD *)(v60 + 4) & 0x10000000) != 0 )
          {
            v118 = *v61;
            v119 = (int *)(v60 + 12);
            if ( (*v61 & 0x7F000000) != 0x4000000 )
            {
              do
              {
                v119 = (int *)((char *)v119 + (v118 & 0xFFFFFF) + 4);
                v118 = *v119;
              }
              while ( (*v119 & 0x7F000000) != 0x4000000 );
            }
            v124[0] = *(_QWORD *)(v119 + 1);
          }
          else
          {
            v124[0] = 0LL;
          }
          v62 = (float)(*(float *)v124 * v55) + *(float *)(v44 + 112);
          v63 = (float)(*((float *)v124 + 1) * v57) + *(float *)(v44 + 116);
          *(float *)(v44 + 124) = v62;
          *(float *)(v44 + 128) = v63;
          if ( (*(_DWORD *)(v60 + 4) & 0x20000000) != 0 )
          {
            for ( m = *v61; (*v61 & 0x7F000000) != 0x3000000; m = *v61 )
              v61 = (int *)((char *)v61 + (m & 0xFFFFFF) + 4);
            v123 = *(char **)(v61 + 1);
          }
          else
          {
            v123 = 0LL;
          }
          v64 = (float)(v55 * *(float *)&v123) + *(float *)(v44 + 132);
          v65 = (float)(v57 * *((float *)&v123 + 1)) + *(float *)(v44 + 136);
          *(float *)(v44 + 140) = v64;
          *(float *)(v44 + 144) = v65;
          if ( v64 < 0.0 )
          {
            *(_DWORD *)(v44 + 140) = 0;
            v64 = 0.0;
          }
          if ( v65 < 0.0 )
          {
            *(_DWORD *)(v44 + 144) = 0;
            v65 = 0.0;
          }
          v66 = v54 != v62 || v56 != v63;
          if ( v58 == v64 && v59 == v65 )
          {
            v67 = 0;
          }
          else
          {
            v111 = *(_QWORD *)(v44 + 248);
            v67 = 1;
            if ( v111 && *(_BYTE *)(v111 + 136) )
              CVisual::OnClipChanged((CVisual *)v44);
            CVisual::OnLayoutChanged((CVisual *)v44);
            v30 = g_pComposition;
          }
          if ( v66 )
          {
            CVisual::OnOuterTransformChanged((CVisual *)v44);
          }
          else if ( !v67 )
          {
LABEL_95:
            *(_QWORD *)(v44 + 328) = v45;
            v31 = v135;
            goto LABEL_52;
          }
          *(_BYTE *)(v44 + 96) |= 1u;
          goto LABEL_95;
        }
      }
LABEL_52:
      --v43;
    }
    while ( v43 > 0 );
    v32 = v136;
    v29 = v122;
LABEL_54:
    v47 = ((char *)v32 - v31) >> 3;
    if ( v47 )
      v136 = &v32[-v47];
    v6 = 0LL;
    v135 = 0LL;
    if ( v31 == v138 )
      v31 = 0LL;
    if ( v31 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v31);
      v30 = g_pComposition;
    }
    v48 = 0;
    TreeData = 0LL;
    if ( v27 != *((_QWORD **)a2 + 8) )
    {
      v50 = (_DWORD *)v27[29];
      if ( (*v50 & 0x1000000) != 0 )
      {
        v83 = (unsigned int)v50[1];
        v84 = v50 + 2;
        for ( n = 0LL; (unsigned int)n < (unsigned int)v83; ++v84 )
        {
          if ( *v84 == 8 )
            break;
          n = (unsigned int)(n + 1);
        }
        if ( (unsigned int)n >= (unsigned int)v83 )
          v86 = 0LL;
        else
          v86 = (_QWORD **)((char *)v50 + 8 * n - (((_BYTE)v83 + 15) & 7) + v83 + 15);
        v87 = *v86;
        if ( v87 )
          TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v87 + 184LL))(*v87);
      }
      if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
      {
        v51 = (struct _LIST_ENTRY **)(v27 + 42);
        goto LABEL_64;
      }
      v77 = CVisual::GetTreeDataListHead((CVisual *)v27);
      if ( !v77 )
        goto LABEL_67;
      v78 = v77->Flink;
      if ( v77->Flink == v77 )
        goto LABEL_67;
      while ( 1 )
      {
        v51 = &v78[-23].Blink;
        if ( (const struct CVisualTree *)v78[2].Flink == a2 )
          break;
        v78 = v78->Flink;
        if ( v78 == v77 )
          goto LABEL_67;
      }
LABEL_64:
      if ( v51 && v51[32] != v51[33][1].Flink[31].Flink && TreeData )
      {
        TreeData = CVisual::FindTreeData((CVisual *)TreeData, a2);
        v48 = 1;
      }
      else
      {
LABEL_67:
        v52 = (CVisual *)v27[11];
        TreeData = 0LL;
        if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
        {
          TreeData = (__int64 **)((char *)v52 + 336);
        }
        else
        {
          v81 = CVisual::GetTreeDataListHead(v52);
          if ( v81 )
          {
            v82 = v81->Flink;
            if ( v81->Flink != v81 )
            {
              while ( (const struct CVisualTree *)v82[2].Flink != a2 )
              {
                v82 = v82->Flink;
                if ( v82 == v81 )
                  goto LABEL_69;
              }
              TreeData = (__int64 **)&v82[-23].Blink;
            }
          }
        }
      }
LABEL_69:
      if ( TreeData )
      {
        v53 = TreeData[31];
        goto LABEL_71;
      }
      v30 = g_pComposition;
    }
    v53 = 0LL;
    if ( v30 )
      v53 = (__int64 *)*((_QWORD *)v30 + 62);
LABEL_71:
    if ( *((_QWORD *)v29 + 31) < (unsigned __int64)v53 )
      CVisual::UpdateWorldTransform((CVisual *)v27, a2, v29, v48, (const struct CTreeData *)TreeData);
    if ( *((_QWORD *)v29 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v29 + 33) + 16LL) + 496LL) )
    {
      CVisual::PropagateFlags(v27, 5LL);
      *((_BYTE *)v29 + 161) = 1;
    }
    v26 = v125;
    v25 = v131;
    if ( v125 > 0 )
      continue;
    break;
  }
  v24 = (__int64)v132;
LABEL_128:
  if ( (v24 - (__int64)v25) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      &v131,
      0LL);
    v25 = v131;
  }
  v131 = 0LL;
  if ( v25 == v134 )
    v25 = 0LL;
  if ( v25 )
  {
    v102 = GetProcessHeap();
    HeapFree(v102, 0, v25);
  }
}
