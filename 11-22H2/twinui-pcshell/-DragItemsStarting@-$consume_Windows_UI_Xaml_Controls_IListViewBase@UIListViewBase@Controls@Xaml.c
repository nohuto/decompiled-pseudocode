/*
 * XREFs of ?DragItemsStarting@?$consume_Windows_UI_Xaml_Controls_IListViewBase@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BNA@AA@23@Uauto_revoke_t@3@AEBUDragItemsStartingEventHandler@Controls@Xaml@UI@Windows@3@@Z @ 0x180774110
 * Callers:
 *     ?ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ @ 0x180776AD0 (-ViewLoaded@VirtualDesktopSwitcherHost@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUIListViewBase@Controls@Xaml@UI@Windows@winrt@@@?$weak_ref@UIListViewBase@Controls@Xaml@UI@Windows@winrt@@@winrt@@AEAAXAEBUIListViewBase@Controls@Xaml@UI@Windows@1@@Z @ 0x180770B8C (--$from_com_ref@AEBUIListViewBase@Controls@Xaml@UI@Windows@winrt@@@-$weak_ref@UIListViewBase@Con.c)
 */

__int64 *__fastcall winrt::impl::consume_Windows_UI_Xaml_Controls_IListViewBase<winrt::Windows::UI::Xaml::Controls::IListViewBase>::DragItemsStarting(
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
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[25])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase>::from_com_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
