/*
 * XREFs of ?GetRuntimeClassName@AppContentRoot@UI@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180114370
 * Callers:
 *     ?GetRuntimeClassName@AppContentRoot@UI@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD470 (-GetRuntimeClassName@AppContentRoot@UI@Windows@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@AppContentRoot@UI@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800AD490 (-GetRuntimeClassName@AppContentRoot@UI@Windows@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::UI::AppContentRoot::GetRuntimeClassName(Windows::UI::AppContentRoot *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.UI.UIContentRoot", 0x18u, a2);
}
