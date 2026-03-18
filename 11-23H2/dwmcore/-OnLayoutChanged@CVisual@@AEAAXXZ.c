/*
 * XREFs of ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18007F4D4
 * Callers:
 *     ?UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z @ 0x180042480 (-UpdateTransformChildBounds@CPreWalkVisual@CPreComputeContext@@QEAAXPEBVCVisualTree@@@Z.c)
 *     ?CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z @ 0x180042ED0 (-CalcTransform@CPreWalkVisual@CPreComputeContext@@IEAAXPEBVCVisualTree@@_K@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063E50 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180004D18 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180004EB0 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ @ 0x18000976C (-InvalidateMaskContent@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18000986C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180080010 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 */

void __fastcall CVisual::OnLayoutChanged(CVisual *this)
{
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v3; // rsi
  CProjectedShadowCaster **i; // rbx
  __int64 ProjectedShadowReceivers; // rax
  CProjectedShadowReceiver **v6; // rdi
  CProjectedShadowReceiver **j; // rbx

  CVisual::ClearContentTreeDataCaches(this);
  if ( (**((_DWORD **)this + 29) & 0x40000) != 0 )
  {
    ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)this);
    v3 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
    for ( i = *(CProjectedShadowCaster ***)ProjectedShadowCasters; i != v3; ++i )
      CProjectedShadowCaster::InvalidateMaskContent(*i);
  }
  if ( (**((_DWORD **)this + 29) & 0x20000) != 0 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)this);
    v6 = *(CProjectedShadowReceiver ***)(ProjectedShadowReceivers + 8);
    for ( j = *(CProjectedShadowReceiver ***)ProjectedShadowReceivers; j != v6; ++j )
      CProjectedShadowReceiver::InvalidateMaskContent(*j);
  }
}
