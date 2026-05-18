/*
 * XREFs of ??$spectre_safe_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9AC
 * Callers:
 *     ?ClearDepthStencil@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@_N1ME@Z @ 0x1800CFBF0 (-ClearDepthStencil@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VDepthBuffer@Eng.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$static_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA?AV?$shared_ptr@VDepthBufferD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceDepthBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA04 (--$static_pointer_cast@VDepthBufferD3D11@D3D11@Engine@Spectre@@VDeviceDepthBuffer@34@@std@@YA-AV.c)
 */

__int64 __fastcall Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::DepthBufferD3D11,Spectre::Engine::DeviceDepthBuffer>(
        __int64 a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx

  std::static_pointer_cast<Spectre::Engine::D3D11::DepthBufferD3D11,Spectre::Engine::DeviceDepthBuffer>();
  v3 = *(std::_Ref_count_base **)(v2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
