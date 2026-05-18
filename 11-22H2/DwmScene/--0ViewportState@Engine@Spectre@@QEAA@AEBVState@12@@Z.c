/*
 * XREFs of ??0ViewportState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009F268
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     <none>
 */

Spectre::Engine::ViewportState *__fastcall Spectre::Engine::ViewportState::ViewportState(
        Spectre::Engine::ViewportState *this,
        const struct Spectre::Engine::State *a2)
{
  Spectre::Engine::ViewportState *result; // rax

  *(_QWORD *)this = &Spectre::Engine::ViewportState::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  result = this;
  *((_BYTE *)this + 80) = 1;
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a2 + 1140);
  *((_QWORD *)this + 9) = *(_QWORD *)((char *)a2 + 1156);
  return result;
}
