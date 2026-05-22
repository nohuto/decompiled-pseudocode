/*
 * XREFs of ?GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801398B0
 * Callers:
 *     ?GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AFA20 (-GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WD.c)
 *     ?GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@@WDI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AFA40 (-GetRuntimeClassName@InteractionTrackerValuesChangedArgs@Interactions@Composition@U_ea_1800AFA40.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::InteractionTrackerValuesChangedArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Interactions.InteractionTrackerValuesChangedArgs", 0x47u, a2);
}
