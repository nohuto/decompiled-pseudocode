/*
 * XREFs of ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800ABE54
 * Callers:
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x18000A410 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063E50 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800AAB24 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800C178C (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180213BE8 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180042214 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180042C70 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180043C4C (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x180043CAC (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVisual::EnsureWorldTransform(CVisual *this, const struct CVisualTree *a2, struct CTreeData *a3)
{
  __int64 **TreeData; // rbx
  char v4; // r15
  _DWORD *v8; // r9
  struct _LIST_ENTRY **p_Blink; // rdx
  CVisual *v10; // rbp
  unsigned __int64 CurrentFrameId; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v14; // r10
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *j; // rcx
  __int64 v17; // rcx
  _BYTE *v18; // rdx
  unsigned int i; // eax
  _QWORD **v20; // rcx
  _QWORD *v21; // rcx

  TreeData = 0LL;
  v4 = 0;
  if ( this == *((CVisual **)a2 + 8) )
    goto LABEL_34;
  v8 = (_DWORD *)*((_QWORD *)this + 29);
  if ( (*v8 & 0x1000000) != 0 )
  {
    v17 = (unsigned int)v8[1];
    v18 = v8 + 2;
    for ( i = 0; i < (unsigned int)v17; ++v18 )
    {
      if ( *v18 == 8 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v17 )
      v20 = 0LL;
    else
      v20 = (_QWORD **)((char *)v8 + v17 + 8LL * i - (((_BYTE)v17 + 15) & 7) + 15);
    v21 = *v20;
    if ( v21 )
      TreeData = (__int64 **)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v21 + 184LL))(*v21);
  }
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    p_Blink = (struct _LIST_ENTRY **)((char *)this + 336);
LABEL_5:
    if ( p_Blink && p_Blink[32] != p_Blink[33][1].Flink[31].Flink && TreeData )
    {
      TreeData = CVisual::FindTreeData((CVisual *)TreeData, a2);
      v4 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(this);
    v14 = TreeDataListHead;
    if ( TreeDataListHead )
    {
      while ( 1 )
      {
        TreeDataListHead = TreeDataListHead->Flink;
        if ( TreeDataListHead == v14 )
          break;
        p_Blink = &TreeDataListHead[-23].Blink;
        if ( (const struct CVisualTree *)TreeDataListHead[2].Flink == a2 )
          goto LABEL_5;
      }
    }
  }
  v10 = (CVisual *)*((_QWORD *)this + 11);
  TreeData = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    TreeData = (__int64 **)((char *)v10 + 336);
  }
  else
  {
    v15 = CVisual::GetTreeDataListHead(v10);
    if ( v15 )
    {
      for ( j = v15->Flink; j != v15; j = j->Flink )
      {
        if ( (const struct CVisualTree *)j[2].Flink == a2 )
        {
          TreeData = (__int64 **)&j[-23].Blink;
          break;
        }
      }
    }
  }
LABEL_10:
  if ( TreeData )
  {
    CurrentFrameId = (unsigned __int64)TreeData[31];
    goto LABEL_12;
  }
LABEL_34:
  CurrentFrameId = GetCurrentFrameId();
LABEL_12:
  if ( *((_QWORD *)a3 + 31) < CurrentFrameId )
    CVisual::UpdateWorldTransform(this, a2, a3, v4, (const struct CTreeData *)TreeData);
  return *((_QWORD *)a3 + 31) == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 33) + 16LL) + 496LL);
}
