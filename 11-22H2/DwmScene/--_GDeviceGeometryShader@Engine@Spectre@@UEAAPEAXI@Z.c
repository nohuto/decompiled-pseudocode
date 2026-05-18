/*
 * XREFs of ??_GDeviceGeometryShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceGeometryShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8EC (--1DeviceGeometryShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceGeometryShader *__fastcall Spectre::Engine::DeviceGeometryShader::`scalar deleting destructor'(
        Spectre::Engine::DeviceGeometryShader *this,
        char a2)
{
  Spectre::Engine::DeviceGeometryShader::~DeviceGeometryShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
