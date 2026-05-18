/*
 * XREFs of ?GetDescription@RenderOutput@Engine@Spectre@@UEBA?AUOutputDescription@23@XZ @ 0x18002BF80
 * Callers:
 *     ?CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9770 (-CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUI.c)
 *     ?CreateSwapChain@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9BA0 (-CreateSwapChain@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknow.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall Spectre::Engine::RenderOutput::GetDescription(__int64 a1, _OWORD *a2)
{
  _OWORD *result; // rax
  __int128 v3; // xmm1

  result = a2;
  v3 = *(_OWORD *)(a1 + 112);
  *a2 = *(_OWORD *)(a1 + 96);
  a2[1] = v3;
  return result;
}
