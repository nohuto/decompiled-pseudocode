/*
 * XREFs of ?GetRuntimeClassName@SharedD3DDevice@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A1670
 * Callers:
 *     ?GetRuntimeClassName@SharedD3DDevice@Internal@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AA6B0 (-GetRuntimeClassName@SharedD3DDevice@Internal@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Internal::SharedD3DDevice::GetRuntimeClassName(
        Windows::UI::Composition::Internal::SharedD3DDevice *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Internal.SharedD3DDevice", 0x2Fu, a2);
}
