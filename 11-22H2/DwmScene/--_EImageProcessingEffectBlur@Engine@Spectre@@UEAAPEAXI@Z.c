/*
 * XREFs of ??_EImageProcessingEffectBlur@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009C110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ @ 0x18009BF10 (--1ImageProcessingEffectBlur@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffectBlur *__fastcall Spectre::Engine::ImageProcessingEffectBlur::`vector deleting destructor'(
        Spectre::Engine::ImageProcessingEffectBlur *this,
        char a2)
{
  Spectre::Engine::ImageProcessingEffectBlur::~ImageProcessingEffectBlur(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
