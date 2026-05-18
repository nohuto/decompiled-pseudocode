/*
 * XREFs of ??_EDeviceVertexShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AC20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceVertexShader@Engine@Spectre@@UEAA@XZ @ 0x18008AA88 (--1DeviceVertexShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceVertexShader *__fastcall Spectre::Engine::DeviceVertexShader::`vector deleting destructor'(
        Spectre::Engine::DeviceVertexShader *this,
        char a2)
{
  Spectre::Engine::DeviceVertexShader::~DeviceVertexShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
