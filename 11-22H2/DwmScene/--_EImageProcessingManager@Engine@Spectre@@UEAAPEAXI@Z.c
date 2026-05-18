/*
 * XREFs of ??_EImageProcessingManager@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800720D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingManager@Engine@Spectre@@UEAA@XZ @ 0x180071F38 (--1ImageProcessingManager@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingManager *__fastcall Spectre::Engine::ImageProcessingManager::`vector deleting destructor'(
        Spectre::Engine::ImageProcessingManager *this,
        char a2)
{
  Spectre::Engine::ImageProcessingManager::~ImageProcessingManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
