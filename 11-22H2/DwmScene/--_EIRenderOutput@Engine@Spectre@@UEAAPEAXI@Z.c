/*
 * XREFs of ??_EIRenderOutput@Engine@Spectre@@UEAAPEAXI@Z @ 0x18002BBA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1IRenderOutput@Engine@Spectre@@UEAA@XZ @ 0x18002B8F0 (--1IRenderOutput@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::IRenderOutput *__fastcall Spectre::Engine::IRenderOutput::`vector deleting destructor'(
        Spectre::Engine::IRenderOutput *this,
        char a2)
{
  Spectre::Engine::IRenderOutput::~IRenderOutput(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
