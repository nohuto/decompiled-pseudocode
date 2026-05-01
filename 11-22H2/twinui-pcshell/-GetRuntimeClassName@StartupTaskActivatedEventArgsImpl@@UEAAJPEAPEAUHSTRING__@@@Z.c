/*
 * XREFs of ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180630C20
 * Callers:
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AA100 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@W7EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AA120 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AA140 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1802AA160 (-GetRuntimeClassName@StartupTaskActivatedEventArgsImpl@@WKA@EAAJPEAPEAUHSTRING__@@@Z.c)
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
