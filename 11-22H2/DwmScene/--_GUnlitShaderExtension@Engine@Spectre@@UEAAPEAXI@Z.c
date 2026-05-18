/*
 * XREFs of ??_GUnlitShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1UnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FAA8 (--1UnlitShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::UnlitShaderExtension *__fastcall Spectre::Engine::UnlitShaderExtension::`scalar deleting destructor'(
        Spectre::Engine::UnlitShaderExtension *this,
        char a2)
{
  Spectre::Engine::UnlitShaderExtension::~UnlitShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
