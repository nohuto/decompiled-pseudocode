/*
 * XREFs of ?GetDxgiFormat@RenderOutputD3D11@D3D11@Engine@Spectre@@QEBA?AW4DXGI_FORMAT@@XZ @ 0x1800C9DDC
 * Callers:
 *     ?CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@@Z @ 0x1800C9560 (-CreateRenderTarget@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@MEAAXV-$ComPtr@UID3D11Texture2D@@.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAB10 (-UpdateBackBufferTexture@RenderOutputD3D11@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Texture2.c)
 *     ?UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA?AV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@XZ @ 0x1800CAF50 (-UpdateBackBufferTexture@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@EEAA-AV-$ComPtr@UID3D11Textu.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::GetDxgiFormat(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this)
{
  unsigned int v2; // ebx
  char v3; // al

  v2 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *, __int64))(*(_QWORD *)this + 264LL))(
         this,
         2LL);
  v3 = (*(__int64 (__fastcall **)(Spectre::Engine::D3D11::RenderOutputD3D11 *))(*(_QWORD *)this + 296LL))(this);
  return Spectre::Engine::D3D11::D3DUtils::GetFormat(v2, v3 != 0);
}
