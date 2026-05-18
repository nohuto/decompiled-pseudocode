/*
 * XREFs of ??_GImageProcessingEffect@Engine@Spectre@@UEAAPEAXI@Z @ 0x180097E50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingEffect@Engine@Spectre@@UEAA@XZ @ 0x180097D2C (--1ImageProcessingEffect@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingEffect *__fastcall Spectre::Engine::ImageProcessingEffect::`scalar deleting destructor'(
        Spectre::Engine::ImageProcessingEffect *this,
        char a2)
{
  Spectre::Engine::ImageProcessingEffect::~ImageProcessingEffect(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
