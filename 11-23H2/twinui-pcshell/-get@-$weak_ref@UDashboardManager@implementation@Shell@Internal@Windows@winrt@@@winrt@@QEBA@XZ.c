/*
 * XREFs of ?get@?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x180698EA8
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_3e6690ebfd5912eedaaffd7303d678cc___::Invoke @ 0x18023EA70 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_18023EA70.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_ResumeCoro$1 @ 0x180243DB0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_R.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::get(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v2 + 24LL))(
      v2,
      winrt::impl::guid_v<winrt::Windows::Internal::Shell::IDashboardManager>,
      &v6);
    if ( v6 )
      v3 = v6 - 16;
    *a2 = v3;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
