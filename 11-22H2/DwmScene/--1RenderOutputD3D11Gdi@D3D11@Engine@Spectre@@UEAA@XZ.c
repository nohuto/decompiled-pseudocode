/*
 * XREFs of ??1RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C8FF8
 * Callers:
 *     ??_ERenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C90A0 (--_ERenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::~RenderOutputD3D11Gdi(
        Spectre::Engine::D3D11::RenderOutputD3D11Gdi *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 215);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 214);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 213);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 212);
  Spectre::Engine::D3D11::RenderOutputD3D11::~RenderOutputD3D11(this);
}
