/*
 * XREFs of ??_EShaderDatabase@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800982B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ShaderDatabase@Engine@Spectre@@UEAA@XZ @ 0x180098294 (--1ShaderDatabase@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ShaderDatabase *__fastcall Spectre::Engine::ShaderDatabase::`vector deleting destructor'(
        Spectre::Engine::ShaderDatabase *this,
        char a2)
{
  Spectre::Engine::ShaderDatabase::~ShaderDatabase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
