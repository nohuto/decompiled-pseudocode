/*
 * XREFs of ?SetIndexBuffer@CommandList@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIndexBuffer@Engine@Spectre@@@std@@I@Z @ 0x1800396F0
 * Callers:
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetIndexBuffer(__int64 a1)
{
  return Spectre::Engine::IndexBufferState::SetIndexBuffer(*(_QWORD *)(a1 + 96) + 9704LL);
}
