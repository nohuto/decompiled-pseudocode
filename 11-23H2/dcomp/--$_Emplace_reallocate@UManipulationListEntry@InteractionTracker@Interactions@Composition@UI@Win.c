/*
 * XREFs of ??$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180135858
 * Callers:
 *     ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z @ 0x180136AB8 (-AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionMan.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x180042A28 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Uninitialized_move@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135B1C (--$_Uninitialized_move@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@.c)
 *     ?_Change_array@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@_K1@Z @ 0x18013C664 (-_Change_array@-$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Wi.c)
 */

_QWORD *__fastcall std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::_Emplace_reallocate<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>(
        const char *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rbp
  _QWORD *v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *(_QWORD *)a1;
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v9 = v6 + 1;
  v10 = (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (_QWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v15 = v13;
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v16 = a3 + 1;
  v14[1] = 0LL;
  if ( v14 + 1 != a3 + 1 )
  {
    v14[1] = *v16;
    *v16 = 0LL;
  }
  v17 = *((_QWORD *)a1 + 1);
  v18 = (_QWORD *)v13;
  v19 = *(_QWORD *)a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *>(
      v19,
      a2,
      v13);
    v17 = *((_QWORD *)a1 + 1);
    v18 = v14 + 2;
    v19 = a2;
  }
  std::_Uninitialized_move<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *>(
    v19,
    v17,
    v18);
  std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::_Change_array(
    a1,
    v15,
    v9,
    v3);
  return v14;
}
