/*
 * XREFs of ??1SymbolShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F358
 * Callers:
 *     ??_GSymbolShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007F370 (--_GSymbolShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::SymbolShaderExtension::~SymbolShaderExtension(
        Spectre::Engine::SymbolShaderExtension *this)
{
  *(_QWORD *)this = &Spectre::Engine::SymbolShaderExtension::`vftable';
  Spectre::Engine::IShaderExtension::~IShaderExtension(this);
}
