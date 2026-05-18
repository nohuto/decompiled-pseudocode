/*
 * XREFs of ??1RenderStateD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D4C28
 * Callers:
 *     ??_GRenderStateD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800D4C70 (--_GRenderStateD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderStateD3D11::~RenderStateD3D11(
        Spectre::Engine::D3D11::RenderStateD3D11 *this)
{
  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderStateD3D11::`vftable';
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 14);
  Spectre::Engine::DeviceRenderState::~DeviceRenderState(this);
}
