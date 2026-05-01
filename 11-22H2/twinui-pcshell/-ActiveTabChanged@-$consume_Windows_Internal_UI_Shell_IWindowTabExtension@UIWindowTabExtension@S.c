/*
 * XREFs of ?ActiveTabChanged@?$consume_Windows_Internal_UI_Shell_IWindowTabExtension@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@UActiveTabChangedEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18078E42C
 * Callers:
 *     ?RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@@AEBUIWindowTabExtension@9UI@Internal@Windows@winrt@@@Z @ 0x180081080 (-RuntimeClassInitialize@AppViewDataSourceAdapter@@QEAAJW4DesktopSwitcherDataSourceScopeOptions@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@?$weak_ref@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@winrt@@AEAAXAEBUIWindowTabExtension@Shell@UI@Internal@Windows@1@@Z @ 0x18078DFF8 (--$from_com_ref@AEBUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@-$weak_ref@UIWindowTab.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabExtension<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::ActiveTabChanged(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[10])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>::from_com_ref<winrt::Windows::Internal::UI::Shell::IWindowTabExtension const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
