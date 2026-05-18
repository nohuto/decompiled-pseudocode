/*
 * XREFs of ??_EScissorState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ScissorState@Engine@Spectre@@UEAA@XZ @ 0x18009F4A0 (--1ScissorState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ScissorState *__fastcall Spectre::Engine::ScissorState::`vector deleting destructor'(
        Spectre::Engine::ScissorState *this,
        char a2)
{
  Spectre::Engine::ScissorState::~ScissorState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
