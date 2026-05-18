/*
 * XREFs of ?SetVertexLayout@VertexLayoutState@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18009D9C0
 * Callers:
 *     ?SetVertexLayout@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VVertexLayout@Engine@Spectre@@@std@@@Z @ 0x18003993C (-SetVertexLayout@CommandList@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VVertexLayout@Engine@Spectre@.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall Spectre::Engine::VertexLayoutState::SetVertexLayout(__int64 a1, _QWORD *a2)
{
  return std::shared_ptr<Spectre::Engine::SceneNode const>::operator=((_QWORD *)(a1 + 8), a2);
}
