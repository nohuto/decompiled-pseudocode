/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180139880
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AF9E0 (-GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@W.c)
 *     ?GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AFA00 (-GetRuntimeClassName@InteractionTrackerRequestIgnoredArgs@Interactions@Composition@_ea_1800AFA00.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerRequestIgnoredArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Interactions.InteractionTrackerRequestIgnoredArgs", 0x48u, a2);
}
