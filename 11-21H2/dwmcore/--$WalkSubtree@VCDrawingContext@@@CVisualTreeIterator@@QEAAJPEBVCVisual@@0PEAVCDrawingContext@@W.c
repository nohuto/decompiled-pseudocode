/*
 * XREFs of ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18009BE70
 * Callers:
 *     ??$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@PEAV2@@Z @ 0x180088180 (--$Walk@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingC.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?BeginWalk@?$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z @ 0x180045CC0 (-BeginWalk@-$CGraphWalker@VCVisual@@@@QEAAJPEAVCVisual@@PEBV2@@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180045E68 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180045EC0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ??0CTreeData@@IEAA@XZ @ 0x18004A6C4 (--0CTreeData@@IEAA@XZ.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18004D2F4 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18008FC84 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009C330 (-PostSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisualTreeIterator::WalkSubtree<CDrawingContext>(
        __int64 a1,
        void *a2,
        const void *a3,
        CDrawingContext *a4,
        int a5)
{
  void *v6; // rbp
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 i; // rsi
  struct _LIST_ENTRY *v13; // rdi
  struct _LIST_ENTRY *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  bool v21; // zf
  char v22; // al
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  int v27; // edx
  __int64 v28; // r8
  __int64 v29; // rdx
  unsigned __int64 *v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r11
  int v33; // edx
  int v34; // eax
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v40; // r10
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v42; // r15d
  int v43; // eax
  __int64 v44; // rcx
  int v45; // ebp
  unsigned __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // r14
  unsigned int v49; // r9d
  __int64 v50; // rbp
  __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r10
  unsigned __int64 *v54; // r11
  unsigned __int64 v55; // rcx
  struct CTreeData *UnusedTreeData; // r11
  _DWORD *v57; // r10
  __int64 v58; // rcx
  unsigned int Slot; // eax
  __int64 v60; // r10
  CTreeData *v61; // rax
  _QWORD *v62; // rcx
  __int64 v63; // rcx
  void *v64; // rdi
  HANDLE ProcessHeap; // rax
  int v66; // edx
  __int64 v67; // rcx
  int v68; // eax
  __int64 v69; // rcx
  void *lpMem[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v71; // [rsp+40h] [rbp-48h]
  bool v72; // [rsp+90h] [rbp+8h] BYREF
  void *v73; // [rsp+98h] [rbp+10h] BYREF
  const void *v74; // [rsp+A0h] [rbp+18h]

  v74 = a3;
  v73 = a2;
  v6 = a2;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0,
    0,
    (__int64)a4);
  *(_DWORD *)(a1 + 72) = a5;
  v9 = CGraphWalker<CVisual>::BeginWalk(a1, (__int64)v6, a3);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xD6u);
    return v11;
  }
  for ( i = *(_QWORD *)(a1 + 8); ; i = v55 )
  {
LABEL_3:
    if ( (*(_BYTE *)(i + 103) & 2) == 0 && (void *)i != v6 )
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
        v40 = TreeDataListHead;
        if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
        {
LABEL_89:
          UnusedTreeData = CVisual::GetUnusedTreeData((CVisual *)i);
          if ( UnusedTreeData )
          {
            v57 = *(_DWORD **)(i + 232);
            if ( (*v57 & 0x8000000) != 0 )
            {
              v58 = *(_QWORD *)(i + 232);
              *v57 &= ~0x8000000u;
              Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v58, 5);
              if ( Slot < *(_DWORD *)(v60 + 4) )
                *(_BYTE *)(Slot + v60 + 8) = 0;
            }
          }
          else
          {
            v61 = (CTreeData *)operator new(0x1A8uLL);
            if ( v61 )
            {
              CTreeData::CTreeData(v61);
              v62[52] = 0LL;
              *v62 = &CVisualTreeData::`vftable';
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
          if ( Flink == v40 )
            goto LABEL_89;
        }
      }
      if ( v14 )
        goto LABEL_8;
      goto LABEL_89;
    }
LABEL_8:
    v15 = CDrawingContext::PreSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), &v72);
    v11 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0xF1u);
      goto LABEL_46;
    }
    if ( !v72 )
      goto LABEL_18;
    v17 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 80LL);
    if ( (v17 & 2) != 0 )
      v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v17) = v17 & 1;
    if ( !(_DWORD)v17 )
    {
      v11 = 1;
      goto LABEL_18;
    }
    v18 = *(unsigned int *)(a1 + 36);
    *(_QWORD *)&v71 = *(_QWORD *)(a1 + 16);
    DWORD2(v71) = *(_DWORD *)(a1 + 24);
    v19 = *(_DWORD *)(a1 + 32);
    lpMem[0] = 0LL;
    if ( v19 != (_DWORD)v18 )
      goto LABEL_14;
    v42 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v45 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024362, 0x64u);
      v11 = -2147024362;
LABEL_108:
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0LL, v45, 0x87u);
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0LL, v11, 0x105u);
      goto LABEL_46;
    }
    if ( v42 <= 0x40 )
      v42 = 64;
    v43 = HrMalloc(0x10uLL, v42, lpMem);
    v45 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, v43, 0x6Bu);
    }
    else
    {
      v46 = 16LL * *(unsigned int *)(a1 + 32);
      if ( v46 <= 0xFFFFFFFF )
      {
        v47 = lpMem[0];
        memcpy_0(lpMem[0], *(const void **)(a1 + 48), (unsigned int)v46);
        DefaultHeap::Free(*(void **)(a1 + 48));
        v19 = *(_DWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 48) = v47;
        *(_DWORD *)(a1 + 36) = v42;
LABEL_14:
        v11 = 0;
        *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16LL * v19) = v71;
        v20 = *(_DWORD *)(a1 + 56);
        if ( v20 <= ++*(_DWORD *)(a1 + 32) )
          v20 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 56) = v20;
        goto LABEL_74;
      }
      v45 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0LL, -2147024362, 0x6Du);
    }
    v64 = lpMem[0];
    if ( lpMem[0] )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v64);
    }
    v11 = v45;
    if ( v45 < 0 )
      goto LABEL_108;
LABEL_74:
    v49 = *(_DWORD *)(a1 + 28) == 1 ? 0 : v17 - 1;
    *(_DWORD *)(a1 + 24) = v49;
    v50 = *(_QWORD *)(a1 + 8);
    v51 = *(_QWORD *)(v50 + 80);
    v52 = v51 & 1;
    v53 = (v51 & 2) != 0 ? *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCuLL) : v51 & 1;
    v54 = (unsigned __int64 *)(v51 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v53 <= v49 )
      goto LABEL_88;
    if ( (v51 & 2) != 0 )
      v52 = *v54;
    if ( v49 >= v52 )
LABEL_88:
      v55 = 0LL;
    else
      v55 = v52 == 1 ? v51 & 0xFFFFFFFFFFFFFFFCuLL : v54[v49 + 2];
    ++*(_DWORD *)(a1 + 4);
    *(_QWORD *)(a1 + 16) = v50;
    *(_QWORD *)(a1 + 8) = v55;
    v6 = v73;
    if ( !v55 )
      break;
  }
  do
  {
LABEL_18:
    v21 = (*(_BYTE *)(i + 103) & 2) == 0;
    v22 = 1;
    LOBYTE(a5) = 1;
    if ( !v21 || (void *)i == v6 )
    {
      v23 = CDrawingContext::PostSubgraph(a4, *(const struct CVisualTree **)(a1 + 64), (bool *)&a5);
      v11 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x122u);
        goto LABEL_46;
      }
      v22 = a5;
    }
    v25 = *(_QWORD *)(a1 + 16);
    if ( v22 )
    {
      if ( !v25 )
        goto LABEL_39;
      v26 = *(_DWORD *)(a1 + 28);
      if ( v26 == 1 )
      {
        v27 = *(_DWORD *)(a1 + 24);
        if ( v27 == -1
          || ((v25 = *(_QWORD *)(v25 + 80), (v25 & 2) == 0)
            ? (LODWORD(v28) = v25 & 1)
            : (v28 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL)),
              v29 = (unsigned int)(v27 + 1),
              (unsigned int)v29 >= (unsigned int)v28) )
        {
LABEL_39:
          v11 = 1;
          goto LABEL_40;
        }
      }
      else
      {
        if ( v26 )
          goto LABEL_39;
        v66 = *(_DWORD *)(a1 + 24);
        if ( !v66 )
          goto LABEL_39;
        v25 = *(_QWORD *)(v25 + 80);
        v29 = (unsigned int)(v66 - 1);
      }
      if ( (v25 & 2) != 0 )
      {
        v30 = (unsigned __int64 *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
        v31 = v25 & 1;
        v32 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      else
      {
        v32 = v25 & 1;
        v31 = v32;
        v30 = (unsigned __int64 *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
      }
      if ( v32 <= (unsigned int)v29 )
        goto LABEL_106;
      if ( (v25 & 2) != 0 )
        v31 = *v30;
      if ( (unsigned int)v29 >= v31 )
      {
LABEL_106:
        v25 = 0LL;
      }
      else if ( v31 == 1 )
      {
        v25 &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        v25 = v30[v29 + 2];
      }
      *(_QWORD *)(a1 + 8) = v25;
      i = v25;
      *(_DWORD *)(a1 + 24) = v29;
      v11 = 0;
      if ( v25 )
        goto LABEL_3;
    }
LABEL_40:
    v33 = *(_DWORD *)(a1 + 4);
    if ( !v33 )
      break;
    v34 = *(_DWORD *)(a1 + 32);
    v25 = 0LL;
    v35 = 0;
    if ( v34 )
    {
      v36 = (unsigned int)(v34 - 1);
      *(_DWORD *)(a1 + 32) = v36;
      *(_OWORD *)lpMem = *(_OWORD *)(*(_QWORD *)(a1 + 48) + 16 * v36);
      v35 = (int)lpMem[1];
      v25 = (__int64)lpMem[0];
    }
    i = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = i;
    *(_QWORD *)(a1 + 16) = v25;
    *(_DWORD *)(a1 + 24) = v35;
    *(_DWORD *)(a1 + 4) = v33 - 1;
  }
  while ( i );
  if ( v11 == 1 )
    v11 = 0;
LABEL_46:
  if ( v74 )
    CThreadContext::UnregisterGraphWalkRoot();
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  v37 = *(_DWORD *)(a1 + 40);
  if ( v37 == 10 )
  {
    v48 = 64LL;
    if ( *(_DWORD *)(a1 + 56) > 0x40u )
      v48 = *(unsigned int *)(a1 + 56);
    if ( (unsigned __int64)(3 * v48) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v48) <= *(_DWORD *)(a1 + 36) )
    {
      v73 = 0LL;
      v68 = HrMalloc(0x10uLL, (unsigned int)v48, &v73);
      if ( v68 >= 0 )
      {
        DefaultHeap::Free(*(void **)(a1 + 48));
        *(_QWORD *)(a1 + 48) = v73;
        *(_DWORD *)(a1 + 36) = v48;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0LL, v68, 0x116u);
      }
    }
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = v37 + 1;
  }
  return v11;
}
