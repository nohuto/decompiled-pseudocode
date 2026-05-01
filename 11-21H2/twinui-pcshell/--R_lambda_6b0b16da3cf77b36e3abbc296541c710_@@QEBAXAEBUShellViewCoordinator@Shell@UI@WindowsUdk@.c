/*
 * XREFs of ??R_lambda_6b0b16da3cf77b36e3abbc296541c710_@@QEBAXAEBUShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Z @ 0x1805E0A7C
 * Callers:
 *     ?Invoke@?$delegate@U?$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@UShowShellViewRequestedEventArgs@2345@@Foundation@Windows@winrt@@V_lambda_6b0b16da3cf77b36e3abbc296541c710_@@@impl@winrt@@UEAAHPEAX0@Z @ 0x1805E1ED0 (-Invoke@-$delegate@U-$TypedEventHandler@UShellViewCoordinator@Shell@UI@WindowsUdk@w_ea_1805E1ED0.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?Options@?$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUShowShellViewOptions@Shell@UI@WindowsUdk@3@XZ @ 0x18034F528 (-Options@-$consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs@UIShowShellViewRequested.c)
 *     ?TelemetryId@?$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1805BDE84 (-TelemetryId@-$consume_WindowsUdk_UI_Shell_IShowShellViewOptions@UIShowShellViewOptions@Shell@UI.c)
 *     ??$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z @ 0x1805DF350 (--$InputSwitchTrace@AEAY0BD@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BD@$$CBG@Z.c)
 *     ??$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z @ 0x1805DF39C (--$InputSwitchTrace@AEAY0BG@$$CBG@InputSwitchingManagerTelemetry@@SAXAEAY0BG@$$CBG@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall _lambda_6b0b16da3cf77b36e3abbc296541c710_::operator()(
        __int64 a1,
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
  __int64 v15; // [rsp+50h] [rbp+28h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp+30h] BYREF
  __int64 *v17; // [rsp+60h] [rbp+38h]
  volatile signed __int32 *v18; // [rsp+68h] [rbp+40h] BYREF

  v17 = a3;
  v16 = a2;
  *(_DWORD *)(*(_QWORD *)a1 + 252LL) = 4;
  v18 = 0LL;
  winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewRequestedEventArgs<winrt::WindowsUdk::UI::Shell::IShowShellViewRequestedEventArgs>::Options(
    a3,
    &v15);
  v5 = v15;
  if ( v15 )
  {
    LODWORD(v16) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, volatile signed __int32 **))(*(_QWORD *)v15 + 96LL))(v15, &v16);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    v7 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_UI_Shell_IShowShellViewOptions<winrt::WindowsUdk::UI::Shell::IShowShellViewOptions>::TelemetryId(
                                       &v15,
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
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 200LL) )
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[22]>((__int64)L"Show calling callback");
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 200LL) + 24LL))(*(_QWORD *)(*(_QWORD *)a1 + 200LL));
  }
  else
  {
    InputSwitchingManagerTelemetry::InputSwitchTrace<unsigned short const (&)[19]>((__int64)L"Show Callback null");
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v18, v12, v13, v14);
  if ( *a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a3);
}
