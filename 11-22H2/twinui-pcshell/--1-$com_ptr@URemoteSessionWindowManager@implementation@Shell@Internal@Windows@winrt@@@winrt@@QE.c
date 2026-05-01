/*
 * XREFs of ??1?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180705374
 * Callers:
 *     __lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs__::_1_::dtor$0 @ 0x18027A5C7 (__lambda_f7708ede42cbb90dfb878b61b26817f2_--operator()_winrt--Windows--Internal--Shell--ProcessI.c)
 *     __lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs__::_1_::dtor$2 @ 0x18027A852 (__lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Sh_ea_18027A852.c)
 *     __lambda_501a545e3e62ea2d6f88499b5047d98e_::operator()_::_1_::dtor$0 @ 0x18027B58A (__lambda_501a545e3e62ea2d6f88499b5047d98e_--operator()_--_1_--dtor$0.c)
 *     __lambda_665315f8e7a3be3e9382c02473f3b139_::operator()_::_1_::dtor$0 @ 0x18027BB22 (__lambda_665315f8e7a3be3e9382c02473f3b139_--operator()_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_unsigned_int___lambda_59a2c452c266c39cf2d30705a14a3598___::Invoke_::_1_::dtor$0 @ 0x18027BC52 (_winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_unsigned_int___lambda_59a2c452c2.c)
 *     _std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call_::_1_::dtor$0 @ 0x18027C73F (_std--_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt--guid_const_-_--_.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::RecoverRemoteSessions_::_1_::dtor$1 @ 0x1802B5AE4 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--RecoverRemoteSe_ea_1802B5AE4.c)
 *     __lambda_1b883f708510332cacc7ae6dcbc72df7_::operator()_::_1_::dtor$3 @ 0x1807056F7 (__lambda_1b883f708510332cacc7ae6dcbc72df7_--operator()_--_1_--dtor$3.c)
 *     __lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const___::_1_::dtor$1 @ 0x18071E213 (__lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Sh_ea_18071E213.c)
 *     __lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable__::_1_::dtor$1 @ 0x18071E4AA (__lambda_c4158f368c90993acd5619817087aedd_--operator()_winrt--Windows--Internal--Sh_ea_18071E4AA.c)
 *     __lambda_1cf95a55fff0866401cd411783285d2a_::operator()_::_1_::dtor$0 @ 0x1807206AB (__lambda_1cf95a55fff0866401cd411783285d2a_--operator()_--_1_--dtor$0.c)
 *     __lambda_d2929146ab183b5cd17811f33a4bdab8_::operator()_::_1_::dtor$0 @ 0x180720782 (__lambda_d2929146ab183b5cd17811f33a4bdab8_--operator()_--_1_--dtor$0.c)
 *     _winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke_::_1_::dtor$0 @ 0x180721BAA (_winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___l.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8 (-unconditional_release_ref@-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@W.c)
 */

signed __int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::~com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>(
        volatile signed __int64 **a1)
{
  signed __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(a1);
  return result;
}
