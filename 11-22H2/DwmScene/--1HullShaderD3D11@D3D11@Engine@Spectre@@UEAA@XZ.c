/*
 * XREFs of ??1HullShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D78D0
 * Callers:
 *     ??_GHullShaderD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800D7910 (--_GHullShaderD3D11@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Spectre::Engine::D3D11::HullShaderD3D11::~HullShaderD3D11(
        Spectre::Engine::D3D11::HullShaderD3D11 *this)
{
  *(_QWORD *)this = &Spectre::Engine::D3D11::HullShaderD3D11::`vftable';
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 13);
  Spectre::Engine::DeviceHullShader::~DeviceHullShader(this);
}
