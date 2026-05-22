/*
 * XREFs of ?_Change_array@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@_K1@Z @ 0x18013C664
 * Callers:
 *     ??$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180135858 (--$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Win.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAXPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135604 (--$_Destroy_range@V-$allocator@UManipulationListEntry@InteractionTracker@Interactions@Compositio.c)
 */

void __fastcall std::vector<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Microsoft::WRL2::NestableRuntimeClass **v6; // rcx

  v6 = *(Microsoft::WRL2::NestableRuntimeClass ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>>(
      v6,
      *(Microsoft::WRL2::NestableRuntimeClass ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
