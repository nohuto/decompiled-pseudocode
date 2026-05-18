/*
 * XREFs of ??$IID_PPV_ARGS_Helper@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UICoreWindow@Core@UI@Windows@ABI@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800163D0
 * Callers:
 *     ?RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z @ 0x1800195D8 (-RuntimeClassInitialize@SpectreRenderer@@QEAAJAEBUDwmSceneRendererDesc@@@Z.c)
 *     ?InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C5CA0 (-InitializeRenderer@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560 (-CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@.c)
 *     ?CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9770 (-CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUI.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV?$ComPtr@UID3D11Device1@@@34@AEAV?$ComPtr@UID3D11DeviceContext1@@@34@W4GraphicsDeviceType@@W4AdditionalDeviceFlags@@W4AdditionalDevicePerformanceFlags@@W4D3D_FEATURE_LEVEL@@6W4DeviceFeatureFlags@@@Z @ 0x1800DB070 (-CreateDeviceResources@CDXDeviceFactory@@AEAAJAEAV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@AEAV-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow>>(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  return a1;
}
