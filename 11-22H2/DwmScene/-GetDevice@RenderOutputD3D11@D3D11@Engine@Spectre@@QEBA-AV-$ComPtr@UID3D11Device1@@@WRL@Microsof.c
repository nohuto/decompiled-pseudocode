/*
 * XREFs of ?GetDevice@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C9D80
 * Callers:
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAF50 (-UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Textu.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11Device1@@@WRL@Microsoft@@XZ @ 0x1800C581C (-GetDevice@RenderDeviceD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11Device1@@@WRL@Microsof.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 */

_QWORD *__fastcall Spectre::Engine::D3D11::RenderOutputD3D11::GetDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  std::_Ref_count_base *v5; // [rsp+30h] [rbp-18h]

  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(a1, &v4);
  if ( v4 )
  {
    Spectre::Engine::D3D11::RenderDeviceD3D11::GetDevice(v4, a2);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  else
  {
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    *a2 = 0LL;
  }
  return a2;
}
