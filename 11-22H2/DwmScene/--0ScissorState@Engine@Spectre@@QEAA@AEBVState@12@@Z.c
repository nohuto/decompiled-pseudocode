/*
 * XREFs of ??0ScissorState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009F460
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::ScissorState *__fastcall Spectre::Engine::ScissorState::ScissorState(
        Spectre::Engine::ScissorState *this,
        const struct Spectre::Engine::State *a2)
{
  Spectre::Engine::ScissorState *result; // rax

  *(_QWORD *)this = &Spectre::Engine::ScissorState::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  result = this;
  *((_BYTE *)this + 56) = 1;
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 1164);
  return result;
}
