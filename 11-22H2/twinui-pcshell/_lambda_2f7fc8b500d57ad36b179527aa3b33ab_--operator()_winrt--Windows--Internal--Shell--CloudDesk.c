/*
 * XREFs of _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x18071E164
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable___lambda_2f7fc8b500d57ad36b179527aa3b33ab___::Invoke @ 0x180721BF0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180721BF0.c)
 * Callees:
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 *     ?SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEBAXXZ @ 0x180723828 (-SwitchToLocalVirtualDesktopInLocalSession@RemoteSessionWindowManager@implementation@Shell@Inter.c)
 *     ?get@?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x1807246EC (-get@-$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@.c)
 *     ?open_and_watch_errors@?$tip_test@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@tip@@QEAA?AV?$test_watcher@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winrt@@@2@XZ @ 0x180724A0C (-open_and_watch_errors@-$tip_test@U_tip_WaitOnLocalPCTest@implementation@TransitionScreenUI@winr.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__(
        __int64 a1,
        __int64 a2,
        winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *a3)
{
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v4; // rbx
  __int128 v5; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[24]; // [rsp+38h] [rbp-40h] BYREF
  int v8; // [rsp+50h] [rbp-28h]
  __int64 v9; // [rsp+60h] [rbp-18h]
  std::_Ref_count_base *v10; // [rsp+68h] [rbp-10h]
  winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager *v11; // [rsp+90h] [rbp+18h] BYREF

  v11 = a3;
  v5 = 0LL;
  tip::tip_test<winrt::TransitionScreenUI::implementation::_tip_WaitOnLocalPCTest>::open_and_watch_errors(&v5, &v6);
  if ( *((_QWORD *)&v5 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v5 + 1));
  winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::get(a1, &v11);
  v4 = v11;
  if ( v11 )
  {
    winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::SwitchToLocalVirtualDesktopInLocalSession(v11);
    tip::details::test_common_data<1>::complete(v9 + 8);
  }
  if ( v4 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref((volatile signed __int64 **)&v11);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
}
