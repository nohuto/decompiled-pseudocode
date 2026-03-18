/*
 * XREFs of ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x18008FDF0
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800CF85C (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?EndWalk@?$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z @ 0x180045DE8 (-EndWalk@-$CGraphWalker@VCVisual@@@@QEAAXPEBVCVisual@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180091060 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CPreComputeContext>(
        __int64 a1,
        __int64 a2,
        const void *a3,
        CPreComputeContext *a4,
        bool a5)
{
  __int64 v6; // rbp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 i; // rsi
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  bool v17; // al
  __int64 v18; // rcx
  int v19; // eax
  int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  unsigned __int64 *v24; // r8
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rcx
  int v28; // edx
  int v29; // eax
  void *v30; // rcx
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v34; // r14
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int v37; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v39; // r10
  struct CTreeData *UnusedTreeData; // r11
  CTreeData *v41; // rax
  _QWORD *v42; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  _DWORD *v44; // r10
  __int64 v45; // rcx
  unsigned int Slot; // eax
  __int64 v47; // r10
  unsigned int v48; // r9d
  __int64 v49; // rbp
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r10
  unsigned __int64 *v53; // r11
  unsigned __int64 v54; // rcx
  unsigned int v55; // r15d
  int v56; // eax
  __int64 v57; // rcx
  int v58; // ebp
  unsigned __int64 v59; // rax
  void *v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // rcx
  void *v63; // rdi
  HANDLE ProcessHeap; // rax
  int v65; // edx
  unsigned int v66; // [rsp+20h] [rbp-68h]
  void *lpMem[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v68; // [rsp+40h] [rbp-48h]
  bool v69; // [rsp+90h] [rbp+8h] BYREF
  __int64 v70; // [rsp+98h] [rbp+10h]
  __int64 v71; // [rsp+A0h] [rbp+18h]

  v71 = (__int64)a3;
  v70 = a2;
  v6 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0,
    (__int64)a4);
  *(_DWORD *)(a1 + 72) = 1;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, v6, a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xD6u);
    return v11;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v54 )
  {
LABEL_3:
    if ( (*(_BYTE *)(i + 103) & 2) == 0 && i != v6 )
      goto LABEL_10;
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
        v39 = TreeDataListHead;
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_51:
          UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
          if ( UnusedTreeData )
          {
            v44 = *(_DWORD **)(i + 232);
            if ( (*v44 & 0x8000000) != 0 )
            {
              v45 = *(_QWORD *)(i + 232);
              *v44 &= ~0x8000000u;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v45, 5);
              if ( Slot < *(_DWORD *)(v47 + 4) )
                *(_BYTE *)(Slot + v47 + 8) = 0;
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
          (*(void (__fastcall **)(struct CTreeData *, struct _LIST_ENTRY *, unsigned __int64))(*(_QWORD *)UnusedTreeData
                                                                                             + 8LL))(
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
          if ( Flink == v39 )
            goto LABEL_51;
        }
      }
      if ( v14 )
        goto LABEL_8;
      goto LABEL_51;
    }
LABEL_8:
    v15 = CPreComputeContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v69);
    v11 = v15;
    if ( v15 < 0 )
      break;
    if ( !v69 )
      goto LABEL_10;
    v34 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
    if ( (v34 & 2) != 0 )
      v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v34) = v34 & 1;
    if ( !(_DWORD)v34 )
    {
      v11 = 1;
      goto LABEL_10;
    }
    v35 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v68 = *(_QWORD *)(a1 + 16);
    DWORD2(v68) = *(_DWORD *)(a1 + 24);
    v36 = *(_DWORD *)(a1 + 32);
    lpMem[0] = 0LL;
    if ( v36 != (_DWORD)v35 )
      goto LABEL_44;
    v55 = 2 * v35;
    if ( (unsigned __int64)(2 * v35) > 0xFFFFFFFF )
    {
      v58 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0LL, -2147024362, 0x64u);
      v11 = -2147024362;
LABEL_89:
      MilInstrumentationCheckHR_MaybeFailFast(v61, 0LL, 0LL, v58, 0x87u);
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0LL, v11, 0x105u);
      goto LABEL_38;
    }
    if ( v55 <= 0x40 )
      v55 = 64;
    v56 = HrMalloc(0x10uLL, v55, lpMem);
    v58 = v56;
    if ( v56 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v56, 0x6Bu);
    }
    else
    {
      v59 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v59 <= 0xFFFFFFFF )
      {
        v60 = lpMem[0];
        memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v59);
        DefaultHeap::Free(*(void **)(a1 + 48));
        v36 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v60;
        *(_DWORD *)(a1 + 36) = v55;
LABEL_44:
        v11 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v36) = v68;
        v37 = *(_DWORD *)(a1 + 56);
        if ( v37 <= ++*(_DWORD *)(a1 + 32) )
          v37 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v37;
        goto LABEL_67;
      }
      v58 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, -2147024362, 0x6Du);
    }
    v63 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v63);
    }
    v11 = v58;
    if ( v58 < 0 )
      goto LABEL_89;
LABEL_67:
    if ( *(_DWORD *)(a1 + 28) == 1 )
      v48 = 0;
    else
      v48 = v34 - 1;
    *(_DWORD *)(a1 + 24) = v48;
    v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(v49 + 80);
    v51 = v50 & 1;
    if ( (v50 & 2) != 0 )
      v52 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v52 = v50 & 1;
    v53 = (unsigned __int64 *)(v50 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v52 <= v48 )
      goto LABEL_95;
    if ( (v50 & 2) != 0 )
      v51 = *v53;
    if ( v48 >= v51 )
    {
LABEL_95:
      v54 = 0LL;
    }
    else if ( v51 == 1 )
    {
      v54 = v50 & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v54 = v53[v48 + 2];
    }
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v49;
    *(_QWORD *)(a1 + 8) = v54;
    v6 = v70;
    if ( !v54 )
    {
      while ( 1 )
      {
LABEL_10:
        v17 = 1;
        a5 = 1;
        if ( (*(_BYTE *)(i + 103) & 2) != 0 || i == v6 )
        {
          v15 = CPreComputeContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &a5);
          v11 = v15;
          if ( v15 < 0 )
          {
            v66 = 290;
            goto LABEL_103;
          }
          v17 = a5;
        }
        v18 = *(_QWORD *)(a1 + 16);
        if ( !v17 )
          goto LABEL_32;
        if ( v18 )
        {
          v19 = *(_DWORD *)(a1 + 28);
          if ( v19 == 1 )
          {
            v20 = *(_DWORD *)(a1 + 24);
            if ( v20 != -1 )
            {
              v21 = *(_QWORD *)(v18 + 80);
              if ( (v21 & 2) != 0 )
                v22 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              else
                LODWORD(v22) = v21 & 1;
              v23 = (unsigned int)(v20 + 1);
              if ( (unsigned int)v23 < (unsigned int)v22 )
                goto LABEL_20;
            }
          }
          else if ( !v19 )
          {
            v65 = *(_DWORD *)(a1 + 24);
            if ( v65 )
            {
              v21 = *(_QWORD *)(v18 + 80);
              v23 = (unsigned int)(v65 - 1);
LABEL_20:
              if ( (v21 & 2) != 0 )
              {
                v24 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
                v25 = v21 & 1;
                v26 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              else
              {
                v26 = v21 & 1;
                v25 = v26;
                v24 = (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
              }
              if ( v26 <= (unsigned int)v23 )
                goto LABEL_100;
              if ( (v21 & 2) != 0 )
                v25 = *v24;
              if ( (unsigned int)v23 >= v25 )
              {
LABEL_100:
                v27 = 0LL;
              }
              else if ( v25 == 1 )
              {
                v27 = v21 & 0xFFFFFFFFFFFFFFFCuLL;
              }
              else
              {
                v27 = v24[v23 + 2];
              }
              *(_QWORD *)(a1 + 8) = v27;
              i = v27;
              *(_DWORD *)(a1 + 24) = v23;
              v11 = 0;
              if ( v27 )
                goto LABEL_3;
              goto LABEL_32;
            }
          }
        }
        v11 = 1;
LABEL_32:
        v28 = *(_DWORD *)(a1 + 4);
        if ( v28 )
        {
          v29 = *(_DWORD *)(a1 + 32);
          v30 = 0LL;
          v31 = 0;
          if ( v29 )
          {
            v32 = (unsigned int)(v29 - 1);
            *(_DWORD *)(a1 + 32) = v32;
            *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v32);
            v31 = (int)lpMem[1];
            v30 = lpMem[0];
          }
          i = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 8) = i;
          *(_QWORD *)(a1 + 16) = v30;
          *(_DWORD *)(a1 + 24) = v31;
          *(_DWORD *)(a1 + 4) = v28 - 1;
          if ( i )
            continue;
        }
        if ( v11 == 1 )
          v11 = 0;
        goto LABEL_38;
      }
    }
  }
  v66 = 241;
LABEL_103:
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, v66);
LABEL_38:
  CGraphWalker<CVisual>::EndWalk(a1, v71);
  return v11;
}
