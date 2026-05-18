/*
 * XREFs of ??1RenderOutputDwm@@UEAA@XZ @ 0x180010F94
 * Callers:
 *     ??_GRenderOutputDwm@@UEAAPEAXI@Z @ 0x1800110F0 (--_GRenderOutputDwm@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall RenderOutputDwm::~RenderOutputDwm(RenderOutputDwm *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 212);
  Spectre::Engine::D3D11::RenderOutputD3D11::~RenderOutputD3D11(this);
}
