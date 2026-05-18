/*
 * XREFs of ??$_Erase_head@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x1800DAE44
 * Callers:
 *     ??1?$multimap@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800DB020 (--1-$multimap@MV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U-$greater@M@std@@V-$allocator@U-$pair@.c)
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1800DAE74 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@.c)
 */

void __fastcall std::_Tree_val<std::_Tree_simple_types<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
        void **a1,
        __int64 a2)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
    a1,
    a2,
    *((_QWORD *)*a1 + 1));
  std::_Deallocate<16,0>(*a1, 0x30uLL);
}
