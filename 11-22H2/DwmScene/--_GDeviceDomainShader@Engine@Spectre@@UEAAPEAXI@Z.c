/*
 * XREFs of ??_GDeviceDomainShader@Engine@Spectre@@UEAAPEAXI@Z @ 0x18008AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1DeviceDomainShader@Engine@Spectre@@UEAA@XZ @ 0x18008A8D4 (--1DeviceDomainShader@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::DeviceDomainShader *__fastcall Spectre::Engine::DeviceDomainShader::`scalar deleting destructor'(
        Spectre::Engine::DeviceDomainShader *this,
        char a2)
{
  Spectre::Engine::DeviceDomainShader::~DeviceDomainShader(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
