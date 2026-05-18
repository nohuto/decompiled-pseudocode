/*
 * XREFs of ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C
 * Callers:
 *     ?CreateRenderTarget@RenderOutputDwm@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800111B0 (-CreateRenderTarget@RenderOutputDwm@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z.c)
 *     ?Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x180011560 (-Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ @ 0x1800C9120 (-ClearResources@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXXZ.c)
 *     ?CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C92E0 (-CreateDepthBuffer@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 *     ?CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9420 (-CreateRenderTarget@RenderOutputD3D11@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@@WR.c)
 *     ?CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9770 (-CreateSwapChain@RenderOutputD3D11CoreWindow@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUI.c)
 *     ?CreateSwapChain@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknown@@PEAUDXGI_SWAP_CHAIN_DESC1@@PEAPEAUIDXGISwapChain1@@@Z @ 0x1800C9BA0 (-CreateSwapChain@RenderOutputD3D11Xaml@D3D11@Engine@Spectre@@EEAAXPEAUIDXGIFactory2@@PEAUIUnknow.c)
 *     ?GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C9D80 (-GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x1800CA290 (-Present@RenderOutputD3D11@D3D11@Engine@Spectre@@UEAAXAEAV-$unique_lock@VMutex@Engine@Spectre@@@.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAF50 (-UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Textu.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??$static_pointer_cast@IX@std@@YA?AV?$shared_ptr@I@0@AEBV?$shared_ptr@X@0@@Z @ 0x180047A7C (--$static_pointer_cast@IX@std@@YA-AV-$shared_ptr@I@0@AEBV-$shared_ptr@X@0@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-28h]
  _BYTE v7[8]; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v8; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v7);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v3, &v5);
  if ( v8 )
    std::_Ref_count_base::_Decwref(v8);
  if ( v5 )
  {
    std::static_pointer_cast<unsigned int,void>(a2, &v5);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
  }
  else
  {
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
