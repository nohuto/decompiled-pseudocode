/*
 * XREFs of ??1ImageProcessingCamera@Engine@Spectre@@UEAA@XZ @ 0x180097998
 * Callers:
 *     ??_GImageProcessingCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800979B0 (--_GImageProcessingCamera@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Engine::ImageProcessingCamera::~ImageProcessingCamera(
        Spectre::Engine::Camera *this,
        __int64 a2)
{
  *(_QWORD *)this = &Spectre::Engine::ImageProcessingCamera::`vftable';
  Spectre::Engine::Camera::~Camera(this, a2);
}
