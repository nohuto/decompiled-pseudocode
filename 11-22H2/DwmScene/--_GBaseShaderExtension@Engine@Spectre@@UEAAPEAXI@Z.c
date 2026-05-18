/*
 * XREFs of ??_GBaseShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x180098AD0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1BaseShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x1800989F0 (--1BaseShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::BaseShaderExtension *__fastcall Spectre::Engine::BaseShaderExtension::`scalar deleting destructor'(
        Spectre::Engine::BaseShaderExtension *this,
        char a2)
{
  Spectre::Engine::BaseShaderExtension::~BaseShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
