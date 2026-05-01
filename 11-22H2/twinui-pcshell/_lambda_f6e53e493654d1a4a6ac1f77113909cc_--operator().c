/*
 * XREFs of _lambda_f6e53e493654d1a4a6ac1f77113909cc_::operator() @ 0x180250478
 * Callers:
 *     wil::details::lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___::_lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___ @ 0x18024F77C (wil--details--lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___--_lambda_call__lambda_f6e5.c)
 * Callees:
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPrivate@23Internal@45@@winrt@@YA?A_PXZ @ 0x18069CB14 (--$get_activation_factory@USecondaryTile@StartScreen@UI@Windows@winrt@@UISecondaryTileStaticsPri.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f6e53e493654d1a4a6ac1f77113909cc_::operator()(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  const char *v4; // r9
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_QWORD *)(a1 + 32) )
  {
    try
    {
      winrt::get_activation_factory<winrt::Windows::UI::StartScreen::SecondaryTile,winrt::Windows::Internal::UI::StartScreen::ISecondaryTileStaticsPrivate>();
      v2 = *(_QWORD *)(a1 + 32);
      winrt::param::hstring::hstring((winrt::param::hstring *)v5, (const unsigned __int16 *)a1);
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 72LL))(v7, v5[0], v2);
      if ( v3 < 0 )
        winrt::throw_hresult((unsigned int)v3);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v7);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x27C,
        (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        v4);
    }
  }
}
