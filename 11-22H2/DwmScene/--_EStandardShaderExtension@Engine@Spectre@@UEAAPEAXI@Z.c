/*
 * XREFs of ??_EStandardShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007CC50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1StandardShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007CC08 (--1StandardShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::StandardShaderExtension *__fastcall Spectre::Engine::StandardShaderExtension::`vector deleting destructor'(
        Spectre::Engine::StandardShaderExtension *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Spectre::Engine::StandardShaderExtension::~StandardShaderExtension(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
