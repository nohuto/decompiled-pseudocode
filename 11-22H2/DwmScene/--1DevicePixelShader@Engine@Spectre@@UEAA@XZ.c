/*
 * XREFs of ??1DevicePixelShader@Engine@Spectre@@UEAA@XZ @ 0x18008A91C
 * Callers:
 *     ??_EDevicePixelShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AB60 (--_EDevicePixelShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D54C8 (--1PixelShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DevicePixelShader::~DevicePixelShader(Spectre::Engine::DevicePixelShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DevicePixelShader::`vftable';
  Spectre::Engine::DeviceShader::~DeviceShader(this);
}
