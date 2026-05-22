/*
 * XREFs of ??$?0PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A04DC
 * Callers:
 *     ??$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A0564 (--$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@-$_Tree@V-$_Tmap_tr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  a1[1] = v8;
  *(_QWORD *)(v8 + 32) = *a4;
  *(_QWORD *)(v8 + 40) = *a5;
  v9 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
  {
    *(_BYTE *)(v9 + a1[1] + 24) = 0;
    ++v9;
  }
  while ( v9 < 2 );
  return a1;
}
