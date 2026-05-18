/*
 * XREFs of ??0VertexLayoutState@Engine@Spectre@@QEAA@AEBVState@12@@Z @ 0x18009D7E0
 * Callers:
 *     ??0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z @ 0x18009F5A4 (--0CommandListState@Engine@Spectre@@QEAA@PEAVRenderDevice@12@AEBVState@12@@Z.c)
 * Callees:
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

Spectre::Engine::VertexLayoutState *__fastcall Spectre::Engine::VertexLayoutState::VertexLayoutState(
        Spectre::Engine::VertexLayoutState *this,
        const struct Spectre::Engine::State *a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::VertexLayoutState::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v4 = (_QWORD *)((char *)this + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_BYTE *)this + 68) = 1;
  std::shared_ptr<Spectre::Engine::SceneNode const>::operator=(v4, (_QWORD *)a2 + 92);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 188);
  return this;
}
