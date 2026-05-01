/*
 * XREFs of ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180572E40
 * Callers:
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x18020DEB0 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18020DED0 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18020DEF0 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18020DF10 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall StartupTaskActivatedEventArgsImpl::GetRuntimeClassName(
        StartupTaskActivatedEventArgsImpl *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.ApplicationModel.Activation.StartupTaskActivatedEventArgs", 0x41u, a2);
}
