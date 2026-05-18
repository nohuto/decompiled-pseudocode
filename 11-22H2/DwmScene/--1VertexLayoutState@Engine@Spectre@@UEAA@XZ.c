/*
 * XREFs of ??1VertexLayoutState@Engine@Spectre@@UEAA@XZ @ 0x18009D84C
 * Callers:
 *     ??_EVertexLayoutState@Engine@Spectre@@UEAAPEAXI@Z @ 0x18009D8A0 (--_EVertexLayoutState@Engine@Spectre@@UEAAPEAXI@Z.c)
 *     ??1CommandListState@Engine@Spectre@@UEAA@XZ @ 0x18009F798 (--1CommandListState@Engine@Spectre@@UEAA@XZ.c)
 *     _Spectre::Engine::CommandListState::CommandListState_::_1_::dtor$6 @ 0x1800EB1A2 (_Spectre--Engine--CommandListState--CommandListState_--_1_--dtor$6.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall Spectre::Engine::VertexLayoutState::~VertexLayoutState(Spectre::Engine::VertexLayoutState *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  std::_Ref_count_base *v4; // rcx

  *(_QWORD *)this = &Spectre::Engine::VertexLayoutState::`vftable';
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 6);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 2);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
}
