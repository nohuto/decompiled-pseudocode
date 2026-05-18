/*
 * XREFs of ??_GCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x180059D40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1Camera@Engine@Spectre@@UEAA@XZ @ 0x180059904 (--1Camera@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::Camera *__fastcall Spectre::Engine::Camera::`scalar deleting destructor'(
        Spectre::Engine::Camera *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Spectre::Engine::Camera::~Camera(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
