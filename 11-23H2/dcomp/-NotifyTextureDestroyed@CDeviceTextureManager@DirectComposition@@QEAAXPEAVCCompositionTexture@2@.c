/*
 * XREFs of ?NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@@Z @ 0x180098C48
 * Callers:
 *     ??1CCompositionTexture@DirectComposition@@EEAA@XZ @ 0x18009FCA4 (--1CCompositionTexture@DirectComposition@@EEAA@XZ.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009837C (--$_Freenode@V-$allocator@U-$_Tree_node@U-$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDe.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180098E84 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@@2@AEBQEAUID3D11Texture2D@@@Z @ 0x18009933C (-find@-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 */

void __fastcall DirectComposition::CDeviceTextureManager::NotifyTextureDestroyed(
        DirectComposition::CDeviceTextureManager *this,
        struct DirectComposition::CCompositionTexture *a2)
{
  char *v5; // rax
  __int64 v6; // rcx
  struct DirectComposition::CCompositionTexture **i; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v8 = *((_QWORD *)a2 + 6);
  std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::find(
    (char *)this + 64,
    &v9,
    &v8);
  if ( (*(_DWORD *)(v9 + 48))-- == 1 )
  {
    v5 = (char *)std::_Tree_val<std::_Tree_simple_types<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>>::_Extract((char *)this + 64);
    std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>::_Freenode<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>(
      v6,
      v5);
  }
  for ( i = (struct DirectComposition::CCompositionTexture **)*((_QWORD *)this + 10);
        i != *((struct DirectComposition::CCompositionTexture ***)this + 11) && *i != a2;
        ++i )
  {
    ;
  }
  memmove_0(i, i + 1, *((_QWORD *)this + 11) - (_QWORD)(i + 1));
  *((_QWORD *)this + 11) -= 8LL;
}
