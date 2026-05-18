/*
 * XREFs of ??1DeviceHullShader@Engine@Spectre@@UEAA@XZ @ 0x18008A904
 * Callers:
 *     ??_GDeviceHullShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AB20 (--_GDeviceHullShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1HullShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D78D0 (--1HullShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DeviceHullShader::~DeviceHullShader(Spectre::Engine::DeviceHullShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceHullShader::`vftable';
  Spectre::Engine::DeviceShader::~DeviceShader(this);
}
