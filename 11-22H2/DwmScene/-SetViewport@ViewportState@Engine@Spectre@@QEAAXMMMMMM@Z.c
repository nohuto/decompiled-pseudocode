/*
 * XREFs of ?SetViewport@ViewportState@Engine@Spectre@@QEAAXMMMMMM@Z @ 0x18009F428
 * Callers:
 *     ?SetViewport@CommandList@Engine@Spectre@@QEAAXMMMMMM@Z @ 0x180039954 (-SetViewport@CommandList@Engine@Spectre@@QEAAXMMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ViewportState::SetViewport(
        Spectre::Engine::ViewportState *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  *((float *)this + 5) = a5;
  *((float *)this + 2) = a2;
  *((float *)this + 7) = a7;
  *((float *)this + 3) = a3;
  *((float *)this + 4) = a4;
  *((float *)this + 6) = a6;
}
