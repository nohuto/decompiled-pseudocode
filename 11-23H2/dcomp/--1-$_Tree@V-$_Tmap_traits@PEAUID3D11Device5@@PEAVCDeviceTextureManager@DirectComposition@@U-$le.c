/*
 * XREFs of ??1?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18009A660
 * Callers:
 *     ??1?$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@@std@@QEAA@XZ @ 0x18009A690 (--1-$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U-$less@PEAUID3D11Devic.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@1@@Z @ 0x18009A5C4 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CB_KPEAVCPresentationSurface@@@std@@PEAX@std.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::~_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,CPresentationSurface *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,CPresentationSurface *>,void *>>>(
    (__int64)a1,
    (__int64)a1,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
