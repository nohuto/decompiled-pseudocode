/*
 * XREFs of ?get@?$weak_ref@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@@winrt@@QEBA?AUIListViewBase4@Controls@Xaml@UI@Windows@2@XZ @ 0x18060CBDC
 * Callers:
 *     ??1?$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFA@AA@impl@winrt@@QEAA@XZ @ 0x180607CCC (--1-$event_revoker@UIListViewBase4@Controls@Xaml@UI@Windows@winrt@@$MP8type@-$abi@UIListViewBase.c)
 *     ?v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ @ 0x18060CFC0 (-v_DismissView@VirtualDesktopSwitcherHost@@MEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::UI::Xaml::Controls::IListViewBase4>::get(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Controls::IListViewBase4>,
      &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
