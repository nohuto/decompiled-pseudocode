/*
 * XREFs of ??_EImageProcessingShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007E840
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007E820 (--1ImageProcessingShaderExtension@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingShaderExtension *__fastcall Spectre::Engine::ImageProcessingShaderExtension::`vector deleting destructor'(
        Spectre::Engine::ImageProcessingShaderExtension *this,
        char a2)
{
  Spectre::Engine::ImageProcessingShaderExtension::~ImageProcessingShaderExtension(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
