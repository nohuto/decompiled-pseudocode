/*
 * XREFs of ??_ERenderTargetState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009F040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderTargetState@Engine@Spectre@@UEAA@XZ @ 0x18009EF24 (--1RenderTargetState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RenderTargetState *__fastcall Spectre::Engine::RenderTargetState::`vector deleting destructor'(
        Spectre::Engine::RenderTargetState *this,
        char a2)
{
  Spectre::Engine::RenderTargetState::~RenderTargetState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
