/*
 * XREFs of ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x18005EC88
 * Callers:
 *     ??$?0V?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@?$_Tree@V?$_Tset_traits@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@U?$owner_less@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@V?$allocator@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA@AEBV01@$$QEAV?$allocator@U?$_Tree_node@V?$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@1@@Z @ 0x18005EA50 (--$-0V-$allocator@U-$_Tree_node@V-$weak_ptr@VMaterial@Engine@Spectre@@@std@@PEAX@std@@@std@@@-$_.c)
 *     ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804 (--0ShaderFamily@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@st.c)
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x18002F1D0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 */

_QWORD *std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>()
{
  unsigned __int64 size_of; // rax
  _QWORD *result; // rax

  size_of = std::_Get_size_of_n<48>(1uLL);
  result = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *result = result;
  result[1] = result;
  result[2] = result;
  *((_WORD *)result + 12) = 257;
  return result;
}
