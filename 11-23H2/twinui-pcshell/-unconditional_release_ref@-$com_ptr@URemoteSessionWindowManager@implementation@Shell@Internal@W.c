/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1801BD9F8
 * Callers:
 *     ?RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18008CD68 (-RecoverRemoteSessions@CloudPCComponent@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     _lambda_f7708ede42cbb90dfb878b61b26817f2_::operator()_winrt::Windows::Internal::Shell::ProcessInfoChangedEventArgs_ @ 0x18027A4DC (_lambda_f7708ede42cbb90dfb878b61b26817f2_--operator()_winrt--Windows--Internal--Shell--ProcessIn.c)
 *     _lambda_af365597022eb112c50f104cc7bcdff6_::operator()_winrt::Windows::Internal::Shell::RemoteSystemWindowAddedEventArgs_ @ 0x18027A5F4 (_lambda_af365597022eb112c50f104cc7bcdff6_--operator()_winrt--Windows--Internal--Shell--RemoteSys.c)
 *     _lambda_501a545e3e62ea2d6f88499b5047d98e_::operator() @ 0x18027AE10 (_lambda_501a545e3e62ea2d6f88499b5047d98e_--operator().c)
 *     _lambda_665315f8e7a3be3e9382c02473f3b139_::operator() @ 0x18027B6B8 (_lambda_665315f8e7a3be3e9382c02473f3b139_--operator().c)
 *     ?Invoke@?$delegate@U?$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266c39cf2d30705a14a3598_@@@impl@winrt@@UEAAHPEAXI@Z @ 0x18027BBE0 (-Invoke@-$delegate@U-$EventHandler@I@Foundation@Windows@winrt@@V_lambda_59a2c452c266c39cf2d30705.c)
 *     std::_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt::guid_const_&_::_Do_call @ 0x18027C6D0 (std--_Func_impl_no_alloc__lambda_1908bf4dcb0a72ead8215abd107bde15__void_winrt--guid_ea_18027C6D0.c)
 *     ??1?$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180705374 (--1-$com_ptr@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QE.c)
 *     _lambda_1b883f708510332cacc7ae6dcbc72df7_::operator() @ 0x180705438 (_lambda_1b883f708510332cacc7ae6dcbc72df7_--operator().c)
 *     _lambda_2f7fc8b500d57ad36b179527aa3b33ab_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_const__winrt::Windows::Foundation::IInspectable_const__ @ 0x18071E164 (_lambda_2f7fc8b500d57ad36b179527aa3b33ab_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     _lambda_c4158f368c90993acd5619817087aedd_::operator()_winrt::Windows::Internal::Shell::CloudDesktop::TransitionScreen::TransitionScreen_winrt::Windows::Foundation::IInspectable_ @ 0x18071E3D0 (_lambda_c4158f368c90993acd5619817087aedd_--operator()_winrt--Windows--Internal--Shell--CloudDesk.c)
 *     _lambda_1cf95a55fff0866401cd411783285d2a_::operator() @ 0x1807203FC (_lambda_1cf95a55fff0866401cd411783285d2a_--operator().c)
 *     _lambda_d2929146ab183b5cd17811f33a4bdab8_::operator() @ 0x1807206E4 (_lambda_d2929146ab183b5cd17811f33a4bdab8_--operator().c)
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::WindowId___lambda_e22f66c9943d4383c52f9a8ad3733f3b___::Invoke @ 0x180721B40 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--UI--WindowId___la.c)
 * Callees:
 *     ?decrement_strong@?$weak_ref@$00$00@impl@winrt@@QEAAIXZ @ 0x1800D8D84 (-decrement_strong@-$weak_ref@$00$00@impl@winrt@@QEAAIXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

signed __int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager>::unconditional_release_ref(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *v1; // rbx
  signed __int64 result; // rax
  int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *a1;
  *a1 = 0LL;
  result = *((_QWORD *)v1 + 1);
  while ( result >= 0 )
  {
    v3 = result - 1;
    v4 = result;
    result = _InterlockedCompareExchange64(v1 + 1, result - 1, result);
    if ( v4 == result )
      goto LABEL_4;
  }
  result = winrt::impl::weak_ref<1,1>::decrement_strong((volatile signed __int32 *)(2 * result));
  v3 = result;
LABEL_4:
  if ( !v3 )
  {
    result = _InterlockedExchange64(v1 + 1, 1LL);
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile signed __int64 *, __int64))(*v1 + 8))(v1, 1LL);
  }
  return result;
}
