/*
 * XREFs of ??1TextureD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800CC9F8
 * Callers:
 *     ??_GTextureD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800CCE40 (--_GTextureD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::TextureD3D11::~TextureD3D11(Spectre::Engine::D3D11::TextureD3D11 *this)
{
  __int64 *v2; // rbx

  v2 = (__int64 *)((char *)this + 168);
  *(_QWORD *)this = &Spectre::Engine::D3D11::TextureD3D11::`vftable';
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 22);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 20);
  Spectre::Engine::DeviceTexture::~DeviceTexture(this);
}
