/*
 * XREFs of ??_GShaderState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009DA70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ShaderState@Engine@Spectre@@UEAA@XZ @ 0x18009DA20 (--1ShaderState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ShaderState *__fastcall Spectre::Engine::ShaderState::`scalar deleting destructor'(
        Spectre::Engine::ShaderState *this,
        char a2)
{
  Spectre::Engine::ShaderState::~ShaderState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
