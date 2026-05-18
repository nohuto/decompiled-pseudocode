/*
 * XREFs of ?SetRenderTarget@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@Z @ 0x18002CB10
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 *     ?ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEye@2345@@Z @ 0x1800D8EE0 (-ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEy.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::RenderOutput::SetRenderTarget(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 240), a2);
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
