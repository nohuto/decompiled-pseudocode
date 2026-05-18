/*
 * XREFs of ??1DeviceVertexShader@Engine@Spectre@@UEAA@XZ @ 0x18008AA88
 * Callers:
 *     ??_EDeviceVertexShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AC20 (--_EDeviceVertexShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D4638 (--1VertexShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DeviceVertexShader::~DeviceVertexShader(Spectre::Engine::DeviceVertexShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceVertexShader::`vftable';
  Spectre::Engine::DeviceShader::~DeviceShader(this);
}
