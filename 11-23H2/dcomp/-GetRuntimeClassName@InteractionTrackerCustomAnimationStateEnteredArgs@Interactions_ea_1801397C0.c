/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801397C0
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF840 (-GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@.c)
 *     ?GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF860 (-GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions_ea_1800AF860.c)
 *     ?GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF880 (-GetRuntimeClassName@InteractionTrackerCustomAnimationStateEnteredArgs@Interactions_ea_1800AF880.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerCustomAnimationStateEnteredArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.UI.Composition.Interactions.InteractionTrackerCustomAnimationStateEnteredArgs",
           0x55u,
           a2);
}
