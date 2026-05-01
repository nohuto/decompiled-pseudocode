/*
 * XREFs of _lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_ @ 0x18064E204
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_winrt::Windows::UI::Input::ManipulationUpdatedEventArgs___lambda_cd8c6316c996060cbab4a596526042be___::Invoke @ 0x180650B00 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows-_ea_180650B00.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?ContactCount@?$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEventArgs@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18064FDA4 (-ContactCount@-$consume_Windows_UI_Input_IManipulationUpdatedEventArgs2@UManipulationUpdatedEven.c)
 *     ?ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z @ 0x18064FE44 (-ContinueSwipe@TouchGestureProcessor@@QEAAXAEBUPoint@Foundation@Windows@winrt@@0@Z.c)
 *     ?StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z @ 0x180651D0C (-StartSwipe@TouchGestureProcessor@@QEAAXIAEBUPoint@Foundation@Windows@winrt@@@Z.c)
 */

void __fastcall lambda_cd8c6316c996060cbab4a596526042be_::operator()_winrt::Windows::UI::Internal::Input::PhysicalGestureRecognizer_(
        TouchGestureProcessor **a1,
        __int64 a2,
        __int64 *a3)
{
  TouchGestureProcessor *v3; // rbx
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  signed int v8; // eax
  signed int v9; // eax
  unsigned int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+30h] [rbp-28h]
  __int128 v13; // [rsp+38h] [rbp-20h] BYREF

  v3 = *a1;
  v5 = *a3;
  if ( *(_QWORD *)v3 )
  {
    v13 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 80LL))(v5, &v13);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    v7 = *a3;
    v12 = 0;
    v11 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v7 + 64LL))(v7, &v11);
    if ( v8 < 0 )
      winrt::throw_hresult(v8);
    TouchGestureProcessor::ContinueSwipe(
      v3,
      (const struct winrt::Windows::Foundation::Point *)&v11,
      (const struct winrt::Windows::Foundation::Point *)&v13);
  }
  else
  {
    v12 = 0;
    v11 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 72LL))(v5, &v11);
    if ( v9 < 0 )
      winrt::throw_hresult(v9);
    v10 = winrt::impl::consume_Windows_UI_Input_IManipulationUpdatedEventArgs2<winrt::Windows::UI::Input::ManipulationUpdatedEventArgs>::ContactCount(a3);
    TouchGestureProcessor::StartSwipe(v3, v10, (const struct winrt::Windows::Foundation::Point *)&v11);
  }
}
