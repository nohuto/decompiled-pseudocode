/*
 * XREFs of ??$spectre_safe_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@Utils@Spectre@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@3@@Z @ 0x1800CF9D8
 * Callers:
 *     ?ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@QEBM@Z @ 0x1800CFDC0 (-ClearRenderTarget@CommandListD3D11@D3D11@Engine@Spectre@@UEAAXAEBV-$shared_ptr@VFr_ea_1800CFDC0.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$static_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA?AV?$shared_ptr@VRenderTargetD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VDeviceFrameBuffer@Engine@Spectre@@@0@@Z @ 0x1800CFA20 (--$static_pointer_cast@VRenderTargetD3D11@D3D11@Engine@Spectre@@VDeviceFrameBuffer@34@@std@@YA-A.c)
 */

__int64 __fastcall Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>(
        __int64 a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx

  std::static_pointer_cast<Spectre::Engine::D3D11::RenderTargetD3D11,Spectre::Engine::DeviceFrameBuffer>();
  v3 = *(std::_Ref_count_base **)(v2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
