/*
 * XREFs of ?EnableGpuTimeQuery@RenderOutput@Engine@Spectre@@UEAAX_N@Z @ 0x18002BEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::RenderOutput::EnableGpuTimeQuery(Spectre::Engine::RenderOutput *this, char a2)
{
  *((_BYTE *)this + 400) = a2;
}
