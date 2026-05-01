/*
 * XREFs of ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18043B244
 * Callers:
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180200CC0 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@Wi.c)
 *     ?__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x180200CE0 (-__abi_GetRuntimeClassName@ItemContextMenuInvokedHandler@Switcher@Experiences@Compo_ea_180200CE0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.ItemContextMenuInvokedHandler",
           0x52u,
           a2);
}
