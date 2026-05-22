/*
 * XREFs of ??$?0AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x18009805C
 * Callers:
 *     ??$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x1800980EC (--$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposit.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  *a1 = a2;
  a1[1] = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  a1[1] = v8;
  *(_QWORD *)(v8 + 32) = *a4;
  v9 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(v8 + 40) = v9;
  *(_DWORD *)(v8 + 48) = *((_DWORD *)a5 + 2);
  v10 = 0LL;
  *(_QWORD *)a1[1] = a3;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v10++ + 24) = 0;
  while ( v10 < 2 );
  return a1;
}
