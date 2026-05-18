/*
 * XREFs of ??_GDeviceHullShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AB20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceHullShader@Engine@Spectre@@UEAA@XZ @ 0x18008A904 (--1DeviceHullShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceHullShader *__fastcall Spectre::Engine::DeviceHullShader::`scalar deleting destructor'(
        Spectre::Engine::DeviceHullShader *this,
        char a2)
{
  Spectre::Engine::DeviceHullShader::~DeviceHullShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
