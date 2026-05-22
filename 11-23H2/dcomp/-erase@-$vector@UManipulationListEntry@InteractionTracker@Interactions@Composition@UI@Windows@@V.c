/*
 * XREFs of ?erase@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@@2@@Z @ 0x18013C748
 * Callers:
 *     ?RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@@Z @ 0x18013A78C (-RemoveManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVComposition.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$_Move_unchecked@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@PEAU123456@@std@@YAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@PEAU123456@00@Z @ 0x180135A80 (--$_Move_unchecked@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Wind.c)
 */

Microsoft::WRL2::NestableRuntimeClass ***__fastcall std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::erase(
        __int64 a1,
        Microsoft::WRL2::NestableRuntimeClass ***a2,
        Microsoft::WRL2::NestableRuntimeClass **a3)
{
  __int64 v6; // rdi
  Microsoft::WRL2::NestableRuntimeClass ***result; // rax

  std::_Move_unchecked<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *,Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *>(
    a3 + 2,
    *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8),
    a3);
  v6 = *(_QWORD *)(a1 + 8);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(v6 - 8));
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)(v6 - 16));
  *(_QWORD *)(a1 + 8) -= 16LL;
  result = a2;
  *a2 = a3;
  return result;
}
