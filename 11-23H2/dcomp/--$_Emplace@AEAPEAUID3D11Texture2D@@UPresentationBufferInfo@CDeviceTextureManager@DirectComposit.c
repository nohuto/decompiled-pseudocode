/*
 * XREFs of ??$_Emplace@AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x1800980EC
 * Callers:
 *     ?EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAUIPresentationBuffer@@@Z @ 0x180098968 (-EnsurePresentationBuffer@CDeviceTextureManager@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEA.c)
 * Callees:
 *     ??$?0AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@1@AEAPEAUID3D11Texture2D@@$$QEAUPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@Z @ 0x18009805C (--$-0AEAPEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@-.c)
 *     ??$_Find_lower_bound@PEAUID3D11Texture2D@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@AEBQEAUID3D11Texture2D@@@Z @ 0x18009832C (--$_Find_lower_bound@PEAUID3D11Texture2D@@@-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresent.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180098524 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@QEAUID3D11Texture2D@@UPresentationBuffer.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ?_Xlength@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ @ 0x18009932C (-_Xlength@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::_Emplace<ID3D11Texture2D * &,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  _QWORD *v5; // r10
  __int64 *v6; // r11
  __int128 v7; // xmm6
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD v11[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v12; // [rsp+50h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::_Find_lower_bound<ID3D11Texture2D *>(
            a1,
            v11);
  v7 = *(_OWORD *)lower;
  v13 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v13 + 25) || *v5 < *(_QWORD *)(v13 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::vector<IUnknown *>::_Xlength();
    v8 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>(
           v11,
           (__int64)a1,
           *a1,
           v5,
           v6);
    v9 = v8[1];
    v8[1] = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>,void *>>>(v11);
    v12 = v7;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      a1,
                      &v12,
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v13;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
