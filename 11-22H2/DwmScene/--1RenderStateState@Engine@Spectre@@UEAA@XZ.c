/*
 * XREFs of ??1RenderStateState@Engine@Spectre@@UEAA@XZ @ 0x18009EA78
 * Callers:
 *     ??_ERenderStateState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009EAC0 (--_ERenderStateState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::RenderStateState::~RenderStateState(Spectre::Engine::RenderStateState *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  *(_QWORD *)this = &Spectre::Engine::RenderStateState::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
