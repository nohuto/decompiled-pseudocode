/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180139850
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF980 (-GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@W.c)
 *     ?GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF9A0 (-GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Com_ea_1800AF9A0.c)
 *     ?GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF9C0 (-GetRuntimeClassName@InteractionTrackerInteractingStateEnteredArgs@Interactions@Com_ea_1800AF9C0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerInteractingStateEnteredArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(
           L"Windows.UI.Composition.Interactions.InteractionTrackerInteractingStateEnteredArgs",
           0x51u,
           a2);
}
