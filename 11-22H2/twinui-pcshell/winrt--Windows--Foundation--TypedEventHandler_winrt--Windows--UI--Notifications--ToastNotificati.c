/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x1806AA8D0
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$1 @ 0x180253800 (RequestNotificationPinConsentAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___ @ 0x1806AB054 (winrt--impl--make_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Win_ea_1806AB054.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs_::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v4; // rcx
  std::_Ref_count_base *v5; // rcx

  winrt::impl::make_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Notifications::ToastNotification_winrt::Windows::UI::Notifications::ToastDismissedEventArgs___lambda_6807652e6b1c0efb3e562aabb82d8bec___(a1);
  v4 = *(std::_Ref_count_base **)(a2 + 24);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  v5 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return a1;
}
