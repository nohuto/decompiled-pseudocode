/*
 * XREFs of ??$_Emplace@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEAMAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@Z @ 0x1800DAB48
 * Callers:
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VCommandList@Engine@Spectre@@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18001DB7C (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V-$.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x18001DD7C (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??$_Find_upper_bound@M@?$_Tree@V?$_Tmap_traits@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@$00@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBM@Z @ 0x1800DAEE8 (--$_Find_upper_bound@M@-$_Tree@V-$_Tmap_traits@MV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U-$gre.c)
 *     ??0?$_Tree_temp_node_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x1800DAFB0 (--0-$_Tree_temp_node_alloc@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WR.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800DAFF0 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WRL@Micr.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Tree<std::_Tmap_traits<float,Microsoft::WRL::ComPtr<IDXGIAdapter1>,std::greater<float>,std::allocator<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>,1>>::_Emplace<float &,Microsoft::WRL::ComPtr<IDXGIAdapter1> &>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  __int64 v8; // r15
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 upper; // rax
  __int128 v13; // xmm6
  char v15[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+40h] [rbp-20h]

  v8 = *a1;
  std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
    v15,
    a1);
  v9 = v16;
  *(_DWORD *)(v16 + 32) = *a3;
  v10 = *a4;
  *(_QWORD *)(v9 + 40) = *a4;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  *(_QWORD *)v16 = v8;
  *(_QWORD *)(v16 + 8) = v8;
  *(_QWORD *)(v16 + 16) = v8;
  *(_BYTE *)(v16 + 24) = 0;
  *(_BYTE *)(v16 + 25) = 0;
  v11 = v16;
  upper = std::_Tree<std::_Tmap_traits<float,Microsoft::WRL::ComPtr<IDXGIAdapter1>,std::greater<float>,std::allocator<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>,1>>::_Find_upper_bound<float>(
            a1,
            &v17,
            v16 + 32);
  v13 = *(_OWORD *)upper;
  v18 = *(_QWORD *)(upper + 16);
  if ( a1[1] == 0x555555555555555LL )
    std::_Throw_tree_length_error();
  v16 = 0LL;
  std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(v15);
  v17 = v13;
  *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::CommandList>>>>::_Insert_node(
                    (__int64)a1,
                    (__int64)&v17,
                    v11);
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
