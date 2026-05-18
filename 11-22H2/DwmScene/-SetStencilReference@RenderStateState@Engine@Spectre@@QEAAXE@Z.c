/*
 * XREFs of ?SetStencilReference@RenderStateState@Engine@Spectre@@QEAAXE@Z @ 0x18009EC38
 * Callers:
 *     ?SetStencilReference@CommandList@Engine@Spectre@@QEAAXE@Z @ 0x180039834 (-SetStencilReference@CommandList@Engine@Spectre@@QEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderStateState::SetStencilReference(
        Spectre::Engine::RenderStateState *this,
        char a2)
{
  if ( a2 != *((_BYTE *)this + 60) )
  {
    *((_BYTE *)this + 60) = a2;
    *((_BYTE *)this + 61) = 1;
  }
}
