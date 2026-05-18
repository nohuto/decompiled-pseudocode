/*
 * XREFs of ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@V?$ComPtr@UID3D11ShaderResourceView@@@67@I@Z @ 0x1800CD0A8
 * Callers:
 *     ?CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUISpectreTexture@@@Z @ 0x180018620 (-CreateTexture@SpectreRenderer@@UEAAJPEAUID3D11Texture2D@@PEAUID3D11ShaderResourceView@@PEAPEAUI.c)
 *     ?Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV?$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z @ 0x1800CD054 (-Create@TextureD3D11@D3D11@Engine@Spectre@@QEAAXV-$ComPtr@UID3D11Texture2D@@@WRL@Microsoft@@I@Z.c)
 *     ?CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z @ 0x1800D65DC (-CreateTextures@DepthBufferD3D11@D3D11@Engine@Spectre@@IEAAXUCreateTextureContext@1234@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CB668 (--4-$ComPtr@UID3D11RenderTargetView@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z @ 0x1800CF250 (-UpdateCachedProperties@TextureD3D11@D3D11@Engine@Spectre@@IEAAXI@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Engine::D3D11::TextureD3D11::Create(
        Spectre::Engine::D3D11::TextureD3D11 *this,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4)
{
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)this + 21, a2);
  Microsoft::WRL::ComPtr<ID3D11RenderTargetView>::operator=((__int64 *)this + 20, a3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  Spectre::Engine::D3D11::TextureD3D11::UpdateCachedProperties(this, a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a3);
}
