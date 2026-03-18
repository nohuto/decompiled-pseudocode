/*
 * XREFs of ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800647F0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x180063EB4 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180045F54 (-SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z.c)
 *     ?GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ @ 0x18004962C (-GetUnusedTreeData@CVisual@@QEBAPEAVCTreeData@@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800D3590 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x1800E2390 (--_ECVisualTreeData@@UEAAPEAXI@Z.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x1801940B8 (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ??$_Find@PEBVCVisualTree@@@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@PEAX@1@AEBQEBVCVisualTree@@@Z @ 0x180201004 (--$_Find@PEBVCVisualTree@@@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProject.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEBVCVisualTree@@@Z @ 0x180202394 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$l.c)
 */

void __fastcall CVisualTree::ReleaseTreeDatas(CVisualTree *this)
{
  _QWORD *v1; // r14
  _QWORD *v2; // rbx
  CVisual *v3; // rsi
  CTreeData *v4; // rbx
  __int64 ProjectedShadowCasters; // rax
  __int64 *v6; // rbp
  __int64 *i; // rdi
  __int64 v8; // r15
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = (_QWORD *)((char *)this + 4680);
  while ( 1 )
  {
    v2 = (_QWORD *)*v1;
    if ( (_QWORD *)*v1 == v1 )
      break;
    v3 = (CVisual *)*(v2 - 14);
    v4 = (CTreeData *)(v2 - 50);
    if ( (**((_DWORD **)v3 + 29) & 0x40000) != 0 )
    {
      ProjectedShadowCasters = CVisual::GetProjectedShadowCasters(v3);
      v6 = *(__int64 **)(ProjectedShadowCasters + 8);
      for ( i = *(__int64 **)ProjectedShadowCasters; i != v6; ++i )
      {
        v8 = *i;
        v9 = *((_QWORD *)v4 + 52);
        if ( std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::_Find<CVisualTree const *>(
               v8 + 80,
               &v9) != *(_QWORD *)(v8 + 80) )
          std::_Tree<std::_Tmap_traits<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData,std::less<CVisualTree const *>,std::allocator<std::pair<CVisualTree const * const,CProjectedShadowCaster::VisualPropertyData>>,0>>::erase(
            v8 + 80,
            &v9);
      }
    }
    CTreeData::Clear(v4);
    *((_QWORD *)v4 + 52) = 0LL;
    if ( CVisual::GetUnusedTreeData(v3) )
      CVisualTreeData::`vector deleting destructor'(v4, 1u);
    else
      CVisual::SetUnusedTreeData(v3, v4);
  }
}
