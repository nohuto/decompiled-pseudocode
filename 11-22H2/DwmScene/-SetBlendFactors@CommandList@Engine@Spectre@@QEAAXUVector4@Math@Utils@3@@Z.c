/*
 * XREFs of ?SetBlendFactors@CommandList@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z @ 0x180039618
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     ?SetBlendFactors@RenderStateState@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z @ 0x18009EBA0 (-SetBlendFactors@RenderStateState@Engine@Spectre@@QEAAXUVector4@Math@Utils@3@@Z.c)
 */

__int64 __fastcall Spectre::Engine::CommandList::SetBlendFactors(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 96) + 14472LL;
  v4 = *a2;
  return Spectre::Engine::RenderStateState::SetBlendFactors(v2, &v4);
}
