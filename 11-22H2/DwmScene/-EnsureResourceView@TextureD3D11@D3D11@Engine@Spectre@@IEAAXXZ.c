/*
 * XREFs of ?EnsureResourceView@TextureD3D11@D3D11@Engine@Spectre@@IEAAXXZ @ 0x1800CE020
 * Callers:
 *     ?GetResourceView@TextureD3D11@D3D11@Engine@Spectre@@QEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@XZ @ 0x1800CEFCC (-GetResourceView@TextureD3D11@D3D11@Engine@Spectre@@QEBA-AV-$ComPtr@UID3D11ShaderResourceView@@@.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UID3D11ShaderResourceView@@@01@$$T@Z @ 0x18001070C (--$-9UID3D11ShaderResourceView@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@UID3D11ShaderResourceView@@@01@.c)
 *     ?GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056630 (-GetCreationFlags@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ?GetMipLevels@DeviceTexture@Engine@Spectre@@QEBAIXZ @ 0x180056828 (-GetMipLevels@DeviceTexture@Engine@Spectre@@QEBAIXZ.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture2D@@II@Z @ 0x1800CDBD8 (-CreateResourceView2D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 *     ?CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA?AV?$ComPtr@UID3D11ShaderResourceView@@@WRL@Microsoft@@AEAUID3D11Texture3D@@II@Z @ 0x1800CDE10 (-CreateResourceView3D@TextureD3D11@D3D11@Engine@Spectre@@IEBA-AV-$ComPtr@UID3D11ShaderResourceVi.c)
 */

void __fastcall Spectre::Engine::D3D11::TextureD3D11::EnsureResourceView(Spectre::Engine::D3D11::TextureD3D11 *this)
{
  __int64 *v1; // rbx
  __int64 v2; // r10
  Spectre::Engine::DeviceTexture *v3; // r10
  Spectre::Engine::DeviceTexture *v4; // rcx
  __int16 CreationFlags; // ax
  __int64 *v6; // r11
  int v7; // r8d
  __int64 v8; // r10
  __int64 *v9; // rax
  Spectre::Engine::DeviceTexture *v10; // r10
  Spectre::Engine::DeviceTexture *v11; // rcx
  char v12; // al
  __int64 *v13; // r11
  int v14; // r8d
  __int64 v15; // r10
  struct ID3D11DeviceChild *v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 160);
  if ( !Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)this + 20) )
  {
    if ( Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)(v2 + 168)) )
    {
      Spectre::Engine::DeviceTexture::GetMipLevels(v3);
      CreationFlags = Spectre::Engine::DeviceTexture::GetCreationFlags(v4);
      v9 = (__int64 *)Spectre::Engine::D3D11::TextureD3D11::CreateResourceView2D(v8, &v16, *v6, CreationFlags, v7);
    }
    else
    {
      if ( !Microsoft::WRL::operator!=<ID3D11ShaderResourceView>((_QWORD *)v3 + 22) )
        return;
      Spectre::Engine::DeviceTexture::GetMipLevels(v10);
      v12 = Spectre::Engine::DeviceTexture::GetCreationFlags(v11);
      v9 = (__int64 *)Spectre::Engine::D3D11::TextureD3D11::CreateResourceView3D(v15, &v16, *v13, v12, v14);
    }
    Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=(v1, v9);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  }
}
