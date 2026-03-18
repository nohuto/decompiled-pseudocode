/*
 * XREFs of ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18009C700
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x18008BD78 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180062474 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009CC10 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009DEF0 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<COcclusionContext>(
        __int64 a1,
        char *a2,
        const void *a3,
        COcclusionContext *a4,
        bool a5)
{
  char *v6; // rbp
  int v9; // eax
  char *v10; // rcx
  unsigned int v11; // edi
  char *i; // rsi
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *v14; // rax
  int v15; // eax
  __int64 v16; // r14
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  bool v20; // zf
  bool v21; // al
  int v22; // eax
  __int64 v23; // rdx
  int v24; // eax
  int v25; // eax
  __int64 v26; // r8
  __int64 v27; // rax
  void **v28; // rdx
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rax
  int v31; // edx
  int v32; // eax
  int v33; // r8d
  __int64 v34; // rcx
  int v35; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v38; // r10
  struct _LIST_ENTRY *Flink; // rcx
  struct CTreeData *UnusedTreeData; // r11
  CTreeData *v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // r14
  unsigned int v44; // r15d
  int v45; // eax
  __int64 v46; // rcx
  int v47; // ebp
  unsigned __int64 v48; // rax
  void *v49; // rdi
  unsigned int v50; // r9d
  __int64 v51; // rbp
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r10
  unsigned __int64 *v55; // r11
  _DWORD *v56; // r10
  __int64 v57; // rcx
  unsigned int Slot; // eax
  __int64 v59; // r10
  __int64 v60; // rcx
  void *v61; // rdi
  HANDLE ProcessHeap; // rax
  unsigned int Count; // eax
  __int64 v64; // rcx
  int v65; // eax
  __int64 v66; // rcx
  void *lpMem[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v68; // [rsp+40h] [rbp-48h]
  bool v69; // [rsp+90h] [rbp+8h] BYREF
  void *v70; // [rsp+98h] [rbp+10h] BYREF
  const void *v71; // [rsp+A0h] [rbp+18h]

  v71 = a3;
  v70 = a2;
  v6 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0,
    (__int64)a4);
  *(_DWORD *)(a1 + 72) = 2;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, (__int64)v6, a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, v9, 0xD6u);
    return v11;
  }
  for ( i = *(char **)(a1 + 8); ; i = v10 )
  {
LABEL_3:
    if ( (i[103] & 2) == 0 && i != v6 )
      goto LABEL_18;
    v13 = *(struct _LIST_ENTRY **)(a1 + 64);
    if ( v13 )
    {
      if ( ((unsigned __int8 (__fastcall *)(_QWORD))v13->Flink[11].Blink)(*(_QWORD *)(a1 + 64)) )
      {
        v14 = (struct _LIST_ENTRY *)(i + 336);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)i);
        v38 = TreeDataListHead;
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_58:
          UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
          if ( UnusedTreeData )
          {
            v56 = (_DWORD *)*((_QWORD *)i + 29);
            if ( (*v56 & 0x8000000) != 0 )
            {
              v57 = *((_QWORD *)i + 29);
              *v56 &= ~0x8000000u;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v57, 5);
              if ( Slot < *(_DWORD *)(v59 + 4) )
                *(_BYTE *)(Slot + v59 + 8) = 0;
            }
          }
          else
          {
            v41 = (CTreeData *)operator new(0x1A8uLL);
            if ( v41 )
            {
              CTreeData::CTreeData(v41);
              *v42 = &CVisualTreeData::`vftable';
              v42[52] = 0LL;
            }
            else
            {
              UnusedTreeData = 0LL;
            }
          }
          (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, char *))(*(_QWORD *)UnusedTreeData + 8LL))(
            UnusedTreeData,
            v13,
            i);
          goto LABEL_8;
        }
        while ( 1 )
        {
          v14 = Flink - 24;
          if ( Flink[2].Flink == v13 )
            break;
          Flink = Flink->Flink;
          if ( Flink == v38 )
            goto LABEL_58;
        }
      }
      if ( v14 )
        goto LABEL_8;
      goto LABEL_58;
    }
LABEL_8:
    v15 = COcclusionContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v69);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, v15, 0xF1u);
      goto LABEL_44;
    }
    if ( !v69 )
      goto LABEL_18;
    v16 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
    if ( (v16 & 2) != 0 )
      v16 = *(_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v16) = v16 & 1;
    if ( !(_DWORD)v16 )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v17 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v68 = *(_QWORD *)(a1 + 16);
    DWORD2(v68) = *(_DWORD *)(a1 + 24);
    v18 = *(_DWORD *)(a1 + 32);
    lpMem[0] = 0LL;
    if ( v18 != (_DWORD)v17 )
      goto LABEL_14;
    v44 = 2 * v17;
    if ( (unsigned __int64)(2 * v17) > 0xFFFFFFFF )
    {
      v47 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2147024362, 0x64u);
      v11 = -2147024362;
LABEL_105:
      MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0LL, v47, 0x87u);
      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0LL, v11, 0x105u);
      goto LABEL_44;
    }
    if ( v44 <= 0x40 )
      v44 = 64;
    v45 = HrMalloc(0x10uLL, v44, lpMem);
    v47 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, v45, 0x6Bu);
    }
    else
    {
      v48 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v48 <= 0xFFFFFFFF )
      {
        v49 = lpMem[0];
        memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v48);
        DefaultHeap::Free(*(void **)(a1 + 48));
        v18 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v49;
        *(_DWORD *)(a1 + 36) = v44;
LABEL_14:
        v11 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v18) = v68;
        v19 = *(_DWORD *)(a1 + 56);
        if ( v19 <= ++*(_DWORD *)(a1 + 32) )
          v19 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v19;
        goto LABEL_74;
      }
      v47 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0LL, -2147024362, 0x6Du);
    }
    v61 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v61);
    }
    v11 = v47;
    if ( v47 < 0 )
      goto LABEL_105;
LABEL_74:
    v50 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v16 - 1;
    *(_DWORD *)(a1 + 24) = v50;
    v51 = *(_QWORD *)(a1 + 8);
    v52 = *(_QWORD *)(v51 + 80);
    v53 = v52 & 1;
    v54 = (v52 & 2) != 0 ? *(_QWORD *)(v52 & 0xFFFFFFFFFFFFFFFCuLL) : v52 & 1;
    v55 = (unsigned __int64 *)(v52 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v54 <= v50 )
      goto LABEL_89;
    if ( (v52 & 2) != 0 )
      v53 = *v55;
    if ( v50 >= v53 )
LABEL_89:
      v10 = 0LL;
    else
      v10 = (char *)(v53 == 1 ? v52 & 0xFFFFFFFFFFFFFFFCuLL : v55[v50 + 2]);
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v51;
    *(_QWORD *)(a1 + 8) = v10;
    v6 = (char *)v70;
    if ( !v10 )
      break;
  }
  do
  {
LABEL_18:
    v20 = (i[103] & 2) == 0;
    v21 = 1;
    a5 = 1;
    if ( !v20 || i == v6 )
    {
      v22 = COcclusionContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &a5);
      v11 = v22;
      if ( v22 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, v22, 0x122u);
        goto LABEL_44;
      }
      v21 = a5;
    }
    v23 = *(_QWORD *)(a1 + 16);
    if ( v21 )
    {
      if ( !v23 )
        goto LABEL_37;
      v24 = *(_DWORD *)(a1 + 28);
      if ( v24 == 1 )
      {
        if ( *(_DWORD *)(a1 + 24) == -1
          || (Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v23 + 80)), (unsigned int)v26 >= Count) )
        {
LABEL_37:
          v11 = 1;
          goto LABEL_38;
        }
      }
      else
      {
        if ( v24 )
          goto LABEL_37;
        v25 = *(_DWORD *)(a1 + 24);
        if ( !v25 )
          goto LABEL_37;
        v26 = (unsigned int)(v25 - 1);
      }
      v27 = *(_QWORD *)(v23 + 80);
      if ( (v27 & 2) != 0 )
      {
        v28 = (void **)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
        v10 = (char *)(v27 & 1);
        v29 = *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v29 = v27 & 1;
        v10 = (char *)v29;
        v28 = (void **)(v27 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      if ( v29 <= (unsigned int)v26 )
        goto LABEL_103;
      if ( (v27 & 2) != 0 )
        v10 = (char *)*v28;
      if ( (unsigned int)v26 >= (unsigned __int64)v10 )
      {
LABEL_103:
        v30 = 0LL;
      }
      else if ( v10 == (char *)1 )
      {
        v30 = v27 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v30 = (unsigned __int64)v28[v26 + 2];
      }
      *(_QWORD *)(a1 + 8) = v30;
      i = (char *)v30;
      *(_DWORD *)(a1 + 24) = v26;
      v11 = 0;
      if ( v30 )
        goto LABEL_3;
    }
LABEL_38:
    v31 = *(_DWORD *)(a1 + 4);
    if ( !v31 )
      break;
    v32 = *(_DWORD *)(a1 + 32);
    v10 = 0LL;
    v33 = 0;
    if ( v32 )
    {
      v34 = (unsigned int)(v32 - 1);
      *(_DWORD *)(a1 + 32) = v34;
      *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v34);
      v33 = (int)lpMem[1];
      v10 = (char *)lpMem[0];
    }
    i = *(char **)(a1 + 16);
    *(_QWORD *)(a1 + 8) = i;
    *(_QWORD *)(a1 + 16) = v10;
    *(_DWORD *)(a1 + 24) = v33;
    *(_DWORD *)(a1 + 4) = v31 - 1;
  }
  while ( i );
  if ( v11 == 1 )
    v11 = 0;
LABEL_44:
  if ( v71 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v35 = *(_DWORD *)(a1 + 40);
  if ( v35 == 10 )
  {
    v43 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v43 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v43) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v10, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v43) <= *(_DWORD *)(a1 + 36) )
    {
      v70 = 0LL;
      v65 = HrMalloc(0x10uLL, (unsigned int)v43, &v70);
      if ( v65 >= 0 )
      {
        DefaultHeap::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v70;
        *(_DWORD *)(a1 + 36) = v43;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0LL, v65, 0x116u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v35 + 1;
  }
  return v11;
}
