/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801397F0
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF8A0 (-GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@.c)
 *     ?GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF8C0 (-GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Compositio_ea_1800AF8C0.c)
 *     ?GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF8E0 (-GetRuntimeClassName@InteractionTrackerIdleStateEnteredArgs@Interactions@Compositio_ea_1800AF8E0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerIdleStateEnteredArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Interactions.InteractionTrackerIdleStateEnteredArgs", 0x4Au, a2);
}
