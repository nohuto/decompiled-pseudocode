/*
 * XREFs of ?SetViewport@CommandList@Engine@Spectre@@QEAAXMMMMMM@Z @ 0x180039954
 * Callers:
 *     ?Begin@Camera@Engine@Spectre@@MEBAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x18005A410 (-Begin@Camera@Engine@Spectre@@MEBAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$sh.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::CommandList::SetViewport(
        Spectre::Engine::CommandList *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  Spectre::Engine::ViewportState::SetViewport(
    (Spectre::Engine::ViewportState *)(*((_QWORD *)this + 12) + 14536LL),
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
}
