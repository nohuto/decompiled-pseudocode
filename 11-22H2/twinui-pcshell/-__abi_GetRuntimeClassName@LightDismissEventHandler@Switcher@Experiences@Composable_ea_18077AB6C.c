/*
 * XREFs of ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18077AB6C
 * Callers:
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802AF1E0 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@Windows.c)
 *     ?__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802AF200 (-__abi_GetRuntimeClassName@LightDismissEventHandler@Switcher@Experiences@Composable_ea_1802AF200.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::LightDismissEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.LightDismissEventHandler",
           0x4Du,
           a2);
}
