/*
 * XREFs of ?GetRuntimeClassName@CompositionNotificationDeferral@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180128370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::CompositionNotificationDeferral::GetRuntimeClassName(
        Windows::UI::Composition::CompositionNotificationDeferral *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.CompositionNotificationDeferral", 0x36u, a2);
}
