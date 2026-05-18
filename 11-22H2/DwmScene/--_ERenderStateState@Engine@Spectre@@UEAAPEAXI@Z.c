/*
 * XREFs of ??_ERenderStateState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009EAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderStateState@Engine@Spectre@@UEAA@XZ @ 0x18009EA78 (--1RenderStateState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RenderStateState *__fastcall Spectre::Engine::RenderStateState::`vector deleting destructor'(
        Spectre::Engine::RenderStateState *this,
        char a2)
{
  Spectre::Engine::RenderStateState::~RenderStateState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
