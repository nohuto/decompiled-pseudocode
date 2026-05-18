/*
 * XREFs of ??_GRendererResource@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800293E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1RendererResource@Engine@Spectre@@UEAA@XZ @ 0x1800292E8 (--1RendererResource@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::RendererResource *__fastcall Spectre::Engine::RendererResource::`scalar deleting destructor'(
        Spectre::Engine::RendererResource *this,
        char a2)
{
  Spectre::Engine::RendererResource::~RendererResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
