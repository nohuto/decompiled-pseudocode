/*
 * XREFs of ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x180440F70
 * Callers:
 *     ?_Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18043FBC0 (-_Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItemContextMenuMetadata@Swi_ea_18043FBC0.c)
 *     ?_Dispose_@?QIDisposable@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAXXZ @ 0x18043FBF8 (-_Dispose_@-QIDisposable@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMet_ea_18043FBF8.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJXZ @ 0x1804459C4 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAU_ea_1804459C4.c)
 * Callees:
 *     ?DestructElementsAndFree@?$array_helper@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$0A@@Details@Platform@@SAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x180442A3C (-DestructElementsAndFree@-$array_helper@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experience.c)
 */

__int64 __fastcall Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(
        __int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 44) )
  {
    v2 = *(void **)(a1 + 48);
    if ( v2 )
      result = Platform::Details::array_helper<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,0>::DestructElementsAndFree(v2);
  }
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_BYTE *)(a1 + 44) = 0;
  return result;
}
