/*
 * XREFs of ??$_Destroy_range@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAXPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135604
 * Callers:
 *     ??$_Uninitialized_move@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135B1C (--$_Uninitialized_move@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@.c)
 *     ??1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ @ 0x1801363D8 (--1InteractionTracker@Interactions@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ @ 0x180138B90 (-Destroy@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAXXZ.c)
 *     ?_Change_array@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@_K1@Z @ 0x18013C664 (-_Change_array@-$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Wi.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 */

int __fastcall std::_Destroy_range<std::allocator<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>>(
        Microsoft::WRL2::NestableRuntimeClass **a1,
        Microsoft::WRL2::NestableRuntimeClass **a2)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // rbx
  int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v3 + 1);
      result = Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
