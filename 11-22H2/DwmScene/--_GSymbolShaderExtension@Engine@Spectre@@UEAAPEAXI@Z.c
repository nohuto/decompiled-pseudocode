/*
 * XREFs of ??_GSymbolShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007F370
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1SymbolShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007F358 (--1SymbolShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::SymbolShaderExtension *__fastcall Spectre::Engine::SymbolShaderExtension::`scalar deleting destructor'(
        Spectre::Engine::SymbolShaderExtension *this,
        char a2)
{
  Spectre::Engine::SymbolShaderExtension::~SymbolShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
