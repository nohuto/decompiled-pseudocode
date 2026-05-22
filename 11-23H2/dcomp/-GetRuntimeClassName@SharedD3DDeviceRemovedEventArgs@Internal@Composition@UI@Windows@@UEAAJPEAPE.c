/*
 * XREFs of ?GetRuntimeClassName@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800A5ED0
 * Callers:
 *     ?GetRuntimeClassName@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@WDA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B0D80 (-GetRuntimeClassName@SharedD3DDeviceRemovedEventArgs@Internal@Composition@UI@Windows@@WDA@EAAJPE.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs::GetRuntimeClassName(
        Windows::UI::Composition::Internal::SharedD3DDeviceRemovedEventArgs *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.Composition.Internal.SharedD3DDeviceRemovedEventArgs", 0x3Fu, a2);
}
