/*
 * XREFs of ?SetScissorRect@CommandList@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x1800397AC
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 * Callees:
 *     ?SetScissorRect@ScissorState@Engine@Spectre@@QEAAXUScissorRect@23@@Z @ 0x18009F594 (-SetScissorRect@ScissorState@Engine@Spectre@@QEAAXUScissorRect@23@@Z.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::SetScissorRect(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14624LL;
  v4 = *a2;
  return Spectre::Engine::ScissorState::SetScissorRect(v2, &v4);
}
