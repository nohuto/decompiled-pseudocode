/*
 * XREFs of ??_GImageProcessingEffectBloom@Engine@Spectre@@UEAAPEAXI@Z @ 0x180095D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingEffectBloom@Engine@Spectre@@UEAA@XZ @ 0x180095C2C (--1ImageProcessingEffectBloom@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffectBloom *__fastcall Spectre::Engine::ImageProcessingEffectBloom::`scalar deleting destructor'(
        Spectre::Engine::ImageProcessingEffectBloom *this,
        char a2)
{
  Spectre::Engine::ImageProcessingEffectBloom::~ImageProcessingEffectBloom(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
