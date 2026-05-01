/*
 * XREFs of _lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_ @ 0x1801C4550
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___ @ 0x1801C155C (winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--hs.c)
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1____::_1_::dtor$0 @ 0x1801C15C1 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--Foundation--IInspectable_winrt--h.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___::_implements_delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::hstring___lambda_c7ad7d039b35a8565706af83963bb0b1___ @ 0x1801C4638 (winrt--impl--implements_delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--F.c)
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::perform_delayed_initialization_::_1_::dtor$1 @ 0x18022429C (_winrt--Windows--Internal--Shell--implementation--DashboardManager--perform_delayed_initializati.c)
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_ee45b6845675de9c207e4cdce24e0e3d____::_1_::dtor$0 @ 0x1805A02C7 (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_ee45b684567.c)
 *     _SnapFlyoutHost::StartDismissTimer_::_1_::dtor$7 @ 0x1805B0B68 (_SnapFlyoutHost--StartDismissTimer_--_1_--dtor$7.c)
 *     _SnapFlyoutHost::StartInvokeTimer_::_1_::dtor$7 @ 0x1805B0DC4 (_SnapFlyoutHost--StartInvokeTimer_--_1_--dtor$7.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall lambda_c7ad7d039b35a8565706af83963bb0b1_::__lambda_c7ad7d039b35a8565706af83963bb0b1_(__int64 *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
  return result;
}
