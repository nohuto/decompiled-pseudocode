/*
 * XREFs of ??$_Move_unchecked@PEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@@std@@YAPEAUInteractionTrackerBindingInfoListItem@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@PEAU123456@00@Z @ 0x180187A74
 * Callers:
 *     ?RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAXPEAVInteractionTracker@2345@@Z @ 0x180187B08 (-RemoveTrackerBindings@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 *     ?SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEAAJIIW4InteractionBindingAxisModes@2345@@Z @ 0x180187BFC (-SetTrackerBindingMode@InteractionTrackerBindingManager@Interactions@Composition@UI@Windows@@QEA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Move_unchecked<Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *,Windows::UI::Composition::Interactions::InteractionTrackerBindingManager::InteractionTrackerBindingInfoListItem *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  while ( a1 != a2 )
  {
    *(_QWORD *)a3 = *(_QWORD *)a1;
    *(_DWORD *)(a3 + 8) = *(_DWORD *)(a1 + 8);
    a3 += 12LL;
    a1 += 12LL;
  }
  return a3;
}
