/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180139820
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF900 (-GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windo.c)
 *     ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF920 (-GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composi_ea_1800AF920.c)
 *     ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF940 (-GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composi_ea_1800AF940.c)
 *     ?GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@@WEI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF960 (-GetRuntimeClassName@InteractionTrackerInertiaStateEnteredArgs@Interactions@Composi_ea_1800AF960.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerInertiaStateEnteredArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaStateEnteredArgs",
           0x4Du,
           a2);
}
