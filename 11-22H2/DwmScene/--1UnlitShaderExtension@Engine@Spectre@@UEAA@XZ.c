/*
 * XREFs of ??1UnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FAA8
 * Callers:
 *     ??_GUnlitShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007FAC0 (--_GUnlitShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::UnlitShaderExtension::~UnlitShaderExtension(
        Spectre::Engine::UnlitShaderExtension *this)
{
  *(_QWORD *)this = &Spectre::Engine::UnlitShaderExtension::`vftable';
  Spectre::Engine::BaseShaderExtension::~BaseShaderExtension(this);
}
