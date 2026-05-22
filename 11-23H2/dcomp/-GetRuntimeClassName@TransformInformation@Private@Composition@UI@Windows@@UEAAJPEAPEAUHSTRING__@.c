/*
 * XREFs of ?GetRuntimeClassName@TransformInformation@Private@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180107640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Private::TransformInformation::GetRuntimeClassName(
        Windows::UI::Composition::Private::TransformInformation *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Private.TransformInformation", 0x33u, a2);
}
