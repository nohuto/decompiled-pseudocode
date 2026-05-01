/*
 * XREFs of ?CopyToOrDetach@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AE$AAAXPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x180441F4C
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_get_Value@?Q?$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@UE$AAAJPEAIPEAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1804458F0 (-__abi_Platform_-$IBoxArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Composable.c)
 * Callees:
 *     ?Get@__abi_FTMWeakRefData@@QECAJXZ @ 0x180424F28 (-Get@__abi_FTMWeakRefData@@QECAJXZ.c)
 *     ?AllocateAndCopyElements@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@KAPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEBQE$AAU34567@I@Z @ 0x180441308 (-AllocateAndCopyElements@-$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experien.c)
 */

void __fastcall Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::CopyToOrDetach(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r8

  if ( !a2 || !a3 )
  {
LABEL_13:
    __abi_WinRTraiseNullReferenceException();
    __debugbreak();
    JUMPOUT(0x180442005LL);
  }
  if ( !*(_DWORD *)(a1 + 72) )
  {
    *a2 = 0LL;
    *a3 = 0;
    return;
  }
  if ( !*(_QWORD *)(a1 + 80) )
    goto LABEL_12;
  v6 = a1 + 88;
  if ( !*(_BYTE *)(a1 + 76) )
  {
    if ( (unsigned int)__abi_FTMWeakRefData::Get(v6) == 1 )
    {
      *a2 = *(void **)(a1 + 80);
      *v9 = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 72) = v7;
      *(_BYTE *)(a1 + 76) = v7;
      *(_QWORD *)(a1 + 80) = v7;
      return;
    }
    if ( *(_BYTE *)(a1 + 76) == (_BYTE)v7 && (int)__abi_FTMWeakRefData::Get(v8) <= 1 )
    {
LABEL_12:
      __abi_WinRTraiseFailureException();
      __debugbreak();
      goto LABEL_13;
    }
  }
  *a2 = Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::AllocateAndCopyElements(
          *(__int64 **)(a1 + 80),
          *(_DWORD *)(a1 + 72));
  *a3 = *(_DWORD *)(a1 + 72);
}
