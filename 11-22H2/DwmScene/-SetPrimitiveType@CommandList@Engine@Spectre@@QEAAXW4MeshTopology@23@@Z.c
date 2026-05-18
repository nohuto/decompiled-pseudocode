/*
 * XREFs of ?SetPrimitiveType@CommandList@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180039708
 * Callers:
 *     ?Render@Mesh@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z @ 0x180048C04 (-Render@Mesh@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Spectre::Engine::CommandList::SetPrimitiveType(__int64 a1)
{
  return Spectre::Engine::VertexLayoutState::SetPrimitiveType(*(_QWORD *)(a1 + 96) + 9776LL);
}
