/*
 * XREFs of ?_Change_array@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@AEAAXQEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@_K1@Z @ 0x180187D40
 * Callers:
 *     ??$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@?$vector@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@V?$allocator@UInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@@std@@@std@@QEAAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAU234567@AEAI1AEAW4InteractionTrackerBindingModeFlags@@@Z @ 0x1801878EC (--$_Emplace_reallocate@AEAIAEAIAEAW4InteractionTrackerBindingModeFlags@@@-$vector@UInteractionTr.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, 4 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 2));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 12 * a3;
  result = 3 * a4;
  *(_QWORD *)(a1 + 16) = a2 + 12 * a4;
  return result;
}
