/*
 * XREFs of ??_GBackgroundUnlitShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007FE10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007FDD0 (--1BackgroundUnlitShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::BackgroundUnlitShaderExtension *__fastcall Spectre::Engine::BackgroundUnlitShaderExtension::`scalar deleting destructor'(
        Spectre::Engine::BackgroundUnlitShaderExtension *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Spectre::Engine::BackgroundUnlitShaderExtension::~BackgroundUnlitShaderExtension(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
