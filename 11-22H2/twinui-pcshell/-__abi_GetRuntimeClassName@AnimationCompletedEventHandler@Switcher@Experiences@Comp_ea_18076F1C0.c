/*
 * XREFs of ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAJPEAPEAUHSTRING__@@@Z @ 0x18076F1C0
 * Callers:
 *     ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@W7E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802AE860 (-__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@W.c)
 *     ?__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@WBA@E$AAAJPEAPEAUHSTRING__@@@Z @ 0x1802AE880 (-__abi_GetRuntimeClassName@AnimationCompletedEventHandler@Switcher@Experiences@Comp_ea_1802AE880.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::__abi_GetRuntimeClassName(
        __int64 a1,
        HSTRING *a2)
{
  return __winRT::__windowsCreateString(
           L"WindowsInternal.ComposableShell.Experiences.Switcher.AnimationCompletedEventHandler",
           0x53u,
           a2);
}
