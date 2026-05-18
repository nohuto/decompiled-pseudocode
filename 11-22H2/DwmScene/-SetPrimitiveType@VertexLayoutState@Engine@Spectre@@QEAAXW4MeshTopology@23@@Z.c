/*
 * XREFs of ?SetPrimitiveType@VertexLayoutState@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x18009D9B4
 * Callers:
 *     ?SetPrimitiveType@CommandList@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z @ 0x180039708 (-SetPrimitiveType@CommandList@Engine@Spectre@@QEAAXW4MeshTopology@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::VertexLayoutState::SetPrimitiveType(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 56) = a2;
}
