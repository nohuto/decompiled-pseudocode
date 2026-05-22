/*
 * XREFs of ?GetRuntimeClassName@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180131310
 * Callers:
 *     ?GetRuntimeClassName@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AEFB0 (-GetRuntimeClassName@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@WDA@EAA.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::GetRuntimeClassName(
        Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Interactions.Internal.EdgyDetectedEventArgs", 0x42u, a2);
}
