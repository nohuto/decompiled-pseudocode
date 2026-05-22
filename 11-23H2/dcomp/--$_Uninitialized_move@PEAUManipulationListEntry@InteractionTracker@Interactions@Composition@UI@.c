/*
 * XREFs of ??$_Uninitialized_move@PEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@0PEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135B1C
 * Callers:
 *     ??$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@?$vector@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU234567@$$QEAU234567@@Z @ 0x180135858 (--$_Emplace_reallocate@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Win.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@std@@@std@@YAXPEAUManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@QEAU123456@AEAV?$allocator@UManipulationListEntry@InteractionTracker@Interactions@Composition@UI@Windows@@@0@@Z @ 0x180135604 (--$_Destroy_range@V-$allocator@UManipulationListEntry@InteractionTracker@Interactions@Compositio.c)
 */

Microsoft::WRL2::NestableRuntimeClass **__fastcall std::_Uninitialized_move<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry *>(
        char *a1,
        char *a2,
        __int64 a3)
{
  Microsoft::WRL2::NestableRuntimeClass **v3; // rbx
  _QWORD *v4; // r8
  signed __int64 v5; // r9
  Microsoft::WRL2::NestableRuntimeClass **v6; // rcx
  _QWORD *v7; // rcx

  v3 = (Microsoft::WRL2::NestableRuntimeClass **)a3;
  if ( a1 != a2 )
  {
    v4 = (_QWORD *)(a3 + 8);
    v5 = a1 - (char *)v3;
    do
    {
      *v3 = 0LL;
      v6 = (Microsoft::WRL2::NestableRuntimeClass **)((char *)v4 + v5 - 8);
      if ( v3 != v6 )
      {
        *v3 = *v6;
        *v6 = 0LL;
      }
      v7 = (_QWORD *)((char *)v4 + v5);
      *v4 = 0LL;
      if ( v4 != (_QWORD *)((char *)v4 + v5) )
      {
        *v4 = *v7;
        *v7 = 0LL;
      }
      v4 += 2;
      v3 += 2;
    }
    while ( (char *)v4 + v5 - 8 != a2 );
  }
  std::_Destroy_range<std::allocator<Windows::UI::Composition::Interactions::InteractionTracker::ManipulationListEntry>>(
    v3,
    v3);
  return v3;
}
