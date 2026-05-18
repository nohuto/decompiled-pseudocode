/*
 * XREFs of ??1DeviceShader@Engine@Spectre@@UEAA@XZ @ 0x18008A934
 * Callers:
 *     ??1DeviceDomainShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8D4 (--1DeviceDomainShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceGeometryShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8EC (--1DeviceGeometryShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceHullShader@Engine@Spectre@@UEAA@XZ @ 0x18008A904 (--1DeviceHullShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DevicePixelShader@Engine@Spectre@@UEAA@XZ @ 0x18008A91C (--1DevicePixelShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??1DeviceVertexShader@Engine@Spectre@@UEAA@XZ @ 0x18008AA88 (--1DeviceVertexShader@Engine@Spectre@@UEAA@XZ.c)
 *     ??_GDeviceShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008ABA0 (--_GDeviceShader@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::DeviceShader::~DeviceShader(Spectre::Engine::DeviceShader *this)
{
  *(_QWORD *)this = &Spectre::Engine::DeviceShader::`vftable';
  Spectre::Engine::DeviceResource::~DeviceResource(this);
}
