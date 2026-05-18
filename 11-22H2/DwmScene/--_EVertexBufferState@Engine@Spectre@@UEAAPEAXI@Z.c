/*
 * XREFs of ??_EVertexBufferState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009E800
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1VertexBufferState@Engine@Spectre@@UEAA@XZ @ 0x18009E720 (--1VertexBufferState@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::VertexBufferState *__fastcall Spectre::Engine::VertexBufferState::`vector deleting destructor'(
        Spectre::Engine::VertexBufferState *this,
        char a2)
{
  Spectre::Engine::VertexBufferState::~VertexBufferState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
