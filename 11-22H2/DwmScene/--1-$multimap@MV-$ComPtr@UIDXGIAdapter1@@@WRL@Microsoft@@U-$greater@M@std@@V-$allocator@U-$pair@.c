/*
 * XREFs of ??1?$multimap@MV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@U?$greater@M@std@@V?$allocator@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@@5@@std@@QEAA@XZ @ 0x1800DB020
 * Callers:
 *     _CDXDeviceFactory::CreateDeviceResources_::_1_::dtor$0 @ 0x1800F1C56 (_CDXDeviceFactory--CreateDeviceResources_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::multimap<float,Microsoft::WRL::ComPtr<IDXGIAdapter1>,std::greater<float>,std::allocator<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>>::~multimap<float,Microsoft::WRL::ComPtr<IDXGIAdapter1>,std::greater<float>,std::allocator<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>>(
        void **a1)
{
  std::_Tree_val<std::_Tree_simple_types<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>>>::_Erase_head<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>(
    a1,
    (__int64)a1);
}
