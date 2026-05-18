/*
 * XREFs of ??1DeviceGeometryShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8EC
 * Callers:
 *     ??_GDeviceGeometryShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AAE0 (--_GDeviceGeometryShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800D7380 (--1GeometryShaderD3D11@D3D11@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DeviceGeometryShader::~DeviceGeometryShader(
        Spectre::Engine::DeviceGeometryShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceGeometryShader::`vftable';
  Spectre::Engine::DeviceShader::~DeviceShader(this);
}
