/*
 * XREFs of ??1FontShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F73C
 * Callers:
 *     ??_GFontShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007F760 (--_GFontShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::FontShaderExtension::~FontShaderExtension(Spectre::Engine::FontShaderExtension *this)
{
  *(_QWORD *)this = &Spectre::Engine::FontShaderExtension::`vftable';
  Spectre::Engine::IShaderExtension::~IShaderExtension(this);
}
