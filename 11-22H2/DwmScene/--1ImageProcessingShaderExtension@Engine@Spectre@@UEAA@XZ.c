/*
 * XREFs of ??1ImageProcessingShaderExtension@Engine@Spectre@@UEAA@XZ @ 0x18007E820
 * Callers:
 *     ??_EImageProcessingShaderExtension@Engine@Spectre@@UEAAPEAXI@Z @ 0x18007E840 (--_EImageProcessingShaderExtension@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ImageProcessingShaderExtension::~ImageProcessingShaderExtension(
        Spectre::Engine::ImageProcessingShaderExtension *this)
{
  *(_QWORD *)this = &Spectre::Engine::ImageProcessingShaderExtension::`vftable';
  Spectre::Engine::IShaderExtension::~IShaderExtension(this);
}
