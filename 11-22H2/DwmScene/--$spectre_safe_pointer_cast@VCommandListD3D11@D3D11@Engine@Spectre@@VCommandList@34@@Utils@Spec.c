/*
 * XREFs of ??$spectre_safe_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@Utils@Spectre@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@std@@V?$shared_ptr@VCommandList@Engine@Spectre@@@3@@Z @ 0x1800C40AC
 * Callers:
 *     ?CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@@Z @ 0x1800C4CE0 (-CopyBackBufferPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRe.c)
 *     ?CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVIRenderOutput@34@AEAVFrameBuffer@34@@Z @ 0x1800C5080 (-CopyRenderTargetPixels@RenderDeviceD3D11@D3D11@Engine@Spectre@@UEAA_NAEAUScreenCapture@34@AEAVI.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$static_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA?AV?$shared_ptr@VCommandListD3D11@D3D11@Engine@Spectre@@@0@AEBV?$shared_ptr@VCommandList@Engine@Spectre@@@0@@Z @ 0x1800C40D8 (--$static_pointer_cast@VCommandListD3D11@D3D11@Engine@Spectre@@VCommandList@34@@std@@YA-AV-$shar.c)
 */

__int64 __fastcall Spectre::Utils::spectre_safe_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>(
        __int64 a1)
{
  __int64 v2; // rdx
  std::_Ref_count_base *v3; // rcx

  std::static_pointer_cast<Spectre::Engine::D3D11::CommandListD3D11,Spectre::Engine::CommandList>();
  v3 = *(std::_Ref_count_base **)(v2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
