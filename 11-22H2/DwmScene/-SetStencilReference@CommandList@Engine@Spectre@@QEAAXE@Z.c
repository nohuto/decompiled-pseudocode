/*
 * XREFs of ?SetStencilReference@CommandList@Engine@Spectre@@QEAAXE@Z @ 0x180039834
 * Callers:
 *     ?Render@MeshInstance@Engine@Spectre@@UEBAXAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@_KAEBV?$shared_ptr@$$CBVCamera@Engine@Spectre@@@5@@Z @ 0x18004C400 (-Render@MeshInstance@Engine@Spectre@@UEBAXAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@std@@_K.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::CommandList::SetStencilReference(
        Spectre::Engine::CommandList *this,
        unsigned __int8 a2)
{
  Spectre::Engine::RenderStateState::SetStencilReference(
    (Spectre::Engine::RenderStateState *)(*((_QWORD *)this + 12) + 14472LL),
    a2);
}
