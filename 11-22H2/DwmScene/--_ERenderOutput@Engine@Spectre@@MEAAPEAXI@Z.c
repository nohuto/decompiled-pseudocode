/*
 * XREFs of ??_ERenderOutput@Engine@Spectre@@MEAAPEAXI@Z @ 0x18002BBE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RenderOutput@Engine@Spectre@@MEAA@XZ @ 0x18002B928 (--1RenderOutput@Engine@Spectre@@MEAA@XZ.c)
 */

Spectre::Engine::RenderOutput *__fastcall Spectre::Engine::RenderOutput::`vector deleting destructor'(
        Spectre::Engine::RenderOutput *this,
        char a2)
{
  Spectre::Engine::RenderOutput::~RenderOutput(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
