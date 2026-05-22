/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800984D0
 * Callers:
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180098524 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUID3D11Texture2D@@UPresentationBuffer.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16,0>(v1, 0x38uLL);
}
