/*
 * XREFs of ??_GViewerCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x180092050
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18000B988 (--3@YAXPEAX_K@Z.c)
 *     ??1ViewerCamera@Engine@Spectre@@UEAA@XZ @ 0x180091F58 (--1ViewerCamera@Engine@Spectre@@UEAA@XZ.c)
 */

Spectre::Engine::ViewerCamera *__fastcall Spectre::Engine::ViewerCamera::`scalar deleting destructor'(
        Spectre::Engine::ViewerCamera *this,
        __int64 a2)
{
  char v2; // bl

  v2 = a2;
  Spectre::Engine::ViewerCamera::~ViewerCamera(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
