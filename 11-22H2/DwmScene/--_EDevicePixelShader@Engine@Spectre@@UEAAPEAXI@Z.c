/*
 * XREFs of ??_EDevicePixelShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AB60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DevicePixelShader@Engine@Spectre@@UEAA@XZ @ 0x18008A91C (--1DevicePixelShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DevicePixelShader *__fastcall Spectre::Engine::DevicePixelShader::`vector deleting destructor'(
        Spectre::Engine::DevicePixelShader *this,
        char a2)
{
  Spectre::Engine::DevicePixelShader::~DevicePixelShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
