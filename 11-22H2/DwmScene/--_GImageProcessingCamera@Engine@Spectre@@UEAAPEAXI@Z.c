/*
 * XREFs of ??_GImageProcessingCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800979B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ImageProcessingCamera@Engine@Spectre@@UEAA@XZ @ 0x180097998 (--1ImageProcessingCamera@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ImageProcessingCamera *__fastcall Spectre::Engine::ImageProcessingCamera::`scalar deleting destructor'(
        Spectre::Engine::ImageProcessingCamera *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Spectre::Engine::ImageProcessingCamera::~ImageProcessingCamera(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
