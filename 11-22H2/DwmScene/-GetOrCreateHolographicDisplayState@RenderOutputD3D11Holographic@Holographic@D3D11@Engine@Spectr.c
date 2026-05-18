/*
 * XREFs of ?GetOrCreateHolographicDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAAEAV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@I@Z @ 0x1800D969C
 * Callers:
 *     ?UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_NXZ @ 0x1800D9920 (-UpdateHolographicDisplays@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAA_N.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@I@?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@PEAX@std@@@1@AEBI@Z @ 0x1800C884C (--$_Find_lower_bound@I@-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800D8A6C (--$_Try_emplace@AEBI$$V@-$map@IV-$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@S.c)
 *     ??$make_shared@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@0@XZ @ 0x1800D8B64 (--$make_shared@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@$$V@std@@YA-AV-$shared.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::Holographic::RenderOutputD3D11Holographic::GetOrCreateHolographicDisplayState(
        __int64 a1,
        unsigned int a2)
{
  __int64 *v2; // rdi
  unsigned int v3; // r10d
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-30h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]
  unsigned int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v2 = (__int64 *)(a1 + 552);
  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)(a1 + 552),
    (__int64)v12,
    &v14);
  if ( !*(_BYTE *)(v13 + 25) && v3 >= *(_DWORD *)(v13 + 32) && v13 != *v2 )
    return v13 + 40;
  v5 = std::make_shared<Spectre::Engine::D3D11::Holographic::HolographicDisplayState,>(&v10);
  v6 = *(_QWORD *)std::map<unsigned int,std::shared_ptr<Spectre::Engine::D3D11::Holographic::HolographicDisplayState>>::_Try_emplace<unsigned int const &,>(
                    v2,
                    (__int64)v12,
                    &v14);
  v7 = *v5;
  v8 = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  *(_QWORD *)(v6 + 40) = v7;
  v9 = *(std::_Ref_count_base **)(v6 + 48);
  *(_QWORD *)(v6 + 48) = v8;
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v6 + 40;
}
