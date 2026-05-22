/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@std@@@std@@@2@AEBQEAUID3D11Texture2D@@@Z @ 0x18009933C
 * Callers:
 *     ?EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAUIPresentationBuffer@@@Z @ 0x180098968 (-EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEA.c)
 *     ?NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@@Z @ 0x180098C48 (-NotifyTextureDestroyed@CDeviceTextureManager@DirectComposition@@QEAAXPEAVCCompositionTexture@2@.c)
 * Callees:
 *     ??$_Find_lower_bound@PEAUID3D11Texture2D@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@AEBQEAUID3D11Texture2D@@@Z @ 0x18009832C (--$_Find_lower_bound@PEAUID3D11Texture2D@@@-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresent.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::find(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 *v5; // r11
  __int64 v6; // r10
  __int64 *result; // rax
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::_Find_lower_bound<ID3D11Texture2D *>(
    a1,
    (__int64)v8,
    a3);
  v6 = v9;
  if ( *(_BYTE *)(v9 + 25) || *a3 < *(_QWORD *)(v9 + 32) )
    v6 = *a1;
  result = v5;
  *v5 = v6;
  return result;
}
