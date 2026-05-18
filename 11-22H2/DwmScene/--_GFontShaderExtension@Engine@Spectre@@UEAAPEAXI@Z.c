/*
 * XREFs of ??_GFontShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007F760
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1FontShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F73C (--1FontShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::FontShaderExtension *__fastcall Spectre::Engine::FontShaderExtension::`scalar deleting destructor'(
        Spectre::Engine::FontShaderExtension *this,
        char a2)
{
  Spectre::Engine::FontShaderExtension::~FontShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
