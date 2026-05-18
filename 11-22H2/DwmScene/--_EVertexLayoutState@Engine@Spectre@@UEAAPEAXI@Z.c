/*
 * XREFs of ??_EVertexLayoutState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexLayoutState@Engine@Spectre@@UEAA@XZ @ 0x18009D84C (--1VertexLayoutState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::VertexLayoutState *__fastcall Spectre::Engine::VertexLayoutState::`vector deleting destructor'(
        Spectre::Engine::VertexLayoutState *this,
        char a2)
{
  Spectre::Engine::VertexLayoutState::~VertexLayoutState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
