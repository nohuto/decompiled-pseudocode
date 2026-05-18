/*
 * XREFs of ??_GImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAAPEAXI@Z @ 0x180093C80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAA@XZ @ 0x180093BE0 (--1ImageProcessingEffectPlanarReflection@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffectPlanarReflection *__fastcall Spectre::Engine::ImageProcessingEffectPlanarReflection::`scalar deleting destructor'(
        Spectre::Engine::ImageProcessingEffectPlanarReflection *this,
        char a2)
{
  Spectre::Engine::ImageProcessingEffectPlanarReflection::~ImageProcessingEffectPlanarReflection(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
