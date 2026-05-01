/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18043B27C
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180200D40 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsI.c)
 *     ?__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180200D60 (-__abi_GetRuntimeClassName@ItemInvokedEventHandler@Switcher@Experiences@ComposableS_ea_180200D60.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemInvokedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemInvokedEventHandler",
           0x4Cu,
           a2);
}
