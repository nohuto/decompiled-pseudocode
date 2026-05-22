/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A0784
 * Callers:
 *     ??$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A0564 (--$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@-$_Tree@V-$_Tmap_tr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x30uLL);
}
