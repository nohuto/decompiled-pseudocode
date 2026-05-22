/*
 * XREFs of ??$_Find_lower_bound@PEAUID3D11Texture2D@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@AEBQEAUID3D11Texture2D@@@Z @ 0x18009832C
 * Callers:
 *     ??$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x1800980EC (--$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposit.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@@2@AEBQEAUID3D11Texture2D@@@Z @ 0x18009933C (-find@-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::_Find_lower_bound<ID3D11Texture2D *>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v4; // rcx
  unsigned __int64 v5; // r8
  int v6; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v4 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v4;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v5 = *a3;
    do
    {
      *(_QWORD *)a2 = v4;
      if ( v4[4] >= v5 )
      {
        *(_QWORD *)(a2 + 16) = v4;
        v6 = 1;
        v4 = (__int64 *)*v4;
      }
      else
      {
        v4 = (__int64 *)v4[2];
        v6 = 0;
      }
      *(_DWORD *)(a2 + 8) = v6;
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  return a2;
}
