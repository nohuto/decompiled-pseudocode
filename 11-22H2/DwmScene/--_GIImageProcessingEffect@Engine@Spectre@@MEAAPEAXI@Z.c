/*
 * XREFs of ??_GIImageProcessingEffect@Engine@Spectre@@MEAAPEAXI@Z @ 0x180097E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 */

Spectre::Engine::IImageProcessingEffect *__fastcall Spectre::Engine::IImageProcessingEffect::`scalar deleting destructor'(
        Spectre::Engine::IImageProcessingEffect *this,
        char a2)
{
  *(_QWORD *)this = &Spectre::Engine::IImageProcessingEffect::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
