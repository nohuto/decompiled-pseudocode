/*
 * XREFs of ??_EIShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18005FE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1IShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18005FBF0 (--1IShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::IShaderExtension *__fastcall Spectre::Engine::IShaderExtension::`vector deleting destructor'(
        Spectre::Engine::IShaderExtension *this,
        char a2)
{
  Spectre::Engine::IShaderExtension::~IShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
