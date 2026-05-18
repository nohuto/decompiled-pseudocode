/*
 * XREFs of ?SetScissorRect@ScissorState@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18009F594
 * Callers:
 *     ?SetScissorRect@CommandList@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x1800397AC (-SetScissorRect@CommandList@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ScissorState::SetScissorRect(__int64 a1, _OWORD *a2)
{
  *(_OWORD *)(a1 + 8) = *a2;
}
