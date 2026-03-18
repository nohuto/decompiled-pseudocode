/*
 * XREFs of ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18008B098 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801B0228 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@XZ @ 0x1801B2AD4 (-GetDirtyRegionVisualizationData@CVisual@@QEBAPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimat.c)
 *     ??1?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801F6838 (--1-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$com_p.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801F82CC (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@@Z @ 0x1801F8594 (-SetDirtyRegionVisualizationData@CVisual@@QEAAXPEAV-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnima.c)
 *     ?_Tidy@?$deque@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@V?$allocator@V?$tuple@V?$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V?$com_ptr_t@VCColorBrush@@Uerr_returncode_policy@wil@@@2@V?$vector@UMilRectF@@V?$allocator@UMilRectF@@@std@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1801F8A00 (-_Tidy@-$deque@V-$tuple@V-$com_ptr_t@VCKeyframeAnimation@@Uerr_returncode_policy@wil@@@wil@@V-$c.c)
 */

__int64 __fastcall CDrawingContext::PostSubgraph(CDrawingContext *this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v4; // ebp
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // r9
  _QWORD *v15; // r11
  char **v16; // r15
  struct _LIST_ENTRY *v17; // rsi
  struct _LIST_ENTRY *v18; // r11
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  _QWORD *v23; // rax
  int v24; // edx
  int v25; // eax
  char *v27; // rcx
  __int64 v28; // rdx
  __int64 **TreeData; // rax
  char *v30; // rdx
  struct _LIST_ENTRY *v31; // r8
  __int64 v32; // r8
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  void *DirtyRegionVisualizationData; // rsi

  v4 = 0;
  v7 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v8 = *((_QWORD *)this + 21);
  v9 = v7;
  *a3 = 1;
  if ( !v8 )
  {
LABEL_2:
    if ( (*(_BYTE *)(v9 + 102) & 4) != 0 )
      goto LABEL_33;
    if ( (*(_DWORD *)(v9 + 96) & 0x100) == 0 )
      goto LABEL_33;
    if ( !(*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
    {
      TreeData = CVisual::FindTreeData((CVisual *)v9, a2);
      if ( TreeData )
      {
        if ( TreeData[35] == *(__int64 **)(TreeData[36][2] + 496) )
          goto LABEL_33;
      }
    }
    if ( *((_BYTE *)this + 8044) )
    {
      v10 = *((_DWORD *)this + 784);
      if ( v10 )
      {
        if ( *(_BYTE *)((unsigned int)(v10 - 1) + *((_QWORD *)this + 394)) )
          CVisual::RenderProjectedShadows(v9, this, 0LL);
      }
    }
    if ( (*(_BYTE *)(v9 + 101) & 0x30) != 0 )
    {
      v35 = *((_DWORD *)g_pComposition + 278);
      if ( v35 )
        *((_DWORD *)g_pComposition + 278) = v35 - 1;
    }
    while ( 1 )
    {
      v11 = *((_DWORD *)this + 84);
      if ( !v11
        || _mm_srli_si128(*(__m128i *)(*((_QWORD *)this + 44) + 16LL * (unsigned int)(v11 - 1)), 8).m128i_u64[0] != v9 )
      {
        break;
      }
      v12 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 96LL))((char *)this + 16);
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0xDAFu);
        break;
      }
    }
    v22 = *((_DWORD *)this + 830);
    v23 = 0LL;
    if ( v22 )
    {
      v24 = v22 - 1;
      v23 = (_QWORD *)(*((_QWORD *)this + 417) + 16LL * (unsigned int)(v22 - 1));
    }
    else
    {
      v24 = -1;
    }
    if ( *v23 == v9 && v22 )
      *((_DWORD *)this + 830) = v24;
    if ( (*(_BYTE *)(v9 + 101) & 4) == 0 )
      goto LABEL_30;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 991) + 184LL))(*((_QWORD *)this + 991)) )
    {
      v36 = CDrawingContext::DrawDirtyRegionVisualizationForCurrentNode(this);
      v4 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0LL, v36, 0x17E7u);
        goto LABEL_33;
      }
      goto LABEL_31;
    }
    if ( (*(_BYTE *)(v9 + 101) & 4) == 0 )
    {
LABEL_30:
      if ( (**(_DWORD **)(v9 + 232) & 0x80000) != 0 )
      {
        DirtyRegionVisualizationData = (void *)CVisual::GetDirtyRegionVisualizationData(v9);
        std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::_Tidy(DirtyRegionVisualizationData);
        if ( DirtyRegionVisualizationData )
        {
          std::deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>::~deque<std::tuple<wil::com_ptr_t<CKeyframeAnimation,wil::err_returncode_policy>,wil::com_ptr_t<CColorBrush,wil::err_returncode_policy>,std::vector<MilRectF>>>(DirtyRegionVisualizationData);
          operator delete(DirtyRegionVisualizationData, 0x28uLL);
        }
        CVisual::SetDirtyRegionVisualizationData(v9, 0LL);
      }
    }
LABEL_31:
    if ( *((_BYTE *)this + 176) )
      *a3 = 0;
    goto LABEL_33;
  }
  v14 = *(_QWORD **)(v8 + 1960);
  v15 = *(_QWORD **)(v8 + 1968);
  v16 = (char **)*((_QWORD *)this + 994);
  if ( v14 != v15 )
  {
    while ( 1 )
    {
      if ( v7 == *v14 )
      {
        v27 = (char *)v14[1];
        if ( (((v14[2] - (_QWORD)v27) ^ (v16[1] - *v16)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
          break;
      }
LABEL_16:
      v14 += 8;
      if ( v14 == v15 )
        goto LABEL_17;
    }
    v28 = *v16 - v27;
    while ( &v27[v28] != v16[1] )
    {
      if ( *(_QWORD *)&v27[v28] != *(_QWORD *)v27 || *(_QWORD *)&v27[v28 + 8] != *((_QWORD *)v27 + 1) )
        goto LABEL_16;
      v27 += 16;
    }
    if ( !*((_BYTE *)this + 176) )
    {
      v4 = -2147221184;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v27, 0LL, 0LL, -2147221184, 0x17A9u);
      goto LABEL_33;
    }
  }
LABEL_17:
  v17 = (struct _LIST_ENTRY *)*((_QWORD *)v16[1] - 1);
  if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v17->Flink[11].Blink)(v17) )
  {
    v18 = (struct _LIST_ENTRY *)(v9 + 336);
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v9);
    if ( !TreeDataListHead )
      goto LABEL_22;
    Flink = TreeDataListHead->Flink;
    if ( TreeDataListHead->Flink == TreeDataListHead )
      goto LABEL_22;
    while ( 1 )
    {
      v18 = Flink - 24;
      if ( Flink[2].Flink == v17 )
        break;
      Flink = Flink->Flink;
      if ( Flink == TreeDataListHead )
        goto LABEL_22;
    }
  }
  if ( v18 )
  {
    for ( i = v18[12].Flink; i != v18[12].Blink; i = (struct _LIST_ENTRY *)((char *)i + 8) )
    {
      v30 = *v16;
      v31 = i->Flink[112].Flink;
      if ( (((v16[1] - *v16) ^ ((char *)i->Flink[112].Blink - (char *)v31)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v32 = (char *)v31 - v30;
        while ( &v30[v32] != (char *)i->Flink[112].Blink )
        {
          if ( *(_QWORD *)&v30[v32] != *(_QWORD *)v30 || *(_QWORD *)&v30[v32 + 8] != *((_QWORD *)v30 + 1) )
            goto LABEL_61;
          v30 += 16;
        }
        i->Flink[124].Flink = v18[18].Flink[1].Flink[31].Flink;
        v20 = i->Flink;
        goto LABEL_23;
      }
LABEL_61:
      ;
    }
  }
LABEL_22:
  v20 = 0LL;
LABEL_23:
  if ( v20 != *((struct _LIST_ENTRY **)this + 21) )
    goto LABEL_2;
  v21 = *((_QWORD *)this + 23);
  *a3 = 0;
  if ( v21 )
    *(_BYTE *)(v21 + 176) = 1;
LABEL_33:
  v25 = *((_DWORD *)this + 784);
  if ( v25 )
    *((_DWORD *)this + 784) = v25 - 1;
  return v4;
}
