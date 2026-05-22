/*
 * XREFs of ??$_Emplace@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@_N@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A0564
 * Callers:
 *     ?EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceTextureManager@2@@Z @ 0x1800A0AAC (-EnsureDeviceTextureManager@CDevice@DirectComposition@@AEAAJPEAUID3D11Texture2D@@PEAPEAVCDeviceT.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@QEAUICompositor@Composition@UI@Windows@@V?$ComPtr@VCompositionDebugSettings@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18009912C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUICompositor@Composition@UI@Windows@@.c)
 *     ?_Xlength@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ @ 0x18009932C (-_Xlength@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@std@@CAXXZ.c)
 *     ??$?0PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@1@$$QEAPEAUID3D11Device5@@$$QEAPEAVCDeviceTextureManager@DirectComposition@@@Z @ 0x1800A04DC (--$-0PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@-$_Tree_temp_node@V-$alloc.c)
 *     ??$_Find_lower_bound@PEAUID3D11Device5@@@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@1@AEBQEAUID3D11Device5@@@Z @ 0x1800A0640 (--$_Find_lower_bound@PEAUID3D11Device5@@@-$_Tree@V-$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceT.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A0784 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@QEAUID3D11Device5@@PEAVCDeviceTextu.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::_Emplace<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>(
        __int64 *a1,
        __int64 a2)
{
  __int64 lower; // rax
  const char *v5; // rcx
  _QWORD *v6; // r10
  _QWORD *v7; // r11
  __int128 v8; // xmm6
  _QWORD *v9; // rax
  __int64 v10; // rbx
  _QWORD v12[4]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+60h] [rbp-28h]

  lower = std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::_Find_lower_bound<ID3D11Device5 *>(
            a1,
            v12);
  v8 = *(_OWORD *)lower;
  v14 = *(_QWORD *)(lower + 16);
  if ( *(_BYTE *)(v14 + 25) || *v6 < *(_QWORD *)(v14 + 32) )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::vector<IUnknown *>::_Xlength(v5);
    v9 = std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>(
           v12,
           (__int64)a1,
           *a1,
           v6,
           v7);
    v10 = v9[1];
    v9[1] = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>,void *>>>(v12);
    v13 = v8;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<Windows::UI::Composition::ICompositor * const,Microsoft::WRL::ComPtr<Windows::UI::Composition::Diagnostics::CompositionDebugSettings>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v13,
                      v10);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v14;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
