/*
 * XREFs of ??_EViewportState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009F330
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ViewportState@Engine@Spectre@@UEAA@XZ @ 0x18009F2C0 (--1ViewportState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ViewportState *__fastcall Spectre::Engine::ViewportState::`vector deleting destructor'(
        Spectre::Engine::ViewportState *this,
        char a2)
{
  Spectre::Engine::ViewportState::~ViewportState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
