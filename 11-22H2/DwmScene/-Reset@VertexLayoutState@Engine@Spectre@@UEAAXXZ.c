/*
 * XREFs of ?Reset@VertexLayoutState@Engine@Spectre@@UEAAXXZ @ 0x18009D8E0
 * Callers:
 *     ?Reset@CommandListState@Engine@Spectre@@UEAAXXZ @ 0x18009FA80 (-Reset@CommandListState@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18003B558 (--4-$shared_ptr@$$CBVSceneNode@Engine@Spectre@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

void __fastcall Spectre::Engine::VertexLayoutState::Reset(Spectre::Engine::VertexLayoutState *this)
{
  *((_BYTE *)this + 68) = 1;
  std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)this + 1, (_QWORD *)this + 5);
  *((_DWORD *)this + 14) = *((_DWORD *)this + 16);
}
