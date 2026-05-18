/*
 * XREFs of ??1DeviceDomainShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8D4
 * Callers:
 *     ??_GDeviceDomainShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AAA0 (--_GDeviceDomainShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D762C (--1DomainShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DeviceDomainShader::~DeviceDomainShader(Spectre::Engine::DeviceDomainShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceDomainShader::`vftable';
  Spectre::Engine::DeviceShader::~DeviceShader(this);
}
