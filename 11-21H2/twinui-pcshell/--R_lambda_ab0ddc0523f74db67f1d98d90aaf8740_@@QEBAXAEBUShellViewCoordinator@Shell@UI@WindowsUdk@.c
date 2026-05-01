/*
 * XREFs of ??R_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Z @ 0x1805E0DD8
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UDismissShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_ab0ddc0523f74db67f1d98d90aaf8740_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805E1E60 (-Invoke@-$delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@w_ea_1805E1E60.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1800FC164 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x180126F80 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUDismissShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F4D4 (-Options@-$consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs@UIDismissShellViewReq.c)
 *     ?TelemetryId@?$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1805BDE30 (-TelemetryId@-$consume_WindowsUdk_UI_Shell_IDismissShellViewOptions@UIDismissShellViewOptions@Sh.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1805DF350 (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z @ 0x1805DF39C (--$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z.c)
 *     ?OnControlUnloaded@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x1805E2044 (-OnControlUnloaded@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall _lambda_ab0ddc0523f74db67f1d98d90aaf8740_::operator()(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager **a1,
        volatile signed __int32 *a2,
        __int64 *a3)
{
  __int64 v5; // rbx
  signed int v6; // eax
  volatile signed __int32 **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15[2]; // [rsp+20h] [rbp-10h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp+28h] BYREF
  __int64 *v17; // [rsp+60h] [rbp+30h]
  volatile signed __int32 *v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = a3;
  v16 = a2;
  v18 = 0LL;
  winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IDismissShellViewRequestedEventArgs>::Options(
    a3,
    v15);
  v5 = v15[0];
  if ( v15[0] )
  {
    LODWORD(v16) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v15[0] + 48LL))(v15[0], &v16);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    v7 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_UI_Shell_IDismissShellViewOptions<winrt::WindowsUdk::UI::Shell::IDismissShellViewOptions>::TelemetryId(
                                       v15,
                                       &v16);
    if ( &v18 != v7 )
    {
      v11 = *v7;
      *v7 = 0LL;
      v18 = v11;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v16, v8, v9, v10);
  }
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)v15);
  winrt::hstring::operator std::basic_string_view<unsigned short>((__int64 *)&v18, v15);
  if ( std::_Traits_equal<std::char_traits<unsigned short>>(v15[0], v15[1], (__int64)L"ControlUnloaded", 15LL) )
    winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::OnControlUnloaded(*a1);
  if ( *((_QWORD *)*a1 + 25) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[22]>((__int64)L"Hide calling callback");
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)*a1 + 25) + 32LL))(*((_QWORD *)*a1 + 25));
  }
  else
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>((__int64)L"Hide callback null");
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v18, v12, v13, v14);
  if ( *a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
}
