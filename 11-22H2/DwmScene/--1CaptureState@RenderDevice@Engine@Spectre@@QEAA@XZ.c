/*
 * XREFs of ??1CaptureState@RenderDevice@Engine@Spectre@@QEAA@XZ @ 0x180025AB0
 * Callers:
 *     ??1RenderDevice@Engine@Spectre@@UEAA@XZ @ 0x180025BA0 (--1RenderDevice@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::RenderDevice::RenderDevice_::_1_::dtor$19 @ 0x1800E4D5B (_Spectre--Engine--RenderDevice--RenderDevice_--_1_--dtor$19.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::RenderDevice::CaptureState::~CaptureState(
        Spectre::Engine::RenderDevice::CaptureState *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx
  std::_Ref_count_base *v6; // rcx
  std::_Ref_count_base *v7; // rcx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 10);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 8);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 5);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  v6 = (std::_Ref_count_base *)*((_QWORD *)this + 3);
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v7 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
