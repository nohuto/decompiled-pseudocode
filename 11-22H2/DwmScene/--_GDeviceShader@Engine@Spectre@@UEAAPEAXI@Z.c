/*
 * XREFs of ??_GDeviceShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008ABA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceShader@Engine@Spectre@@UEAA@XZ @ 0x18008A934 (--1DeviceShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceShader *__fastcall Spectre::Engine::DeviceShader::`scalar deleting destructor'(
        Spectre::Engine::DeviceShader *this,
        char a2)
{
  Spectre::Engine::DeviceShader::~DeviceShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
