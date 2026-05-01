/*
 * XREFs of ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJXZ @ 0x1804459C4
 * Callers:
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WBI@E$AAAJXZ @ 0x1802039A0 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAUISwitchItemCo.c)
 *     ?__abi_Platform_IDisposable____abi__Dispose_@?QIDisposable@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@WCI@E$AAAJXZ @ 0x1802039C0 (-__abi_Platform_IDisposable____abi__Dispose_@-QIDisposable@Platform@@-$Array@PE$AAU_ea_1802039C0.c)
 * Callees:
 *     ??1?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QE$AAA@XZ @ 0x180440F70 (--1-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Wi.c)
 */

__int64 __fastcall ___abi_Platform_IDisposable____abi__Dispose___QIDisposable_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_2_UE_AAAJXZ(
        __int64 a1)
{
  __int64 v1; // rcx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    *(_BYTE *)(a1 + 128) = 1;
    v1 = a1 + 32;
    if ( v1 )
    {
      if ( !*(_BYTE *)(v1 + 72) )
      {
        try
        {
          *(_BYTE *)(v1 + 72) = 1;
          Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::~WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>(v1);
        }
        catch ( ... )
        {
          __abi_translateCurrentException();
        }
      }
    }
  }
  return 0LL;
}
