/*
 * XREFs of ?SetDepthBuffer@RenderOutput@Engine@Spectre@@IEAAXV?$shared_ptr@VDepthBuffer@Engine@Spectre@@@std@@@Z @ 0x18002C9C4
 * Callers:
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEye@2345@@Z @ 0x1800D8EE0 (-ActivateDisplay@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXIW4StereoEy.c)
 *     ?ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800D8F80 (-ClearResources@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEBV?$shared_ptr@VIHolographicDisplayProvider@Holographic@D3D11@Engine@Spectre@@@std@@AEBV?$shared_ptr@UHolographicDisplayState@Holographic@D3D11@Engine@Spectre@@@7@@Z @ 0x1800D9A70 (-UpdateLocalDisplayState@RenderOutputD3D11Holographic@Holographic@D3D11@Engine@Spectre@@AEAAXAEB.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800124F8 (--4-$shared_ptr@VLight@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::RenderOutput::SetDepthBuffer(__int64 a1, _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  std::shared_ptr<Spectre::Engine::Light>::operator=((__int64 *)(a1 + 256), a2);
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
