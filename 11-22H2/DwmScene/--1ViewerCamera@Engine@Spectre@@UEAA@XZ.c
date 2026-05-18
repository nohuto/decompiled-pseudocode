/*
 * XREFs of ??1ViewerCamera@Engine@Spectre@@UEAA@XZ @ 0x180091F58
 * Callers:
 *     ??_GViewerCamera@Engine@Spectre@@UEAAPEAXI@Z @ 0x180092050 (--_GViewerCamera@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::ViewerCamera::~ViewerCamera(Spectre::Engine::ViewerCamera *this, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::ViewerCamera::`vftable';
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 224);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 222);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  Spectre::Engine::Camera::~Camera(this, a2);
}
