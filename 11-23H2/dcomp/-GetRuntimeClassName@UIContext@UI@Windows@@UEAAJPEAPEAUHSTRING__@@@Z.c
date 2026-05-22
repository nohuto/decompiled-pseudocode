/*
 * XREFs of ?GetRuntimeClassName@UIContext@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801143A0
 * Callers:
 *     ?GetRuntimeClassName@UIContext@UI@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD4B0 (-GetRuntimeClassName@UIContext@UI@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@UIContext@UI@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD4D0 (-GetRuntimeClassName@UIContext@UI@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::UIContext::GetRuntimeClassName(Windows::UI::UIContext *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.UIContext", 0x14u, a2);
}
